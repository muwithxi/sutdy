#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{

	return 0;
}

//int main()
//{
//	array<int, 5> arr1;
//	cout << arr1.at(5);
//	return 0;
//}

//int main()
//{
//	double arr1[4] = { 1.3, 1.4, 5.2, 0.0 };
//
//	vector<int> arr2(3);
//
//	//vector创建的时候不能初始haul，通过赋值来给元素值
//	arr2[0] = 1;
//	arr2[1] = 2;
//	arr2[2] = 3;
//	array<double, 3> arr3 = { 1.5, 2.6, 3.14 };
//	array<double, 3> arr4;
//	arr4 = arr3;//对同类型，同空间大小两个array对象进行赋值操作
//	cout << "arr1[2] " << arr1[2] << " at " << &arr1[2] << endl;
//	//arr1的地址与arr2的相差很大
//	cout << "arr2[2] " << arr1[2] << " at " << &arr2[2] << endl;
//	cout << "arr4[2] " << arr4[2] << endl;//打印通过赋值的arr4第三个元素
//	cout << "arr3[2] at " << &arr3[2] << " " 
//		 << "arr4[2] at " << &arr4[2] << endl;
//	//arr1与arr3、arr4的地址相差小
//	arr1[-1] = 3.8;
//	cout << "arr1[-1]: " << arr1[-1] << " at " << &arr1[-1] << endl;
//	cout << "arr3[2]: " << arr3[2] << " at " << &arr3[2] << endl;
//	cout << "arr4[2]: " << arr1[2] << " at " << &arr4[2] << endl;
//	return 0;
//}

//int main()
//{
//	array<int, 4>ai;
//	array<double, 3>ad = {1.1, 2.2, 3.3};
//	//array<typeName, sz>名称;  元素个数sz只能是整型常量，和数组一样不能用变量。
//	return 0;
//}

//int main()
//{
//	int sz;
//	//创建vector数组
//	//vector<typeName> 名称(sz);//()里整型常量、整型变量都可以
//	return 0;
//}

//int main()
//{
//	vector<int> vi;//创建一个类型为int，大小为0的动态数组，在运行时创建的。
//	int sz = 0;
//	cin >> sz;
//	vector<int> vt(sz);//使用()，来指定数组元素个数，注意我们还使用的变量。
//	return 0;
//}