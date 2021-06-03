#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/* struct Stu
{
    char name[20];
    int age;
    char id[20];
};
int main(void)
{
    //使用struct Stu这个类型创建了一个变量s1并初始化
    struct Stu s1 = {"xiaowu", 18, "20130227"};
    printf("%s\n", s1.name); //结构体变量.成员名
    printf("%d\n", s1.age);
    printf("%s\n", s1.id);

    struct Stu *p = &s1;
    printf("%s\n", (*p).name); //指针解应用后得到s1，s1访问name
    printf("%d\n", p->age);    //结构体指针指向成员名  结构体指针->成员名
    printf("%s\n", p->id);     //结构体指针指向id

    return 0;
} */

/* int yinzi(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int n, a, suma, sumb, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        suma = yinzi(a);
        if (suma > a)
        {
            sumb = yinzi(suma);
            if (sumb == a)
            {
                printf("%d<-->%d ", a, suma);
            }
        }
    }
    return 0;
} */

/* int main(void)
{
    char a = 3; //00000011 - a
    // 00000000000000000000000000000011
    char b = 127; //01111111 - b;
    // 00000000000000000000000001111111
    char c = a + b;
    //000000000000000000000000100000010
    //10000010 - c
    //打印整型，整型提升  补码 111111111111111111111111100000010
    //反码 111111111111111111111111100000001
    //原码 100000000000000000000000011111110 = -126
    printf("%d", c);

    return 0;
} */
//有问题的代码
/* int fun()
{
    static int count = 1; //static用了之后每次调用函数这里都会有上次调用后的值的count

    return ++count;
}

int main()
{
    int a = fun() + fun() * fun(); //这个地方函数调用的顺序不确定，所以不能确定输出值
    printf("a = %d\n", a);

    return 0;
} */

/* int main()
{
    int i = 1;
    int a = (++i) + (++i) + (++i); //无效代码，根据系统的不同值也会不同
    return 0;
} */