#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct Point
    {
        float X_coord;
        float Y_coord;
    };
    struct Point array_point[10];
    struct Point mean_point;
    Point array_point1[10];
    Point mean_point1;

    printf("Hello World\n");
    char a = 0x61;
    char b = 97;
    char c = 'a';
    int i = a;
    int j = 97;
    char d = j;

    float ff = 3.14;
    printf("Media = %.2f\n", ff);

    return 0;
}
