//动态内存管理
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
//当前我们知道的内存使用方式：
//1：创建一个变量
//int a = 10;//局部变量 - 栈区
//int g_a = 10;//全局变量 - 静态区

//栈区：局部变量，函数形参
//堆区：动态内存分配
//静态区：全局变量，静态变量

// struct S
// {
//     char name[20];
//     int age;
// };

// int main()
// {
//     struct S arr[50];
//     //30 - 浪费
//     //60 - 不够
//     return 0;
// }

//c语言可以创建变长数组 - C99中增加

// 动态内存分配：malloc free calloc realloc

//malloc - 在stdlib.h下
// int main()
// {
//     //向内存申请10个整型的空间
//     int *p = (int *)malloc(10 * sizeof(int));
//     if (p == NULL)
//     {
//         ;
//         //打印错误原因的一个方式
//         printf("%s\n", strerror(errno));
//     }
//     else
//     {
//         //正常使用空间
//         int i = 0;
//         for (i = 0; i < 10; i++)
//         {
//             *(p + i) = i;
//         }
//         for (i = 0; i < 10; i++)
//         {
//             printf("%d ", *(p + i));
//         }
//         //当动态申请的空间不再使用的时候
//         //我们要还回空间
//     }
//     free(p); //虽然p指向的内存地址对应的内存已经被释放，但是p还储存这这个内存的地址
//     p = NULL;
//     return 0;
// }

// 分配的内存不够用的时候realloc
// int main()
// {
//     int *p = (int *)malloc(20);
//     if (p == NULL)
//     {
//         printf("%s\n", strerror(errno));
//     }
//     else
//     {
//         int i = 0;
//         for (i = 0; i < 5; i++)
//         {
//             *(p + i) = i;
//         }
//         for (i = 0; i < 20 / sizeof(int); i++)
//         {
//             printf("%d ", *(p + i));
//         }
//     }
//     //使用malloc开辟的20个字节的空间
//     //在这里，20个字节空间我们已经用完了
//     //希望我们能够有40个字节空间可以用
//     //这里就可以使用realloc来调整

//     return 0;
// }

//动态内存分配常见错误
// int main()
// {
//     //1.对空指针进行了解应用操作
//     // int *p = (int *)malloc(40); //一定要进行返回值的判断
//     // //所以要
//     // if (p == NULL)
//     // {
//     //     printf("%s\n", strerror(errno));
//     // }
//     // else
//     // {
//     //     int i = 0;
//     //     for (i = 0; i < 10; i++)
//     //     {
//     //         *(p + i) = i;
//     //     }
//     //     free(p);
//     //     p = NULL;
//     // }
//     // 2.对动态开辟内存的越界访问
//     // int *p = (int *)malloc(5 * sizeof(int));
//     // if (p == NULL)
//     // {
//     //     return 0;
//     // }
//     // else
//     // {
//     //     int i = 0;
//     //     for (i = 0; i < 5; i++) //越界访问
//     //     {
//     //         *(p + i) = i;
//     //     }
//     //     for (i = 0; i < 5; i++)
//     //     {
//     //         printf("%d ", p[i]);
//     //     }
//     // }
//     // //释放
//     // free(p);
//     // p = NULL;

//     // 3.对非动态开辟内存的free
//     // 错误案例：
//     // int a = 10;
//     // int *p = &a;
//     // *p = 20;
//     // free(p);
//     return 0;
// }

// int main()
// {
//     // int *p = (int *)malloc(40);
//     // if (p == NULL)
//     // {
//     //     return 0;
//     // }

//     // //使用
//     // int *p2 = realloc(p, 60);
//     // if (p2 != NULL)
//     // {
//     //     p = p2;
//     // }
//     int *p = (int *)realloc(NULL, 40); //等价于(int *)malloc(40);
//     return 0;
// }

// int main()
// {
//     // 4.使用free释放动态内存开辟的一部分
//     // int *p = (int *)malloc(5 * sizeof(int));
//     // if (p = NULL)
//     // {
//     //     return 0;
//     // }
//     // int i = 0;
//     // for (i = 0; i < 5; i++)
//     // {
//     //     *p++ = i; //这里指针移动了
//     // }
//     // free(p - 5); //free只能从开辟内存的起点开始释放

