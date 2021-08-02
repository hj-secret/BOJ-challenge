#include<stdio.h>

int main(void){
    int a;
    int b=0;
    for(int i=0; i<5; i++){
        scanf("%d",&a);
        b+=a;
    }
    printf("%d",b);
}
