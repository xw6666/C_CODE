//指针-->pointer
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// int main()
// {
//     int a = 10;
//     int *p = &a; //指针变量  存地址，通过地址可以找到内存单元
//     return 0;
// }
//指针是用来存放地址的，指针大小在32位平台上是4个字节，在64位平台上是8个字节，由于地址是因为地址线发出数字信号产生
//数字信号只有正信号或者负信号，32位平台有32根地址线，每根产生0或者1的负信号或者正信号，这样我们有2^32次方种可能，
//32根每根需要一个字节存储，所以共需要4个字节存储，故地址在32位平台占4个字节

// int main()
// {
//     // printf("%d\n", sizeof(char *));
//     // printf("%d\n", sizeof(short *));
//     // printf("%d\n", sizeof(int *));
//     // printf("%d\n", sizeof(double *));

//     int a = 0x11223344;
//     int *pa = &a;
//     char *pb = &a;
//     printf("%p\n", pa);
//     printf("%p\n", pb);
//     return 0;
// }

/* 指针的类型决定了解应用操作时，能访问的空间大小
int* p 能够访问4个字节
char* p 能够访问1个字节
double* p能够访问8个字节 
 */

//为什么会出现野指针
//指针没有初始化
/* int main(void)
{
    int *p;
    printf("%p", p);
    return 0;
} */
//正确案例 - int* p = NULL;
//指针超过有效访问范围 - 指针越界
/* int main()
{
    char arr[10] = {0};
    int i;
    for (i = 0; i < 12; i++)
    {
        printf("%d", *(arr + i));//arr为首元素地址，对每个接应用但是超出了数组的范围
    }
    return 0;
} */

//指针运算
//用指针的加减法运算打印数组元素
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int *p = &arr[9];//arr是首元素地址，不需要取地址，而arr[9]需要&
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", *p);
//         p--;
//     }
//     return 0;
// }
/* #define SFIVE 5
int main()
{
    float arr[SFIVE];
    float *p = NULL;
    for (p = &arr[0]; p < &arr[SFIVE];) //1.把指针指向首元素地址 2.指针的地址要小于arr[5]，这样可以把arr[4]打印出来
    {
        *p++ = 0; //先进行++,++是后缀,所以取的是加之前的地址
    }
    int i;
    for (i = 0; i < SFIVE; i++)
    {
        printf("%f  ", arr[i]);
    }
    return 0;
} */
//指针 - 指针
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("%d\n", &arr[9] - &arr[1]); //1到9的距离
//     return 0;
// }
//用指针实现strlen()函数
/* int my_strlen(char *str)
{
    char *end = str;     //str为首元素的地址
    while (*end != '\0') //对末尾指针解应用，如果不为\0则指向下一个字符
    {
        end++;
    }

    return end - str; //end - str表示str到end的距离，刚好是没有\0的字符数
}
int main()
{
    char arr[] = "xiaowu";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
} */
/* #define XW 5
int main()
{
    int arr[XW] = {1};
    for (int *p = &arr[XW]; p > &arr[0];)
    {
        *--p = 0;
    }
    for (int i = 0; i < XW; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
} */

//c语言允许指向数组范围之后的指针与指向数组的第一位的指针相比，但不允许指向数组范围之前的指针与指向数组的第一位的指针相比
//上面这个在绝大多数编译器都能成功编译，但是不满足c语言的语法

//指针和数组
/* int main()
{
    int arr[10] = {0};
    printf("%p\n", arr); //数组名 - 首元素地址
    printf("%p\n", &arr[0]);//若这两个值一样则是
    return 0; 
    //1. &arr - &数组名 - 数组名不是首元素的地址，而是整个数组的地址
    //2. sizeof(arr) - sizeof(数组名) - 数组名此时表示整个数组，这时候sizeof计算的是整个数组的大小，单位是字节
    //除了上述两个地方之外，任何地方见到的数组名都代表首元素的地址
} */

//二重指针
//无线套娃
// int main()
// {
//     char *p = "abcdef"; //abcdef是一个常

