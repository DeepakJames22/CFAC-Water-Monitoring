#include <omnetpp.h>

using namespace omnetpp;

class AoICalculator : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;

    double calculateAoI(simtime_t currentTime, simtime_t generationTime);
};

Define_Module(AoICalculator);

double AoICalculator::calculateAoI(simtime_t currentTime, simtime_t generationTime)
{
    return (currentTime - generationTime).dbl();
}

void AoICalculator::initialize()
{
    EV_INFO << "AoI calculator initialized." << endl;
}

void AoICalculator::handleMessage(cMessage *msg)
{
    double aoi = calculateAoI(simTime(), msg->getCreationTime());

    EV_INFO << "Packet Age of Information: "
            << aoi << " seconds" << endl;

    delete msg;
}
