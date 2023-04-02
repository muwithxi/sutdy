#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>//头文件包含了声明
//库文件是定义代码的地方


//int main()
//{
//	using namespace std;
//	int i;
//	float(i);//C++纯粹的强制类型转换，函数调用模式
//	static_cast<double>(i);//更严格的强制类型转换
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);//cout打印的时候会把小数点后的0省略掉，加上这句后
//	//防止了cout把较大的值转成E表示法，并使程序显示到小数点后六位，两个参数是通过包含iostream来提供的常数。
//	//类似于改变了cout的属性
//	float f = 0;
//	cin >> f;
//	cout << f;
//	return 0;
//} 

//int main()
//{
//	using namespace std;
//	//C++
//	int wrens(432);//432  区别于函数调用的 Add() 也不同于函数声明的位置和结构 参数是类型而不是值 位置不再函数体内
//	//C或C++
//	int i = 101;//101
//	int a;//垃圾值 C++讲的是，在创建a之前相应内存单元存的值
//	//C++11
//	int emus{};//0
//	int emu = {};//0
//	int b = { 20 };//20
//	int c{ 30 };//30
//	return 0;
//}

//#include <cmath>
//*类简介 C++面向对象（OOP） 类是数据类型，包括了这个类可以包含哪些数据信息，可执行什么操作
//int main()
//{
//	using namespace std;
//	double i = 6.25;  //类型之于变量，表示什么数据，进行什么操作 //类之于对象，表示什么对象信息，执行什么操作。
//	double a = sqrt(i);
//	cout << a << endl;
//	return 0;
//}


//使用cout进行拼接
//int main()
//{
//	using namespace std;
//	//当一条语句很长时，写在一行很影响风格，由于C++书写自由的规则，标记间的空格和换行符是可以相互替换的，C和C++结束语句看;而不是一行一句
//	cout << "hello,"
//		<< "world";//一条语句，两行但字符串部分两个双引号都要加，不要只加最前最后，那样不行。
//	return 0;
//}


//int main()
//{
//	using namespace std;
//	int carrots;
//	cout << "How many carrots do you have?" << endl;
//	cin >> carrots;//cin>>变量  cin也是一个智能对象，它可以把我们输入的字符转成声明变量类型能够接收的数字赋给变量
//	cout << "Here are two more.";
//	carrots = carrots + 2;
//	cout << "Now you have " << carrots << " carrots." << endl;
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int count = 25;
//	cout << count;//cout输出整型的具体是把count的值替代，将其转成字符串形式，再打印出来。
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int count;
//	count = 25;
//	cout << "I have " << count << " cabbages";
//	cout << endl;
//	count = count - 1;
//	cout << "Now,I have " << count << " cabbages";
//	cout << endl;
//	int a, b, c;
//	a = b = c = 10;//C和C++都可以连续赋值
//	return 0;
//}

//int main()
//{
//
//	std::cout << "你好，欢迎来到C++的世界";//<<运算符重载，<<根据你使用的类，重定义<<的含义。
//	std::cout << std::endl;//控制符endl 
//	//两个一样，看情况使用，在字符串中用换行符，另起不是字符串用控制符
//	std::cout << "hello,world" << std::endl;
//	std::cout << "hello,world\n";
//	return 0;
//}

//C语言头文件转C++方向知识
//对老式C语言头文件部分还还保留.h扩展名，C++仍然可以使用
//C++头文件没有扩展名
//转换成C++风格的C头文件去掉了扩展名.h 并在前面加上c表示来自C库

//*C++旧式风格 iostream.h和cout
//C++新式风格 iostream和std::cout  或 using std::cout和cout 或 using namespace std和cout
//名称空间std  名称空间::工具

//#include <iostream>

//int main()//函数头 //在C语言中,让（）空着编译器保持沉默，在C++中则与（void）等效 ，main函数是与操作系统的接口
//{
//	using namespace std;//使用名称空间  using namespace 是编译指令
//	cout << "hello,world";//printf("hello,world");  cout工具显示信息
//	cout << endl;//printf("\n");
//	cout << "welcom to C++!" << endl;
//	return 0;//如果在main里最后没有遇到结束语句，默认以return 0结尾。
//}