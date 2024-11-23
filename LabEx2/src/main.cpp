#include <Arduino.h>

char texto[100];
void function(int *a, int b);

void setup()
{
  Serial.begin(9600);
  Serial.println("Function parameters\n");
}

void loop()
{
  int *pa, a, b;
  a = 3;
  b = 2;
  pa = &a;
  function(pa, b);
  sprintf(texto, "a=%d b=%d", a, b);
  Serial.println(texto);
}

void function(int *a, int b)
{
  *a = b + 5;
  b = 0;
}