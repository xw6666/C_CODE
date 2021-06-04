//结构体
#include <stdio.h>
//strcut 结构体关键字  stu - 结构体标签 struct Stu - 结构体类型
// struct Stu
// {
//     //成员变量
//     char name[20];
//     short age;
//     char tele[12];
//     char sex[5];
// };//定义一个结构体类型
// int main()
// {
//     struct Stu s;//创建结构体变量

//     return 0;
// }
//结构体成员可以是标量 数组 指针
//结构体变量的定义和初始化
// typedef struct Stu
// {
//     char name[20];
//     short age;
// } Stu;
// void print1(Stu s)
// {
//     printf("name:%s\n", s.name);
//     printf("age:%d\n", s.age);
// }
// void print2(Stu *p)
// {
//     printf("name:%s\n", p->name);
//     printf("age:%d\n", p->age);
// }
// int main(void)
// {
//     Stu s = {"xiaowu", 18};
//     print1(s);
//     printf("\n");
//     print2(&s);
//     return 0;
// }

//结构体类型
// struct tag
// {
//     menber - list
// }variable - list

//一个结构体类型
// struct stu
// {
//     //成员变量
//     char name[20]; //姓名
//     char tele[12]; //电话
//     char sex[10];  //性别
//     int age;       //年龄
// } s4, s5, s6;
// struct stu s3; //全局变量
//s3 s4 s5 s6是全局变量

//匿名结构体类型
//用一次就不想用的时候用
// struct
// {
//     int a;
//     char c;
// } s;

// struct node
// {
//     int data;
//     struct node n;
// };   为什么不能这样写？
//因为无法确定struct node有多大

//所以要这样写
//结构体自应用的正确方式 - 要找到一个同类型的结构体，用指针串联
// struct Node
// {
//     int data;          //数据域
//     struct Node *next; //指针域
// };
// int main()
// {
//     //创建的结构体变量 - 局部变量
//     struct stu s1;
//     struct stu s2;
//     return 0;
// }

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;

//结构体变量的定义和初始化
// struct T
// {
//     double weight;
//     short age;
// };
// typedef struct S
// {
//     struct T st;
//     char c;
//     int a;
//     double d;
//     char arr[20];
// } S;
// int main()
// {
//     // S s = {'c', 5, 3.14, "Hello world!"};
//     // printf("%c %d %lf %s", s.c, s.a, s.d, s.arr);
//     struct S s = {{75.0, 20}, 'c', 5, 3.14, "Hello world!"};
//     printf("%lf", s.st.weight);
//     return 0;
// }

//结构体内存对齐
//首先第一个变量存在0偏移值处
//计算下一个变量的对齐数
//从偏移值是对齐数的倍数的地方开始储存
//总空间大小是元素类型中最大对齐数的倍数
// struct S1
// {
//     char c1;
//     int a;
//     char c2;
// };

struct S2
{
    char c;
    double d;
    // char c;
    int i;
};
struct S3
{
    char c1;
    struct S2 s2;
    double d;
};
int main()
{
    struct S3 s3 = {0};
    struct S2 s2 = {0};
    printf("%d\n", sizeof(s3));//40
    printf("%d\n", sizeof(s2));  //24
    return 0;
}

// //设置默认对齐数为4
// #pragma pack(1)
// struct S
// {
//     char c1;
//     double d;
// };
// #pragma pack()
// // 取消设置的默认对齐数
// int main()
// {
//     struct S s;
//     printf("%d\n", sizeof(s));
//     return 0;
// }
// #include <stddef.h>//其中有offsetof()这个宏
// struct S
// {
//     char c;
//     int i;
//     double d;
// };
// int main()
// {
//     // offsetof(); //用于计算结构体成员相对于结构体起始位置的偏移量 - 不是函数，是宏
//     struct S s = {0};
//     printf("%d\n", sizeof(s));
//     printf("%d\n",offsetof(struct S,c));
//     printf("%d\n",offsetof(struct S,i));
//     printf("%d\n",offsetof(struct S,d));
//     return 0;
// }

//结构体传参
// struct S
// {
//     int a;
//     char c;
//     double d;
// };
// void Init(struct S *ps)
// {
//     ps->a = 100;
//     ps->c = 'x';
//     ps->d = 3.14;
// }
// void Print1(struct S tmp)
// {
//     printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
// }
// //这个跟好一些，因为这个传参只传4个或者8个字节
// void Print2(struct S *ps)
// {
//     printf("%d %c %lf\n", ps->a, ps->c, ps->d);
// }
// int main()
// {
//     struct S s;
//     Init(&s);
//     Print1(s);
//     Print2(&s);
// }

//位段 - 有个位 - 指的是二进制位
//每次开辟一个4byte的空间存储位段成员 ，若不够使用再次开辟4byte
//如果里面都是char类型的，那么一次开辟1byte的空间
struct S
{
    int a : 2; //意思是a只需要两个位来储存
    int b : 5;
    int c : 10;
    int d : 32; //因为每次开辟32bit，所以这里给的bit需要小于等于32
};
//总共需要47位 -- 只需要6个字节储存 = 48bit？为啥呢？
//位段内存分配规则
//1.位段的成员可以是int ，unsigned int，signed int or char(属于整型家族)类型
//2.位段的空间上是按照需要以4个字节(int)或者1byte(char)来存储的
//3.位段涉及很多不确定因素，位段是不夸平台的，注重可移植性的程序应该避免使用位段
//这样看来，位段可以节省空间
// struct T
// {
//     char a : 3;
//     char b : 4;
//     char c : 5;
//     char d : 4;
// };
// int main()
// {
//     struct T s;
//     s.a = 10;
//     s.b = 20;
//     s.c = 30;
//     s.d = 4;
//     printf("%d\n", s.a); //1010变成了010.打印出2
//     printf("%d\n", s.b); //10100变成了0100.打印出4
//     // struct S s;
//     // printf("%d\n", sizeof(s)); //8个字节
//     return 0;
// }
//位段的夸平台问题
//1.int位段被当成有符号数还是无符号数是不确定的
// 2.位段中最大的位的数目不能确定(16位机器最大16，32位最大32在16位机写27的位段会出问题)
// 3.位段中成员在内存中从左到右分配还是从右到左分配不确定
// 4.当一个结构包含两个位段，第二个位段成员比较大，无法容纳第一个位段剩余的空间时，是否舍弃剩余空间不确定

//位段的应用，当发送数据时，用位段分割出各种空间，每个空间存入不同的数据

//枚举
// 枚举顾名思义就是 - 列举
// 把可能的取值一一列举
// 比如我们生活中的一周星期一到星期日可以一一列举

//枚举举例
//枚举类型
enum Sex //性别
{
    //枚举的可能取值 - 枚举常量
    MALE,
    FEMALE,
    SECRET

};
//描述颜色
enum Color
{
    //不赋初值值由上一个枚举常量加1得到，若已经是第一个则是0
    RED,
    GREEN,
    BLUE
};

// int main()
// {
//     enum Sex s = MALE;
//     enum Color r = RED;
//     printf("%d %d %d\n", RED, GREEN, BLUE); // 0 1 2 - 第一个枚举常量是0，第二个是1，依此类推
//     //当然，这个值在枚举结构里面可以赋初值 - 自定义
//     return 0;
// }