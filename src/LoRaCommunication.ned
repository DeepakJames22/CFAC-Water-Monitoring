package cfac_water_monitoring;

simple LoRaCommunication
{
    parameters:
        double dataRate @unit(bps) = default(5000bps);
        double range @unit(m) = default(5000m);
        double packetLossRate = default(0.01);

    gates:
        input in;
        output out;
}
