#include <omnetpp.h>

using namespace omnetpp;

class FIFOScheduler : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

Define_Module(FIFOScheduler);

void FIFOScheduler::initialize()
{
    EV_INFO << "FIFO scheduler initialized." << endl;
}

void FIFOScheduler::handleMessage(cMessage *msg)
{
    EV_INFO << "FIFO scheduler processing packet." << endl;
    send(msg, "out");
}
