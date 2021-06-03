#include <stdio.h>
int main()
{
    int n, k, T;
    long long sum = 1, t = 1, a = 1;
    scanf("%d%d%d", &n, &k, &T);
    int i;
    for (i = 1; i < T; i++)
    {
        t = (((a + a + n - 1) * n / 2) + t) % k;
        sum += t;
        a += n;
    }
    printf("%lld\n", sum);
    return 0;
}
