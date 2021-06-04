#include<stdio.h>
#include<math.h>

int main(void)
{
    int cnt;
    scanf("%d",&cnt);
    int i,j;
    int arr[100];
    for(i=cnt,j=0;i>0;i--,j++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[j]=fabs(a-b);
    }

    for(i=0;i<j;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}