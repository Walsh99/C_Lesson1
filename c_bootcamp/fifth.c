#include<stdio.h>

int main () {
    int var1;
    printf("Input 1st number: ");
    scanf("%d", &var1);
    
    int var2;
    printf("Input 2nd number: ");
    scanf("%d", &var2);

    int temp = var1;
    var1 = var2;
    var2 = temp;

    printf("Values swapped: %d %d", var1, var2);
    printf("\n");
    return 0;
}