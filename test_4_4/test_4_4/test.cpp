#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
#include <cstring>

//int main()
//{
//	using namespace std;
//	char charr[10];
//	string str;
//
//	cout << "Length of string in charr before input: " << strlen(charr)
//		<< endl;
//	cout << "Length of string in str before input: " << str.size()
//		<< endl;
//	cout << "Enter a line of text:\n";
//	cin.getline(charr, 10);
//	cout << "Enter another line of text:\n";
//	getline(cin, str);
//	cout << "Length of string in charr after input: " << strlen(charr)
//		<< endl;
//	cout << "Length of string in str after input: " << str.size()
//		<< endl;
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	return 0;
//}

//在string类出现之前，C-风格字符串要实现类型与string类的操作该如何实现。
//其实是有strcoy，strcat等字符串函数来实现的，我们来比较一下，string类的操作和字符数组用函数的操作
//看完后你就知道string的方便性 要引用头文件<cstring>来使用字符串函数
//int main()
//{
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	str1 = str2;
//	strcpy(charr1, charr2);//string类对象赋值和拷贝相同
//
//	str1 += " paste";
//	strcat(charr1, " juice");//string类对象追加和strcat一样
//
//	int len1 = str1.size();
//	int len2 = strlen(charr1);
//
//	cout << "The string lenth of str1 is " << len1 << " .\n";
//	cout << "The string lenth of charr1 is " << len2 << " .\n";
//	cout << str1;
//	return 0;
//}

//string类的赋值，拼接，追加
//int main()
//{
//	using namespace std;
//	string str1 = "SJR";
//	string str2, str3;
//	cout << "你能把一个字符串赋值到另一个字符串吗?\n";
//	str2 = str1;
//	cout << "str1 = " << str1 << " str2 = " << str2 << endl;
//	cout << "你能输入一个字符串\"好帅\"到str3吗?" << endl;
//	cin >> str3;
//	cout << "str3 = " << str3 << endl;
//	cout << "请把str2和str3拼接一下\n";
//	str1 = str2 + str3;
//	cout << "str1 = " << str1 << endl;
//	cout << "请在str2后加个\"要好好学习\"" << endl;
//	string str4 = "要好好学习";
//	str2 += str4;
//	cout << "str2 = " << str2 << endl;
//	cout << "加油你可以的!\n";
//	return 0;
//}

//string类对象的赋值、拼接、附加
//int main()
//{
//	using namespace std;
//	//赋值
//	string str1 = "C++";
//	string str2;
//	str2 = str1;//可以把值赋给str2，string类“变量”
//	cout << str2 << endl;
//	//字符串的合并
//	string str3 = " I love you";
//	str1 = str2 + str3;//将str2和str3用+运算符合并起来赋给str1,
//	cout << str1 << endl;
//	//追加
//	str2 += str3;//str2+str3放到str2中，相当于在str2后面加了个str3
//	cout << str2 << endl;
//	return 0;
//}

//string初始化
//int main()
//{
//	using namespace std;
//	string str;//类设计让程序能够自动处理string的大小，str的声明创建一个长度为0的string对象（没有进行初始化）
//	string str1 = "hello";//当我们要存储字符串的时候，可以通过一个简单的类变量，而不是一个数组
//	cout << str.size() << endl;
//	cin >> str;//输入字符串给str，程序会自动调整str的长度
//	string str2 { "the bread Bowl" };//C++11也允许将列表初始化用于string类对象
//	string str3{};
//	cout << str.size() << endl;
//	cout << str3.size() << endl;
//	return 0;
//}
//与数组相比，string的长度由我们输入后程序自动调整，更安全。
//可以将字符数组看成一组用于存放一个字符串的char存储单元，string类变量是一个存放字符串的实体。

//比较string类和字符数组
//int main()
//{
//	using namespace std;
//	char arr[20];
//	char arr1[20] = "jaguar";
//	string str;//没有初始化就是长度为0的类对象
//	string str1 = "panther";//像把字符串初始化给字符数组一样初始化给string类变量--C-风格字符串
//
//	cout << "Enter a kind of feline: ";
//	cin >> arr;
//	cout << "Enter another kind of feline: ";
//	cin >> str;//像输入给字符数组一样，输给string类变量-C风格字符串
//	cout << "Here are some felines:\n";
//	cout << arr << " " << arr1 << " "
//		<< str << " " << str1 << endl;//用cout来显示string类变量
//	cout << "The third letter in " << arr1 << " is "
//		<< arr1[2] << endl;
//	cout << "The third letter in " << str1 << " is "
//		<< str1[2] << endl;//可以通过下标来访问类变量的某个字符，和数组一样
//	return 0;
//}
//string对象和字符数组的最大区别就是，string对象是简单变量，而不是数组。

//其它字符串字面值和字符常量
//int main()
//{
//	wchar_t title[] = L"Chief Astrogator";
//	char16_t name[] = u"Felonia Ripova";
//	char32_t car[] = U"Humber Super Snipe";
//	wchar_t a = L'w';
//	char16_t b = u'o';
//	char32_t c = U'q';
//	return 0;
//}

//字符集--新的类型新的概念
//int main()
//{
//	//通用字符名的用法类型于转义序列，通用字符名可以以\u 和 \U打头，
//	//\u后面是八位十六进制，\U后面是十六位十六进制。
//	//这些位表示的是字符的ISO 10646码点，为大量的字符提供了数值编码
//	return 0;
//}

//int main()
//{
//	//wchar_t宽字符类型
//	using namespace std;
//	wchar_t bob = L'P';//程序需要处理的字符集可能无法用一个8位的字节表示，比如日语很多符号，128个不够用。
//	//C++两种处理方式
//	//第一是通过出厂的时候将char定义为16位的大小或32位。
//	//第二种是实现一种可以同时支持一个小型基本字符集合和一个较大的扩展字符集。
//	//cin和cout将输入输出看做是char流，因此不适于用来处理wchar_t类型，iostream文件提供了相似的工具wcin和wcout
//	//可用于wchar_t流，另外，可以通过加上前缀L来指示宽字符常量和宽字符串
//	//C++11新增的类型 char16_t,char32_t  char16_t和char32_t都是无符号的  前者是16位，使用u来当字符串常量和字符串的前缀
//	//后者是32位，使用U来当字符串常量和字符串的前缀。
//	wcout << L"talk" << endl;
//	return 0;
//}

//原始字符串raw
//int main()
//{
//	using namespace std;
//	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;//C++11提供了一种原始字符串类型，R"(string)";"(和)"是定界符
//  //可在"+(和)+”之间加上任意数量的基本字符，但空格，左右括号，斜杠和控制字符(制表符和换行符)除外。
//	cout << "Jim \"King\" Tutt uses \"\\n\" instead of endl." << endl;//原始字符串相比于不是原始字符串，要输出具有特殊含义的字符更容易
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << R"+*("(Who)", she said:)+*" << endl;
//	//末尾不是*+哈，不是DW那个标记，怎么加的顺序就怎么结尾
//	return 0;
//}