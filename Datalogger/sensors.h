
#include <Wire.h>
#include <SPI.h>
//#include "Adafruit_Sensor.h"
//#include <Adafruit_BMP280.h>

#define BMP_SCK  13
#define BMP_MISO 12
#define BMP_MOSI 11 
#define BMP_CS   10

void  init_sensors();
void read_data();
