#include <Arduino.h>
#define LEN 10

// declara funcion
// int factorial();
long factorial();
long multiply(int numbers[], int largo);
String average(int numbers[], int largo);

// declara variables
int numbers[LEN];
char cnumbers[] = {0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf};

char text[50];

void setup()
{
  Serial.begin(9600);
  // Array initialization
  for (int i = 0; i < LEN; i++)
  {
    numbers[i] = i + 1;
  }
}

void loop()
{
  // sprintf(text, "Factorial = %d", factorial()); //funcionaria con int
  // sprintf(text, "Factorial = %ld", factorial()); // funcionaria con long

  int largo = sizeof(numbers) / sizeof(numbers[0]); // largo del array
  // sprintf(text, "Producto = %ld", multiply(numbers,largo));
  sprintf(text, "Media = %s", average(numbers, largo).);
  Serial.println(text);
}

// put function definitions here:
// int factorial()
long factorial()
{
  // Factorial computation
  // int F = 1; // tiene que ser long para que no se desborde la variable
  long F = 1;
  for (int i = 0; i < LEN; i++)
    F = F * numbers[i]; // int * long es long
  return F;
}

long multiply(int numbers[], int largo)
{
  long F = 1;
  for (int i = 0; i < largo; i++)
    F = F * numbers[i];
  return F;
}

String average(int numbers[], int largo)
{
  float F = 0;
  for (int i = 0; i < largo; i++)
    F = F + numbers[i];
  return String(F / largo, 2);
}