//     // 5.对同一块动态开辟内存多次释放
//     // int *p = (int *)malloc(40);
//     // if (p == NULL)
//     // {
//     //     return 0;
//     // }
//     // //使用
//     // //释放
//     // free(p);
//     // free(p);

//     // 6.动态开辟内存忘记释放(内存泄漏)
//     // while(1)
//     // {
//     //     // malloc(110);
//     //     // Sleep(1000);
//     // }
//     // return 0;
// }

// void getMem(char **p)
// {
//     *p = (char *)malloc(40);
// }
// void test()
// {
//     char *p = NULL;
//     getMem(&p);
//     strcpy(p, "Hello world!");
//     printf(p);
//     free(p);
// }
// int main()
// {
//     test();
//     return 0;
// }

// 或者

// char *getMem(char *p)
// {
//     p = (char *)malloc(40);
//     return p;
// }
// void test()
// {
//     char *str = NULL;
//     str = getMem(str);
//     strcpy(str,"Hello world!\n");
//     printf(str);
//     free(str);
// }
// int main()
// {
//     test();
//     return 0;
// }

//返回栈空间地址的问题
// char *GetMemory()
// {
// char p[] = "Hello world!";
//     //局部变量的空间在函数结束以后就没用了，再打印就没用了
//     return p;
// }

// void Test(void)
// {
//     char *str = NULL;
//     str = GetMemory();
//     printf(str);
// }

// int main(void)
// {
//     Test();
//     return 0;
// }

// void Test(void)
// {
//     char *str = (char *)malloc(100);
//     strcpy(str, "hello");
//     free(str);

//     //这里应该str置为NULL
//     if (str != NULL)
//     {
//         //非法访问内存
//         strcpy(str, "world");
//         printf(str);
//     }
// }
// int main()
// {
//     Test();

//     return 0;
// }

// 栈区(stack):在执行函数时，函数内部的局部变量的存储单元都可以在栈上创建，函数执行结束
// 时这些存储单元被自动释放。栈内存分配运算内置于处理器指令集中，效率高，但是分配内存容量有限。
//堆区(heap)一般由程序员分配释放(动态内存分配)，若程序员不释放可能会被os回收
//数据段(静态区)(static)存放全局变量，静态数据，程序结束后由系统释放
//代码段存放函数体(类成员函数和全局函数)的二进制码

//柔性数组
// c99中，结构中的最后一个元素允许是未知大小的数组，这就叫做 柔性数组 成员
// struct S
// {
//     int n;
//     int arr[]; //这个可以是未知大小的 - 柔性数组成员 - 数组的大小是可变的
//     //此时计算结构体大小的时候不计算数组大小
// };
// int main()
// {
//     // struct S s;
//     // printf("%d\n",sizeof(s));
//     //开辟了一个空间,这个空间大小是24个空间,前四个字节给n,后面20给的数组
//     struct S *ps = (struct S *)malloc(sizeof(struct S) + 5 * sizeof(int));
//     ps->n = 100;
//     int i = 0;
//     struct S *ptr = realloc(ps, 44);
//     if (ptr != NULL)
//     {
//         ps = ptr;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         ps->arr[i] = i; // 0 1 2 3 4 5 6 7 8 9
//     }
//     printf("%d\n", ps->n);
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", ps->arr[i]);
//     }
//     free(ps);
//     ps = NULL;
//     return 0;
// }
//第二种解决方法
// struct S
// {
//     int n;
//     int *arr;
// };
// int main()
// {
//先开辟结构体空间
//再开辟一个arr的空间
//     struct S *ps = (struct S *)malloc(sizeof(struct S));
//     ps->arr = (int *)malloc(5 * sizeof(int));
//     // int i = 0;
//     // for (i = 0; i < 5; i++)
//     // {
//     //     ps->arr[i] = i;
//     // }
//     // for (i = 0; i < 5; i++)
//     // {
//     //     printf("%d ", ps->arr[i]);
//     // }

//     //调整大小
//     int *ptr = realloc(ps->arr, 10 * sizeof(int));
//     if (ptr != NULL)
//     {
//         ps->arr = ptr;
//     }
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         ps->arr[i] = i;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", ps->arr[i]);
//     }
//     free(ps->arr);
//     ps->arr = NULL;
//     free(ps);
//     ps = NULL;
//     return 0;
// }

