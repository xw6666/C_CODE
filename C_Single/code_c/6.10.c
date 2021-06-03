#include<stdio.h>
int tsd(int m,int n);
int main()
{
    printf("Enter  lower and upper integer limits:");
    int m,n;
    scanf("%d %d",&m,&n);

    while(m<n){
        int i=tsd(m,n);
        printf("The sums of the squares from %d to %d is %d",m,n,i);
        printf("Enter next set of limits:  ");
    }
}