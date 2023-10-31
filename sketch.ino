#include <MD_MAX72xx.h>
#include <SPI.h>

const byte clock_pin=13;
const byte data_pin=11;
const byte chip_select_pin=10;
const byte max_devices=1;

/* creating instance of MD_Parola class : 
Hardware type : PAROLA_HW
Max devices : number of devices we are using */
MD_MAX72XX matrix = MD_MAX72XX(MD_MAX72XX::PAROLA_HW, chip_select_pin, max_devices);

void setup(){
  matrix.begin();  //  initialise the module
  matrix.clear();  //  clear, if there is anything
}

void loop(){
  matrix.setPoint(0,1,true);
  delay(10);
}
