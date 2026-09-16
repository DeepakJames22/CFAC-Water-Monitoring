#include <omnetpp.h>

using namespace omnetpp;

class CFACScheduler : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;

    double calculatePriority(double criticality, double freshness);
};

Define_Module(CFACScheduler);

double CFACScheduler::calculatePriority(double criticality, double freshness)
{
    return 0.7 * criticality + 0.3 * freshness;
}

void CFACScheduler::initialize()
{
    EV_INFO << "CFAC scheduler initialized." << endl;
}

void CFACScheduler::handleMessage(cMessage *msg)
{
    double criticality = 1.0;
    double freshness = 1.0;

    double priority = calculatePriority(criticality, freshness);

    EV_INFO << "Packet priority: " << priority << endl;

    send(msg, "out");
}
