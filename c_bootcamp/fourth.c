#include<stdio.h>

int main () {
    int radius;
    printf("Enter Radius of circle: ");
    scanf("%d", &radius);

    float pi = 3.14;
    float area = pi * radius * radius;
    printf("%f\n", area);

    return 0;
}