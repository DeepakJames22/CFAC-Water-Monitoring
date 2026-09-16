#include <omnetpp.h>

using namespace omnetpp;

class WaterGateway : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

Define_Module(WaterGateway);

void WaterGateway::initialize()
{
    EV_INFO << "Water gateway initialized." << endl;
}

void WaterGateway::handleMessage(cMessage *msg)
{
    EV_INFO << "Gateway received a monitoring packet." << endl;
    delete msg;
}
