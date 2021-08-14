#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//动态多态
//1.要有继承关系
//2.父类中有虚函数
//3.用父类指针调用子类函数
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "喵喵喵" << endl;
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



//动物类
//class Animal
//{
//public:
//	//动物运动函数
//	virtual void move()
//	{
//		cout << "动物在运动" << endl;
//	}
//};
//
////鱼类继承动物类
//class Fish : public Animal
//{
//public:
//	//鱼类运动函数重写
//	void move()
//	{
//		cout << "鱼在游" << endl;
//	}
//};
//
////狗类继承动物类
//class Dog :public Animal
//{
//public:
//	//狗类运动函数重写
//	void move()
//	{
//		cout << "狗在跑" << endl;
//	}
//};
//
////通过函数调用类内函数
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



//多态优点
//代码组织结构清晰
//可读性强
//利于前期和后期的拓展及维护



//纯虚函数和抽象类
//class Dad
//{
//public:
//	//纯虚函数
//	//当一个类中出现了纯虚函数，该类被称为抽象类
//	//抽象类无法被实例化
//	//如果派生类中没有对纯虚函数进行重写，那么该类也是抽象类
//	virtual void func() = 0;
//};
//
//class Son : public Dad
//{
//public:
//	void func()
//	{
//		cout << "Son的func的调用" << endl;
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
//		cout << "Animal的构造函数调用" << endl;
//	}
//	virtual ~Animal()
//	{
//		cout << "Animal的析构函数调用" << endl;
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
//		cout << "Dog的构造函数调用" << endl;
//	}
//	~Dog()
//	{
//		if (m_Name)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//		cout << "Dog的析构函数调用" << endl;
//	}
//	virtual void speak()
//	{
//		cout << "汪汪汪" << endl;
//	}
//	string* m_Name;
//};
//
//void test1()
//{
//	//父类指针指向子类对象
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