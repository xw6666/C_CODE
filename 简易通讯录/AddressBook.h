#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
#define NAMEMAX 20
#define TELEMAX 20
#define SEXMAX 5
#define ADDMAX 30
enum Choice
{
    EXIT,
    ADD,
    DEL,
    MODIFY,
    SEARCH,
    SHOW,
    SORT
};

struct People
{
    char name[NAMEMAX];
    char tele[TELEMAX];
    char sex[SEXMAX];
    char address[ADDMAX];
    int age;
};

struct contact
{
    //记录当前已经有的元素个数
    int size;
    //一千个通讯信息
    struct People data[MAX];
};

void initContact(struct contact* p)
{

    memset(p->data, 0, sizeof(p->data)); //第一个参数为位置，第二个为想要设置成sm，第三个为字节数
    p->size = 0;                         //设置通讯录最初只有0个元素
}

int cmpDataByName(const void* e1, const void* e2)
{
    return strcmp(((struct People*)e1)->name, ((struct People*)e2)->name);
}

void printData(const struct contact* p)
{
    printf("%12s\t%5s\t%4s\t%12s\t%20s\n", "名字", "性别", "年龄", "电话号码", "住址");
    int i = 0;
    for (i = 0; i < (p->size); i++)
    {
        printf("%d.", i + 1);
        printf("%10s\t%5s\t%4d\t%12s\t%20s\n",
            p->data[i].name,
            p->data[i].sex,
            p->data[i].age,
            p->data[i].tele,
            p->data[i].address);
    }
}

void addContact(struct contact* p)
{
    if (p->size == MAX)
    {
        printf("通讯录已满,请删除成员后重试\n");
    }
    else
    {
        //添加元素
        printf("请输入联系人姓名->\n");
        scanf("%s", p->data[p->size].name);
        printf("请输入联系人电话号码->\n");
        scanf("%s", p->data[p->size].tele);
        printf("请输入联系人性别->\n");
        scanf("%s", p->data[p->size].sex);
        printf("请输入联系人地址->\n");
        scanf("%s", p->data[p->size].address);
        printf("请输入联系人年龄->\n");
        scanf("%d", &(p->data[p->size].age));
        printf("添加成功!\n");
        p->size++;
    }
}

void delContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("没有要删的联系人！\n");
    }
    else
    {
        printData(p);
        printf("请输入要删除的联系人的序号->\n");
        int num = 0;
        while (1)
        {
            scanf("%d", &num);
            //判断合法性
            if (num > (p->size) || num <= 0)
            {
                printf("输入非法，请重新输入->\n");
            }
            else
            {
                break;
            }
        }

        //覆盖掉要删除的元素
        int i = 0;
        for (i = num - 1; i < p->size - 1; i++)
        {
            p->data[i] = p->data[i + 1];
        }
        p->size--;
        printf("删除成功！\n");
    }
}

void showContact(const struct contact* p)
{
    if (p->size == 0)
    {
        printf("没有联系人信息！\n");
    }
    else
    {
        printData(p);
    }
}

void modContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("无联系人信息\n");
    }
    else
    {
        printData(p);
        printf("请输入要修改的联系人序号>\n");
        //读取序号
        int num = 0;
        while (1)
        {
            scanf("%d", &num);
            if ((num < 1) || (num > (p->size)))
            {
                printf("输入非法，请重新输入>\n");
            }
            else
            {
                break;
            }
        }
        //读取删除项
        printf("**************************************\n");
        printf("**** 1.名字                2.性别 ****\n");
        printf("**** 3.电话                4.住址 ****\n");
        printf("*************** 5.年龄 ***************\n");
        printf("**************************************\n");
        printf("请输入你要修改的信息项>\n");
        int dataPiece = 0;
        while (1)
        {
            scanf("%d", &dataPiece);
            if (dataPiece == 1 || dataPiece == 2 || dataPiece == 3 || dataPiece == 4 || dataPiece == 5)
            {
                break;
            }
            else
            {
                printf("输入非法，请重新输入>\n");
            }
        }
        //修改
        switch (dataPiece)
        {
        case 1:
            memset(p->data[num - 1].name, 0, sizeof(p->data[num - 1].name));
            printf("请输入修改后的信息>\n");
            scanf("%s", p->data[num - 1].name);
            printf("修改成功!\n");
            break;
        case 2:
            memset(p->data[num - 1].sex, 0, sizeof(p->data[num - 1].sex));
            printf("请输入修改后的信息>\n");
            scanf("%s", p->data[num - 1].sex);
            printf("修改成功!\n");
            break;
        case 3:
            memset(p->data[num - 1].tele, 0, sizeof(p->data[num - 1].tele));
            printf("请输入修改后的信息>\n");
            scanf("%s", p->data[num - 1].tele);
            printf("修改成功!\n");
            break;
        case 4:
            memset(p->data[num - 1].address, 0, sizeof(p->data[num - 1].address));
            printf("请输入修改后的信息>\n");
            scanf("%s", p->data[num - 1].address);
            printf("修改成功!\n");
            break;
        case 5:
            p->data[num - 1].age = 0;
            printf("请输入修改后的信息>\n");
            scanf("%d", &(p->data[num - 1].age));
            printf("修改成功!\n");
            break;
        }
    }
}

void sortContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("无需排序！\n");
    }
    else
    {
        //排序 第一个参数是数组名，第二个参数是个数，第三个参数是每个元素大小，第四个是比较方法，需要自己实现
        qsort(p->data, p->size, sizeof(p->data[0]), cmpDataByName);
        printf("排序成功！\n");
    }
}

void searchContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("没有成员信息，无法查找!\n");
    }
    else
    {
        //查找 - byName
        printf("请输入你要查找的姓名>\n");
        char searchName[20] = { 0 };
        scanf("%s", searchName);
        //外层循环遍历每个成员
        int i = 0;
        int j = 0;
        for (i = 0; i < p->size; i++)
        {
            //内层循环遍历每个成员的字符
            for (j = 0; j < strlen(p->data[i].name); j++)
            {
                if (searchName[j] != p->data[i].name[j]) //如果有不匹配字符
                {
                    break;
                }
            }
            //表示匹配成功
            if (j == strlen(p->data[i].name))
            {
                break;
            }
        }
        if (i == p->size)
        {
            printf("没有找到该联系人。\n");
        }
        else
        {
            printf("查找成功，该联系人信息如下！\n");
            //i为匹配到的数组下标
            printf("%10s\t%5s\t%4s\t%12s\t%20s\n", "名字", "性别", "年龄", "电话号码", "住址");
            printf("%10s\t%5s\t%4d\t%12s\t%20s\n",
                p->data[i].name,
                p->data[i].sex,
                p->data[i].age,
                p->data[i].tele,
                p->data[i].address);
        }
    }
}