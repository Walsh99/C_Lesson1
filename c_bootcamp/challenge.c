#include<stdio.h>

int main () {
    char word [7] = "Martin";
    char wordoutput [7] = "      ";
    int i;
    for (i = 0; i < 6; i++) {
        wordoutput[6-i] = word[i];
        printf("%c", word[i]);

    }
    printf("%s\n", wordoutput);
    return 0;
}