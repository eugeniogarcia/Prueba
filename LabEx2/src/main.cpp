#include <Arduino.h>

char texto[100];

void setup()
{
  Serial.begin(9600);
  Serial.println("Introduction to pointers \n");
}

void loop()
{
  int *pc, c;

  c = 22;
  sprintf(texto, "Address of c: %p\n", &c);
  Serial.println(texto);

  sprintf(texto, "Value of c: %d\n\n", c); // 22
  Serial.println(texto);

  pc = &c;
  sprintf(texto, "Address of pointer pc: %p\n", pc);
  Serial.println(texto);

  sprintf(texto, "Content of pointer pc: %d\n\n", *pc); // 22
  Serial.println(texto);

  c = 11;
  sprintf(texto, "Address of pointer pc: %p\n", pc);
  Serial.println(texto);

  sprintf(texto, "Content of pointer pc: %d\n\n", *pc); // 11
  Serial.println(texto);

  *pc = 2;
  sprintf(texto, "Address of c: %p\n", &c);
  Serial.println(texto);

  sprintf(texto, "Value of c: %d\n\n", c); // 2
  Serial.println(texto);
}
