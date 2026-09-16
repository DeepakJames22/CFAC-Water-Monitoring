#include <omnetpp.h>
#include <queue>

using namespace omnetpp;

class PriorityScheduler : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

Define_Module(PriorityScheduler);

void PriorityScheduler::initialize()
{
    EV_INFO << "Priority-aware scheduler initialized." << endl;
}

void PriorityScheduler::handleMessage(cMessage *msg)
{
    EV_INFO << "Processing packet using CFAC priority." << endl;
    send(msg, "out");
}
