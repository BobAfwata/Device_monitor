
#include <SPI.h>
#include <SD.h>
#include "gps.h"
#include "sdcard.h"
#include "sensors.h"
#include "zigbee.h"

const int chipSelect = 4;

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }




     // init sensors 

      init_sensors();
      
      // init sd card
      
      init_sd();
      
      // init zigbee 
      
      init_zigbee();

}

void loop() {

//read sensor values  and display via serial




// read gps values 



// store sensor values into sd card





// send sensor values via zigbee 


 
  
}
