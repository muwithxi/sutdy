#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{

	return 0;
}

//int main()
//{
//	//前缀和后缀如果对于没有及时用到它的值的话，结果是一样的
//	//自定义的话，前缀比后缀的效率高，因为，前缀++是把值加1后返回结果，
//	//后缀是先复制一个副本，然后把加1的副本返回。 
//	return 0;
//}

////副作用和顺序点
//int main()
//{
//	//顺序点可以当成一件事情的结尾标志，一条语句结尾就有顺序点，在一条语句结束前，
//	//副作用如果在这条语句里，会确保在进入下一条语句前，所有修改完成。
//	//完整表达式，该表达式的末尾是一个顺序点，。
//	//在C++11中不再使用顺序点这个术语了，因为难以用于讨论多线程。
//
//	return 0;
//}

//使用for循环访问字符串
//int main()
//{
//	//没有初始化，string类对象会被放个0
//	string words;//string可以替代字符数组
//	cin >> words;//大小会自动定
//	for (int n = words.size() - 1; n >= 0; n--)
//	{//words.size()是计算字符串长度的
//		cout << words[n];//string对象使用数组访问法
//	}
//	cout << "\n";
//	return 0;
//}

////在C++中可以在for的初始化表达式中声明变量。三个表达式，我们知道声明语句去掉分号不是表达式
////起初是通过定义声明语句表达式来合法化的，后来被取消掉了。现在是声明语句int a = 0;这样
////for里的第一个;看做是声明语句里的，语句自带;,总之，可以在初始化表达式部分声明变量
////这个变量只存在于for循环，对于较老的C++实现中，会把i视为是在循环之前声明的
//int main()
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		;
//	}
//	return 0;
//}

//int main()
//{
//	//每个C++表达式都有值，数值或数值+运算符+数值，都是表达式。
//	//x = 10，前面说过为获得表达式的值，而改变了内存中数据（x）的值时，我们说有副作用。
//	//然而表达式并不都有副作用，比如x+5。
//	//表达式与语句的练习，任意一个表达式都可以成为语句，语句的特点是带有分号。
//	// 语句并不都有意义，比如x+10;这条语句，就没有任何作用，甚至会浪费编译器时间
//	// ++、--这写符号也局有副作用。
//	//在表达式结尾加上分号就成为一条语句了。但表达式去掉分号，剩下的部分不一定是表达式。
//	int age = 0;
//	age = 10//是表达式，age = 10;就是一条语句 age+10;是一条语句不过没什么用
//	int a = 0; 是一个声明语句，然而，去掉分号，int a没有值，不是表达式。
//	return 0;
//}

//int main()
//{
//	int a;
//	cout << (a = 10) << endl;//表达式的值是左侧成员的值，10。
//	cout << "Now x = " << a << endl;
//	cout << (a > 20) << endl;//cout在显示bool值的时候，会将它们转换成int值
//	//true 是 1、 false 是 0。
//	cout << (a < 20) << endl;
//	cout.setf(ios_base::boolalpha);//改变cout打印bool类型时转换成int的这个属性，使其不转换
//	cout << (a > 20) << endl;
//	cout << (a < 20) << endl;
//	return 0;
//}

//int main()
//{
//	15 + 20;//分号前的15+20是一个表达式，一个常量5也是一个表达式
//	int x = 20;
//	x = 15;//x = 15 也是一个表达式，有值。C++将赋值表达式的值定义为左侧成员的值。
//	//也就是，x的值最终是这个赋值表达式的值。
//	int a = (x = 10) + 5;//所以甚至这样写的效果和 a = 10 + 5的效果无异。但是，
//	//x会因为赋值表达式，x的值变成了10，我们说它带有副作用(改变了值)。
//	x = a = 5;//a = 5 的结果是5， x = 5。连续赋值，C支持,C++也支持。
//	return 0;
//}

//int main()
//{
//	//for语句看上去像是函数调用，因为后面的括号是贴在一起的。在C++中，为了更好的区分开来
//	//for与后面的括号中间会留一个空格。
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		cout << "haha,world" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int limit;
//	cin >> limit;
//	int i;
//	//C++将整一个for当成一条语句，包括循环体。
//	for (i = 0; i < limit; i++)//初始化;测试表达式;调整
//	{
//		cout << "i = " << i << endl;
//	}
//	//测试表达式可以是任意表达式，C++将把结果强制转换成bool(布尔)类型
//	//值为0的表达式被强转成false，表达式为非0,被强转成true
//
//	//引进bool类型之前
//	//关系表达式如果为true，则被判断为1，表达式为false，被判定为0
//	//引进bool类型之后
//	//关系表达式为true，就被判定为bool字面值true，为false，就被判定为bool字面值flase
//
//	//所以现在都是用bool类型字面值true和flase来判断要不要进入循环。
//	//也就是，整数值，会被强转成bool字面值，关系表达式，判定结果也是bool字面值中的一个。
//	cout << "Done now that i = " << i << endl;
//	return 0;
//}