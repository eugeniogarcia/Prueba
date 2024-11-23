#include <Arduino.h>

#define LEN 10
int array_input[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int array_output[LEN] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void setup()
{
  Serial.begin(9600);
  Serial.println("Pointers and Arrays\n");
}

void loop()
{
  int *p_ini, *p_end;
  int i;
  p_ini = array_input;
  p_end = array_output + 9;
  for (i = 0; i < 10; i++)
  {
    *p_end = *p_ini;
    p_ini++;
    p_end--;
  }
}
