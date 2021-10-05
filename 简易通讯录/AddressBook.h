#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#define MAXSIZE 1000
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

typedef struct Person {
	char name[NAMEMAX];
	char sex[SEXMAX];
	int age;
	char tele[TELEMAX];
	char address[ADDMAX];
}Person;

//ͨѶ¼
typedef struct Contact {
	int size;  //��¼��ǰ�Ѵ�������
	Person data[MAXSIZE];
}Contact;

//������ϵ��
void add(Contact* contact);