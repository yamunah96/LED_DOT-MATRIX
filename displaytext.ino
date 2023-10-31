//  this module interacts with the hardware on lower level
#include <MD_MAX72xx.h>

//  this module helps to display patterns and animations easily
#include <MD_Parola.h>
#include <SPI.h>

const byte clock_pin = 13;
const byte data_pin = 11;
const byte chip_select_pin = 10;
const byte max_devices = 4;

/* creating instance of MD_Parola class : 
Hardware type : PAROLA_HW
Max devices : number of devices we are using */
MD_Parola matrix = MD_Parola(MD_MAX72XX::PAROLA_HW, chip_select_pin, max_devices);

void setup(){

  Serial.begin(9660);
  matrix.begin();  //  initialise the module
  matrix.displayClear();  //  clear, if there is anything

}

void loop(){

  matrix.setTextAlignment(PA_CENTER);
  matrix.print("Hello");
  delay(2000);
  matrix.setTextAlignment(PA_LEFT);
  matrix.print("Daisy");
  delay(2000);

}