//     return 0;
// }
// void print1(int (*p)[3], int x, int y)
// {
//     int i;
//     for (i = 0; i < x; i++)
//     {
//         int j;
//         for (j = 0; j < y; j++)
//         {
//             //printf("%d ", *(*(p + i) + j));
//             printf("%d ", p[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     // int arr[5] = {2, 1, 34, 45, 33};
//     // int i;
//     // for (i = 0; i < 5; i++)
//     // {
//     //     // printf("%d ", arr[i]);
//     //     //等价于
//     //     //printf("%d ", *(arr + i));
//     // }
//     int xw[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 1}, {1, 3, 7}};
//     print1(xw, 4, 3);
//     return 0;
// }
// int main()
// {
//     //字符指针
//     char ch = 'w';
//     char *p = &ch;
//     const char *p1 = "abcdefg";
//     //指针数组 - 数组 - 存放指针的数组
//     int *arr[10];
//     char *xw[5];
//     //数组指针 - 指针 - 指向数组的指针
//     int arr2[5] = {0};
//     int(*pa)[5] = &arr2;
//     return 0;
// }

//一维数组传参
// void test1(int **p)  //当形参为二重指针时，可以传一重指针的地址或者二重指针本身或者存放一级指针的数组
// {
// }
// int main()
// {
//     int *ptr;
//     int **pp = &ptr;
//     test1(pp);
//     test1(&ptr);
//     return 0;
// }
// void test(int *p)//当形参为一重指针时，可以传一重指针或者某个东西的地址
// {
// }
// int main()
// {
//     int arr[10] = {0};
//     test(arr);
//     int *p = arr;
//     test(p);
//     return 0;
// }

//函数指针 - 指针 - 指向函数的指针
// void Print(char *p)
// {
//     printf("%s\n", p);
// }
// int main()
// {
//     void (*p)(char *) = &Print;//函数指针 &Print和Print等价
//     (*p)("Hello world!");
//     return 0;
// }

//案例分析
//void (*signal(int, void (*)(int)))(int)
//signal是一个函数，该函数返回一个函数指针，返回的这个函数指针参数是int类型，返回类型是void
//该函数的参数有两个，一个是int类型，另一个是一个参数为int类型无返回值的函数指针
//等价于
//typedef 用来改名
//typedef void (*fun_t)(int);
//typedef unsigned int uint;
//fun_t signal(int, fun_t)

//(*(void(*)())0)()
//它是一个函数调用，void(*)()表示一个无参数无返回值的函数指针，外面跟0表示把0的地址
//处强制类型装换为该函数指针，而函数指针指向函数，解应用以后外加()等于调用函数

// int Add(int x, int y)
// {
//     return x + y;
// }
// int main()
// {
//     int (*p)(int, int) = Add; //指针指向函数不需要解应用*完全就是摆设
//     printf("%d\n", p(3, 4));
//     printf("%d\n", Add(3, 4));
//     printf("%d\n", (*p)(3, 4)); //别忘了*p要加括号
//     return 0;
// }

// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }
// int main()
// {
//     int *parr[4];             //数组指针
//     int (*p)(int, int) = Add; //函数指针
//     //想要把四个函数地址都存起来，我们要做一个能存四个函数指针的指针数组
//     int (*parr1[4])(int, int) = {Add, Sub, Mul, Div};
//     //调用实例
//     int i;
//     for (i = 0; i < 4; i++)
//     {
//         printf("%d ", parr1[i](10, 2));
//     }
// }
// char *my_strcpy(char *dest, const char *src)
// {
//     return 0;
// }
// int main()
// {
//     char *(*pf)(char *, const char *) = my_strcpy;
//     char *(*pfarr[4])(char *, const char *) = {pf};
//     printf("%p ",pfarr[0]);
//     return 0;
// }
//strcmp() - 比较字符串大小
//qsort(数组名,元素个数,元素大小,比较函数)
struct Stu
{
    char name[10];
    int age;
};
// int cmp_Stu_by_age(const void *e1, const void *e2)
// {
//     //讲e1强制类型转换成结构体指针并指向age
//     //return ((struct Stu *)e1)->age - ((struct Stu *)e2)->age;
//     return strcmp(((struct Stu *)e1)->name, ((struct Stu *)e2)->name);
// }
// int main()
// {
//     struct Stu arr[3] = {{"zhangsan", 1}, {"lisi", 18}, {"wangwu", 6}};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     //qsort()在stdlib.h下
//     qsort(arr, sz, sizeof(arr[0]), cmp_Stu_by_age);
//     return 0;z
// }
// int cmp_int(const void *e1, const void *e2)
// {
//     return *((int *)e1) - *((int *)e2);
// }
// int cmp_float(const void *e1, const void *e2)
// {
//     return *((float *)e1) - *((float *)e2);
// }
// int cmp_Stu_by_name(const void *e1, const void *e2)
// {
//     return strcmp(((struct Stu *)e1)->name, ((struct Stu *)e2)->name); //用strcmp()转化为整型变量
// }
// int cmp_Stu_by_age(const void *e1, const void *e2)
// {
//     return ((struct Stu *)e1)->age - ((struct Stu *)e2)->age;
// }
// void Print(int *p, int sz)
// {
//     int i;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", p[i]); //p[i]等价于*(p+i)
//     }
// }
// int main()
// {
//     int arr[10] = {1, 77, 421, 74, 7, 3, 8, 42, 68, 99};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     qsort(arr, sz, sizeof(arr[0]), cmp_int);
//第一个参数 - 数组的首元素地址
//第二个参数 - 数组代排序元素的个数
//第三个参数 - 数组一个元素的大小，单位是字节
//第四个参数 - 比较函数的方法，使用者自己实现
//     Print(arr, sz);
//     return 0;
// }
// void Swap(char *p1, char *p2, int width)
// {
//     int i;
//     for (i = 0; i < width; i++)
//     {
//         char tmp = *(p1 + i);
//         *(p1 + i) = *(p2 + i);
//         *(p2 + i) = tmp;
//     }
// }
// void BubbleSort(void *based, int sz, int width, int (*cmp)(const void *, const void *))
// {
//     int i;
//     //趟数
//     for (i = 0; i < sz - 1; i++)
//     {
//         int j = 0;
//         //需要交换的对数
//         for (j = 0; j < sz - 1 - i; j++)
//         {
//             //比较
//             if (cmp((char *)based + j * width, (char *)based + (j + 1) * width) > 0)
//             {
//                 //交换元素
//                 Swap((char *)based + j * width, (char *)based + (j + 1) * width, width);
//             }
//         }
//     }
// }
// void test1()
// {
//     int arr[5] = {3, 2, 6, 4, 9};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//     int i;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// void test2()
// {
//     float arr[5] = {3.124, 9.34, 4.34, 3.3, 7.5};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     BubbleSort(arr, sz, sizeof(arr[0]), cmp_float);
//     int i;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%f ", arr[i]);
//     }
// }
// void test3()
// {
//     struct Stu arr[3] = {{"fesfe", 13}, {"ewr", 33}, {"cdg", 44}};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int width = sizeof(arr[0]);
//     BubbleSort(arr, sz, width, cmp_Stu_by_name);
// }
// void test4()
// {
//     struct Stu arr[3] = {{"fesfe", 63}, {"ewr", 33}, {"cdg", 44}};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int width = sizeof(arr[0]);
//     BubbleSort(arr, sz, width, cmp_Stu_by_age);
//     int i;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i].age);
//     }
// }
// int main()
// {
//     //test1();
//     //test2();
//     //test3();
//     test4();
//     return 0;
// }
// int main()
// {
//     int a[4] = {1, 2, 3, 4};
//     //取地址a加一强制转换后指向下一个数组的首元素 ptr1[-1] == *(ptr1 - 1)
//     int *ptr1 = (int *)(&a + 1);        //内存小端存储01 00 00 00   02 00 00 00   03 00 00 00   04 00 00 00
//     int *ptr2 = (int *)((int)a + 1);//a是首元素地址，强制类型转换成int以后加1只会偏移一个字节指向那内存中的00
//                                     //小端存储倒序输出02 00 00 00
//     printf("%x,%x", ptr1[-1], *ptr2);
//     return 0;
// }
// int main()
// {
//     int arr[3][2] = {(0, 1), (2, 3), (4, 5)}; //1 3
//     int *p;                                   //5 0
//     p = arr[0];
//     printf("%d ", p[1]);
//     return 0;
// }

// int main()
// {
//     int a[5][5];
//     int(*p)[4];
//     p = a;
//     printf("%p %d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//地址相减得到差的元素个数
//     return 0;
// }

//阿里笔试题
// int main()
// {
//     char* a[] = {"work", "at", "alibaba"};
//     char **pa = a;
//     pa++;
//     printf("%s\n", *pa);

// }

// int main()
// {
//     char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
//     char **cp[] = {c + 3, c + 2, c + 1, c};
//     char ***cpp = cp;
//     //注意++--会永久改变cpp的指向，而-2-1不会改变

//     printf("%s\n", **++cpp);
//     printf("%s\n", *--*++cpp + 3);
//     printf("%s\n", *cpp[-2] + 3);
//     printf("%s\n", cpp[-1][-1] + 1);
//     return 0;
// }

int main()
{
    int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int(*p)[4] = (int(*)[4])m;
    // printf("%d", p[1][2]);
    return 0;
}