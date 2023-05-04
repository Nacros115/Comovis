// Constant for dry sensor
const int DryValue = 0;
 
// Constant for wet sensor
const int WetValue = 2000;
 
// Variables for soil moisture
int soilMoistureValue;
int soilMoisturePercent;
 
// Analog input port
#define SENSOR_IN A0
 
void setup() {
 
  // Setup Serial Monitor
  Serial.begin(9600);
 
 
   
}
void loop() {
 
  // Get soil mositure value
  soilMoistureValue = analogRead(SENSOR_IN);
 
  // Print to serial monitor
  Serial.print(soilMoistureValue);
  Serial.print(" - ");
 
  // Determine soil moisture percentage value
  soilMoisturePercent = map(soilMoistureValue, DryValue, WetValue, 0, 100);
 
  // Keep values between 0 and 100
  soilMoisturePercent = constrain(soilMoisturePercent, 0, 100);
 
  // Print to serial monitor
  Serial.println(soilMoisturePercent);}
