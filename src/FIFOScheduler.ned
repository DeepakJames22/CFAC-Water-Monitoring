package cfac_water_monitoring;

simple FIFOScheduler
{
    parameters:
        @display("i=block/queue");
    gates:
        input in;
        output out;
}
