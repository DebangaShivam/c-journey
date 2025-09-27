#include <stdio.h>

int main() {
 int marks ;
 printf("Enter marks: ");
    scanf("%d", &marks);


    if(marks >=0 && marks <= 30) {
        printf("fail \n");
    }
    
    else if (marks >30 && marks <=100){
        printf("pass \n");
    }

    else { 
        printf("over100 \n");
    }


return 0;       
    
}