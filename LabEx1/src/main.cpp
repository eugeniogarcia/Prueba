#include <Arduino.h>
#define LEN 10

int numbers [LEN];
char text[50];

void setup() {
  Serial.begin(9600);
  //Array initialization
  int i;
  for (i=0; i<LEN;i++){
    numbers [i] = i+1;
  }
}

void loop() {
  // Factorial computation
  int factorial;
  int F=1;
  int i;
  for (i=0;i<LEN;i++){
    F = F*numbers[i];
  }
  factorial = F;
  sprintf(text, "Factorial = %d", factorial);
  Serial.println(text);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}