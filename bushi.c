#include <stdio.h>
void han(int n,char a,char b,char c)
{
    if(n==0)
    {
        return;
    }
    han(n-1,a,c,b);
    printf("%c->%c\n",a,c);
    han(n-1,b,a,c);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    han(n,'A','B','C');
    return 0;
}