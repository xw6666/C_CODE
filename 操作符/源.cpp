#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//int main()
//{
//	//char arr[10] = "abc";
//
//	//cout << sizeof(arr) << endl;
//	//cout << strlen(arr) << endl;
//	int a = 5;
//	short b = 10;
//	cout << sizeof(b = a + 2) << endl;
//	cout << b << endl;
//	system("pause");
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int cnt = 0;
//	int i = 32;
//	while (i--)
//	{
//		if ((a & 1) != (b & 1))
//		{
//			cnt++;
//		}
//		a >>= 1;
//		b >>= 1;
//	}
//
//	cout << cnt << endl;
//}

//int main()
//{
//	int n = 0;
//	cin >> n;
//
//	int x = n;
//	
//	cout << "奇数位(从第一位开始): ";
//	for (int i = 1; i <= 16; i ++)
//	{
//		cout << (x & 1) << " ";
//		x >>= 2;
//	}
//	cout << endl;
//
//	x = n >> 1;
//	cout << "偶数位(从第二位开始): ";
//	for (int i = 1; i <= 16; i ++)
//	{
//		cout << (x & 1) << " ";
//		x >>= 2;
//	}
//	cout << endl;
//}

//int main() {
//    int cnt = 0;
//    int n;
//    cin >> n;
//    while (n)
//    {
//        n = n & (n - 1);
//        cnt++;
//    }
//    cout << cnt << endl;
//}

//int main()
//{
//	int a = 5;
//	int b = 4;
//
//	cout << "交换前：a = " << a << ", b = " << b << endl;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	cout << "交换后：a = " << a << ", b = " << b << endl;
//}