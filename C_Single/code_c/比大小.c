#include <stdio.h>

/* int GetMax(int a, int b)
{
    return a > b ? a : b;
} */

struct Stu
{
    char name[20];
    int age;
    char id[20];
};

int main(void)
{
    /*  int a;
    int b;
    scanf("%d%d", &a, &b);
    int max = GetMax(a, b);

    printf("max = %d", max); */

    struct Stu s1 = {"xw", 20, "20130227"};

    struct Stu *ps = &s1;

    printf("%s\n", (*ps).name);
    printf("%p\n", ps);
    printf("%s\n", ps->name);
    printf("%d\n", ps->id);
    printf("%d\n", (*ps).id);

    printf("%s\n", s1.name);
    printf("%d\n", s1.id);

    return 0;
}