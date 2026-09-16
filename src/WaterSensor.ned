package cfac_water_monitoring;

simple WaterSensor
{
    parameters:
        double samplingInterval @unit(s) = default(10s);
        string sensorType = default("water_level");
        @display("i=device/sensor");
    gates:
        output out;
}
