#include<stdio.h>
int main (){
    float n;
    float i;
    printf("enter number :");
    scanf("%f", &n);

                            //100,50,25,12.5,...to n//
    float a=100;
    for (i=1;i<=n;i++){
        printf("%f \n",a);
        a=a/2;
    }
    return 0;
}                        