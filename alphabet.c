#include <stdio.h>

int main() {

    char ch;
    printf("enter a character:");
    scanf("%c", &ch);

    if (ch>= 'a' && ch <= 'z') {

        printf("letter is lowercase \n");
    }

    else if (ch>= 'A' && ch <= 'Z') {

        printf("Uppercase boy \n");
    }

    else {
        printf("not an english letter \n");
    }

return 0;

}