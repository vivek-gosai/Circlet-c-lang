#include<stdio.h>

int main(){

    int a=4, b=4;

    for(int i=1; i<=4; i++){

        for(int j=1; j<4*2; j++){

            if(j==a || j==b){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        a--;
        b++;

        printf("\n");
    }

    return 0;
}