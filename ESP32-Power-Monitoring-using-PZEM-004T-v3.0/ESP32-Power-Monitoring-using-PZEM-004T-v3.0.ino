/*
 * ESP32 Power Monitoring using PZEM-004T v3.0
 * Measures Voltage, Current, Power, Energy, Frequency, and Power Factor
 * 
 * Author: Yodha Ardiansyah
 * Website: https://arunovasi.my.id
 * License: Open-source (MIT)
 */

#include <PZEM004Tv30.h>

PZEM004Tv30 pzem(14, 12); // RX -> GPIO14, TX -> GPIO12

void setup() {
    Serial.begin(115200);
    Serial.println("Starting PZEM-004T v3.0 Power Monitoring...");
}

void loop() {
    // Read voltage
    float voltage = pzem.voltage();
    if (!isnan(voltage)) {
        Serial.print("Voltage: ");
        Serial.print(voltage);
        Serial.println(" V");
    } else {
        Serial.println("Error reading voltage!");
    }

    // Read current
    float current = pzem.current();
    if (!isnan(current)) {
        Serial.print("Current: ");
        Serial.print(current);
        Serial.println(" A");
    } else {
        Serial.println("Error reading current!");
    }

    // Read power
    float power = pzem.power();
    if (!isnan(power)) {
        Serial.print("Power: ");
        Serial.print(power);
        Serial.println(" W");
    } else {
        Serial.println("Error reading power!");
    }

    // Read energy
    float energy = pzem.energy();
    if (!isnan(energy)) {
        Serial.print("Energy: ");
        Serial.print(energy, 3);
        Serial.println(" kWh");
    } else {
        Serial.println("Error reading energy!");
    }

    // Read frequency
    float frequency = pzem.frequency();
    if (!isnan(frequency)) {
        Serial.print("Frequency: ");
        Serial.print(frequency, 1);
        Serial.println(" Hz");
    } else {
        Serial.println("Error reading frequency!");
    }

    // Read power factor
    float pf = pzem.pf();
    if (!isnan(pf)) {
        Serial.print("Power Factor: ");
        Serial.println(pf);
    } else {
        Serial.println("Error reading power factor!");
    }

    Serial.println("-----------------------------------");
    delay(2000); // Wait 2 seconds before next reading
}
