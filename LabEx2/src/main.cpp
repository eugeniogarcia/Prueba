#include <Arduino.h>

#define LEN 10
float X_values[LEN] = {3.1, 3.2, 4.0, 1.0, 3.0, 5.0, -7.0, -8.0, 9.0, 1.0};
float Y_values[LEN] = {-0.2, 3.5, 7.8, -2, 2.3, 3.0, 3.2, 4.0, 1.0, -3.0};
struct Point
{
  float X_coord;
  float Y_coord;
};

struct Point array_point[LEN];
struct Point mean_point;

void setup()
{
  int i;
  Serial.begin(9600);
  Serial.println("Pointers and structs\n");
  for (i = 0; i < 10; i++)
  {
    array_point[i].X_coord = X_values[i];
    array_point[i].Y_coord = Y_values[i];
  }
}

void loop()
{
  struct Point *p_struct;

  int i;
  mean_point.X_coord = 0;
  mean_point.Y_coord = 0;
  p_struct = &(array_point[0]); // same to p_struct = array_point
  for (i = 0; i < 10; i++)
  {
    mean_point.X_coord += p_struct->X_coord;
    mean_point.Y_coord += p_struct->Y_coord;
    p_struct++;
  }
  mean_point.X_coord /= LEN;
  mean_point.Y_coord /= LEN;
  Serial.println("End\n");
}
