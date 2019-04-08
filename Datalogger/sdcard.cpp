#include <SPI.h>
#include <SD.h>
#include "sdcard.h"

const int chipSelect = 4;


  /*Serial.print("Initializing SD card...");

  // see if the card is present and can be initialized:
  
  
 if(!SD.begin(chipSelect)) {
    //Serial.println("Card failed, or not present");
    // don't do anything more:
    while (1);
  }
  //Serial.println("card initialized.");

  */



void init_sd()
{

  if(! SD.begin(4)) {

    Serial.println("Card failed, or not present");
    //throw an error here 
  }
  else {

    Serial.print("SD card properly initialized");
  }

  // initialize the file to store data 
  File dataFile = SD.open("sensor_data.txt", FILE_WRITE);
  

  
}

void store_values(File dataFile)
{
 //init_sd();
 //File dataFile = SD.open("sensor_data.txt", FILE_WRITE);
 
  // make a string for assembling the data to log:
  String dataString = "";

  // read three sensors and append to the string:
  for (int analogPin = 0; analogPin < 3; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 2) {
      dataString += ",";
    }
  }

  

  // if the file is available, write to it:
  if (dataFile) {
    dataFile.println(dataString);
    dataFile.close();
    // print to the serial port too:
    Serial.println(dataString);
  }
  // if the file isn't open, pop up an error:
  else {
    Serial.println("error opening datalog.txt");
  }

}
