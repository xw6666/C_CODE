#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//��̬��̬
//1.Ҫ�м̳й�ϵ
//2.���������麯��
//3.�ø���ָ��������ຯ��
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "������" << endl;
//	}
//};
//
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//int main()
//{
//	Dog dog;
//	doSpeak(dog);
//	return 0;
//}



//������
//class Animal
//{
//public:
//	//�����˶�����
//	virtual void move()
//	{
//		cout << "�������˶�" << endl;
//	}
//};
//
////����̳ж�����
//class Fish : public Animal
//{
//public:
//	//�����˶�������д
//	void move()
//	{
//		cout << "������" << endl;
//	}
//};
//
////����̳ж�����
//class Dog :public Animal
//{
//public:
//	//�����˶�������д
//	void move()
//	{
//		cout << "������" << endl;
//	}
//};
//
////ͨ�������������ں���
//void doMove(Animal& animal)
//{
//	animal.move();
//}
//int main()
//{
//	Fish fish;
//	fish.Animal::move();
//	return 0;
//}



//��̬�ŵ�
//������֯�ṹ����
//�ɶ���ǿ
//����ǰ�ںͺ��ڵ���չ��ά��



//���麯���ͳ�����
//class Dad
//{
//public:
//	//���麯��
//	//��һ�����г����˴��麯�������౻��Ϊ������
//	//�������޷���ʵ����
//	//�����������û�жԴ��麯��������д����ô����Ҳ�ǳ�����
//	virtual void func() = 0;
//};
//
//class Son : public Dad
//{
//public:
//	void func()
//	{
//		cout << "Son��func�ĵ���" << endl;
//	}
//};
//
//
//int main()
//{
//	Son son;
//	son.func();
//	return 0;
//}


//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal�Ĺ��캯������" << endl;
//	}
//	virtual ~Animal()
//	{
//		cout << "Animal��������������" << endl;
//	}
//	virtual void speak() = 0;
//};
//
//class Dog : public Animal
//{
//public:
//	Dog(string name)
//	{
//		m_Name = new string(name);
//		cout << "Dog�Ĺ��캯������" << endl;
//	}
//	~Dog()
//	{
//		if (m_Name)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//		cout << "Dog��������������" << endl;
//	}
//	virtual void speak()
//	{
//		cout << "������" << endl;
//	}
//	string* m_Name;
//};
//
//void test1()
//{
//	//����ָ��ָ���������
//	Animal* dog = new Dog("Tom");
//	delete dog;
//	dog = NULL;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}