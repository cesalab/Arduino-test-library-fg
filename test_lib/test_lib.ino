/**Programa de prueba para crear librerias
 * 
 * 
 * el esquema es el siguiente
 * 
 *      test_lib.cpp  <---  a.h  <---  b.h  <---  c.h (aqui declaramos funciones)
 *      
 *                          
 * 
 */


#include "a.h"

String msg = "setup";   //declaramos variable para uso en test_lib
extern int x;   //con extern indicamos que vamos a usar x dentro de este archivo, viene de fun.cpp

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("a = ");    Serial.println(a);        //variable int a, a.h
  Serial.print("b = ");    Serial.println(b);        //variable int b, b.h
  
  Serial.print("a + b = ");    Serial.println(a + b);//suma de variables 
  Serial.println( ); 
  
  laver();                                          //funcion en fun.cpp

  c = 123456789;                                    //variable c.h
  Serial.print("c main = ");    Serial.println(c);
  gapa();                                          //funcion en fun.cpp

  x += 101;
  Serial.println(x);         
  unamuno.println(sim);       //hacemos uso de los define en c.h

  byla(); //vemos si se afecta el valor de x

  //hacemos llamado a funcion por valor y por referencia, vemos diferencias...
  Serial.println(msg); // "setup"
  function1(msg);      // by value (msg is copied)
  Serial.println(msg); // "setup" (msg didn't change)
  function2(msg);      // by reference (msg is not copied)
  Serial.println(msg); // "function2" (msg changed)
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
