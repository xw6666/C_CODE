#include <stdio.h>
#include <string.h>
int main(void)
{
    while (1)
    {
        char arr[100];
        char arr1[100];
        scanf("%s %s", arr, arr1);
        int sz = strlen(arr);
        int i;
        int cnt = 1;
        for (i = 0; i < sz; i++)
        {
            if (arr[i] > arr1[i])
            {
                arr1[i] += 32;
            }
            else if (arr[i] < arr1[i])
            {
                arr[i] += 32;
            }
            if (arr[i] != arr1[i])
            {
                printf("NO!\n");
                cnt=0;
                break;
            }
        }
        if(cnt==1){
            printf("YES!\n");
        }
    }

    return 0;
}
