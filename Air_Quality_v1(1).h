#include "Arduino.h"
#include "esphome.h"

 

 class Air_Quality_v1 : public PollingComponent, public Sensor { public:
  // constructor
    Air_Quality_v1() : PollingComponent(15000) {}
  
  float get_setup_priority() const override { return esphome::setup_priority::AFTER_WIFI; }
  Sensor *Co2 = new Sensor();
  
  
  void setup() override {
       
       ESP_LOGD("custom","Device connected successfully !");
    
     
   

    
}


  void update() override {
    
    Co2->publish_state(analogRead(A0));
    delay(1000); 
  
   

     
    // This will be called every "update_interval" milliseconds.
  }
  
 };