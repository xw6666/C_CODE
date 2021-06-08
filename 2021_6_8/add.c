#define _CRT_SECURE_NO_WARNINGS 1

//全局变量
//static修饰全局变量
static int g_val = 6666;

//如果全局变量被static修饰
//那全局变量的外部链接属性变成了内部链接属性
//这个全局变量只能在本源文件内使用
//其他源文件无法链接到，也无法使用


//函数是具有外部链接属性了
//如果函数被static修饰
//那函数的外部链接属性变成了内部链接属性
//那这个函数只能在本源文件使用
//static int Add(int x, int y)
//{
//	return x + y;
//}