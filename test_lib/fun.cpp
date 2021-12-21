#include "Arduino.h"
#include "a.h"

int x = 0;            //variable, uso en fun.cpp y test_lib, con uso de extern
uint8_t y = 0;        //variable, uso en fun.cpp

void  laver(){
  Serial.println(s);
  a = 123;
  b = 234;
  c = 789321;
  Serial.print("a + b = ");    Serial.println(a + b);
  Serial.print("c = ");    Serial.println(c);
}

void gapa(){
  int z = 10;   //variable solo reconocida dentro de funcion
  for(x = 0; x < 10; x++)
      Serial.println(x);
      
  Serial.print("x after for = "); Serial.println(x);
  
  if (z == 10)
      y = 5;

  Serial.print("y = ");   Serial.println(y);
}

void byla (){       // el valor de x se afecta de forma global
  Serial.print("x byla = "); 
  Serial.println(x);   
}
