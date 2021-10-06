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
    //��¼��ǰ�Ѿ��е�Ԫ�ظ���
    int size;
    //һǧ��ͨѶ��Ϣ
    struct People data[MAX];
};

void initContact(struct contact* p)
{

    memset(p->data, 0, sizeof(p->data)); //��һ������Ϊλ�ã��ڶ���Ϊ��Ҫ���ó�sm��������Ϊ�ֽ���
    p->size = 0;                         //����ͨѶ¼���ֻ��0��Ԫ��
}

int cmpDataByName(const void* e1, const void* e2)
{
    return strcmp(((struct People*)e1)->name, ((struct People*)e2)->name);
}

void printData(const struct contact* p)
{
    printf("%12s\t%5s\t%4s\t%12s\t%20s\n", "����", "�Ա�", "����", "�绰����", "סַ");
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
        printf("ͨѶ¼����,��ɾ����Ա������\n");
    }
    else
    {
        //���Ԫ��
        printf("��������ϵ������->\n");
        scanf("%s", p->data[p->size].name);
        printf("��������ϵ�˵绰����->\n");
        scanf("%s", p->data[p->size].tele);
        printf("��������ϵ���Ա�->\n");
        scanf("%s", p->data[p->size].sex);
        printf("��������ϵ�˵�ַ->\n");
        scanf("%s", p->data[p->size].address);
        printf("��������ϵ������->\n");
        scanf("%d", &(p->data[p->size].age));
        printf("��ӳɹ�!\n");
        p->size++;
    }
}

void delContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("û��Ҫɾ����ϵ�ˣ�\n");
    }
    else
    {
        printData(p);
        printf("������Ҫɾ������ϵ�˵����->\n");
        int num = 0;
        while (1)
        {
            scanf("%d", &num);
            //�жϺϷ���
            if (num > (p->size) || num <= 0)
            {
                printf("����Ƿ�������������->\n");
            }
            else
            {
                break;
            }
        }

        //���ǵ�Ҫɾ����Ԫ��
        int i = 0;
        for (i = num - 1; i < p->size - 1; i++)
        {
            p->data[i] = p->data[i + 1];
        }
        p->size--;
        printf("ɾ���ɹ���\n");
    }
}

void showContact(const struct contact* p)
{
    if (p->size == 0)
    {
        printf("û����ϵ����Ϣ��\n");
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
        printf("����ϵ����Ϣ\n");
    }
    else
    {
        printData(p);
        printf("������Ҫ�޸ĵ���ϵ�����>\n");
        //��ȡ���
        int num = 0;
        while (1)
        {
            scanf("%d", &num);
            if ((num < 1) || (num > (p->size)))
            {
                printf("����Ƿ�������������>\n");
            }
            else
            {
                break;
            }
        }
        //��ȡɾ����
        printf("**************************************\n");
        printf("**** 1.����                2.�Ա� ****\n");
        printf("**** 3.�绰                4.סַ ****\n");
        printf("*************** 5.���� ***************\n");
        printf("**************************************\n");
        printf("��������Ҫ�޸ĵ���Ϣ��>\n");
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
                printf("����Ƿ�������������>\n");
            }
        }
        //�޸�
        switch (dataPiece)
        {
        case 1:
            memset(p->data[num - 1].name, 0, sizeof(p->data[num - 1].name));
            printf("�������޸ĺ����Ϣ>\n");
            scanf("%s", p->data[num - 1].name);
            printf("�޸ĳɹ�!\n");
            break;
        case 2:
            memset(p->data[num - 1].sex, 0, sizeof(p->data[num - 1].sex));
            printf("�������޸ĺ����Ϣ>\n");
            scanf("%s", p->data[num - 1].sex);
            printf("�޸ĳɹ�!\n");
            break;
        case 3:
            memset(p->data[num - 1].tele, 0, sizeof(p->data[num - 1].tele));
            printf("�������޸ĺ����Ϣ>\n");
            scanf("%s", p->data[num - 1].tele);
            printf("�޸ĳɹ�!\n");
            break;
        case 4:
            memset(p->data[num - 1].address, 0, sizeof(p->data[num - 1].address));
            printf("�������޸ĺ����Ϣ>\n");
            scanf("%s", p->data[num - 1].address);
            printf("�޸ĳɹ�!\n");
            break;
        case 5:
            p->data[num - 1].age = 0;
            printf("�������޸ĺ����Ϣ>\n");
            scanf("%d", &(p->data[num - 1].age));
            printf("�޸ĳɹ�!\n");
            break;
        }
    }
}

void sortContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("��������\n");
    }
    else
    {
        //���� ��һ�����������������ڶ��������Ǹ�����������������ÿ��Ԫ�ش�С�����ĸ��ǱȽϷ�������Ҫ�Լ�ʵ��
        qsort(p->data, p->size, sizeof(p->data[0]), cmpDataByName);
        printf("����ɹ���\n");
    }
}

void searchContact(struct contact* p)
{
    if (p->size == 0)
    {
        printf("û�г�Ա��Ϣ���޷�����!\n");
    }
    else
    {
        //���� - byName
        printf("��������Ҫ���ҵ�����>\n");
        char searchName[20] = { 0 };
        scanf("%s", searchName);
        //���ѭ������ÿ����Ա
        int i = 0;
        int j = 0;
        for (i = 0; i < p->size; i++)
        {
            //�ڲ�ѭ������ÿ����Ա���ַ�
            for (j = 0; j < strlen(p->data[i].name); j++)
            {
                if (searchName[j] != p->data[i].name[j]) //����в�ƥ���ַ�
                {
                    break;
                }
            }
            //��ʾƥ��ɹ�
            if (j == strlen(p->data[i].name))
            {
                break;
            }
        }
        if (i == p->size)
        {
            printf("û���ҵ�����ϵ�ˡ�\n");
        }
        else
        {
            printf("���ҳɹ�������ϵ����Ϣ���£�\n");
            //iΪƥ�䵽�������±�
            printf("%10s\t%5s\t%4s\t%12s\t%20s\n", "����", "�Ա�", "����", "�绰����", "סַ");
            printf("%10s\t%5s\t%4d\t%12s\t%20s\n",
                p->data[i].name,
                p->data[i].sex,
                p->data[i].age,
                p->data[i].tele,
                p->data[i].address);
        }
    }
}