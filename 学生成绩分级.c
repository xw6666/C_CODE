#include<stdio.h>
int main(void)
{
    int s;
    scanf("%d",&s);

    if(s<60){
        printf("D\n");
    }else if(s<75){
        printf("C\n");
    }else if(s<85){
        printf("B\n");
    }else{
        printf("A\n");
    }
    
    return 0;
}