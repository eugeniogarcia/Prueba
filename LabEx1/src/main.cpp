#include <Arduino.h>
#define LEN 11 // cabio1

int numbers[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
char numbers2[] = {0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf};
char text[50];

void setup()
{
  Serial.begin(9600);
  /*
  // Array initialization
  int i;
  for (i = 0; i < LEN; i++)
  {
    numbers[i] = i + 1;
  }
  */
}

void loop()
{
  // Factorial computation
  int factorial;
  int F = 1;
  int F2 = 1;
  int i;
  for (i = 0; i < LEN; i++)
  {
    F = F * numbers[i];
    //F2 = F2 * numbers2[i];
    F2 = F2 * static_cast<int>(numbers2[i]);
  }
  factorial = F;
  sprintf(text, "Factorial = %d", factorial);
  Serial.println(text);
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}