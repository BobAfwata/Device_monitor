#ifndef _SDCARD_H
#define _SDCARD_H



#include <SPI.h>
#include <SD.h>
 
 /* -------------------------------------------
  SD card attached to SPI bus as follows:
  MOSI - pin 11
  MISO - pin 12
  CLK - pin 13
  CS - pin 4 (for MKRZero SD: SDCARD_SS_PIN)

---------------------------------------------*/

#define MOSI 11 
#define MISO 12
#define CLK  13
#define CS   4




void init_sd();
void store_values(File dataFile);

#endif
