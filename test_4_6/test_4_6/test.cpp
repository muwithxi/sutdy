#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

////位字段--为变量指定空间位（bit）数
////字段的类型应为整型或枚举类型 要有冒号 然后是数值 指定位数。
////可以使用没有名称的字符段来提供间距 int : 4; 在内存中空出4个bit位，使前一个与后一个在内存上隔开。
//struct torgle_register
//{
//	unsigned int Sn : 4;//每个成员都被称为位字段
//	int : 4;
//	bool goodIn : 1;//布尔类型，用来表示真假的数据类型。//这里有个不懂的
//	bool goodTorgle : 1;
//};
//torgle_register tr{ 14, true, false};//可以像通常一样初始化字段
////tr.Sn 也可以使用标准访问结构成员的方式访问

//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
////结构数组
//int main()
//{
//	using namespace std;
//	//结构体的结构成员可以是一个数组，数组的元素可以是结构体。
//	inflatable guests[2]//和创建基本数据类型的数组一样，创建了两个元素的结构数组
//	{                  //"="可以省略，别忘记后看到这个就懵了哈。 guests{}这样也可以哦
//		{"Bambi", 0.2, 10.5},//可以分行写
//		{"Godzilla", 1820, 561.22}
//	};
//	//guests[0]是第一个结构体，guests.name/volume/price 访问数组元素，元素是结构体用.访问结构成员
//	cout << guests[0].price;
//	return 0;
//}

//在声明结构体的时候，还在结尾}创建了两个perks类型的变量,也可以初始化。
//struct perks                            
//{                                       
//	int key_number;                     
//	char car[12];                       
//}my_smith, ms_jones;
//// 这样子: }my_simth = {5, "hh"}; 但初始化最好与创建分开不然代码显得很杂
//struct//声明一个无名称的结构体，只能通过在声明的时候顺便创建变量，因为没有名称。
//{
//	int age;
//	int weight;
//}people;//使用无名称结构体一定要在这里创建，不然毫无意义。
//int main()
//{
//	using namespace std;
//	return 0;
//}

//对结构的一些操作，C++使用户自定义的类型尽量与内置类型可能相似。
//可以把结构体传参给函数，可以让一个函数返回一个结构体。
//*可以使用赋值运算符，将结构赋值给另一个同类型的结构
//struct inflatable
//{
//	char name[20];
//	float value;
//	double price;
//};
//int main()
//{
//	using namespace std;
//	inflatable bouquet = { "sunflowers", 0.1f, 11.59 };
//	//编译器0.1默认是double类型，在后面加上f表示是浮点型
//	inflatable choice{};
//	choice = bouquet;
//	cout << choice.name << " " << choice.value << " " << choice.price << endl;
//	//把结构体bouquet里的成员值一个个赋到同类型变量对应的成员中。
//	//这种赋值叫做成员赋值，即使成员是数组也能赋值。
//	return 0;
//}

//struct Stu//使用string类当结构成员
//{
//	std::string a;//结构体里用string类来代替字符数组 -- string类是可以做结构的成员
//	//可以把using namespace std放到外部，记得引用头文件<string>
//	int age;
//	double height;
//};
//
//int main()
//{
//	using namespace std;
//	Stu s1 = { "啊苏", 18, 173.5 };
//	return 0;
//}

//struct inflatable
//{
//	char name[10];
//	int age;
//	double height;
//};
////C++11结构初始化的知识
//int main()
//{
//	inflatable desk = { "red wood", 10, 1.5 };//C++11中列表初始化是通用的 可以省略"=" ，可以{}代表全部初始化为0
//	inflatable pig{};//将结构成员name每个字节都初始化为0，age、height也都为0
//	//规则也一样，不允许缩窄转换，缩窄嘛就是原先是个大的类型，转成小的装不下，比如这样:
//	//inflatable a = {"sddf", 5.5, 1.0};在这里面第二个5.5是不行的，double类型转成int就是缩窄转换。
//	return 0;
//}

//struct tec//外部声明，可以给后面多个函数使用。
//	//C++不提倡使用外部变量，但提倡使用外部结构声明
//	//在外部声明的是符号常量更合理 const int a = 10; a是符号常量！！
//{
//	char name[10];
//	int age;
//};
//tec t1;
//
//Stu student2;//error Stu是在main函数里声明结构体类型，外面不能使用
////结构体声明的位置
//int main()
//{
//	using namespace std;
//	struct Stu//在函数声明结构体，不能在函数外使用,只能在声明该结构体的函数内使用
//	{
//		char name[10];
//		char learn_number[20];
//		int age;
//	};
//	Stu student1 ={"小苏", "2243", 18};
//	tec t2;
//	return 0;
//}


//结构声明--创建结构体类型
//struct inflatable
//{   //列表是在{}里的东西， 项是一个一个的比如char name[20]就是一项，也是一条声明语句
//	//每个列表项都是一条声明语句，每一项都被称为结构成员。
//	char name[20];//学生的名字 
//	char sex[5];//学生的性别
//	int age;//学生的年龄
//};
//关键字struct表明，这些代码定义了一个结构体类型，标识符inflatable是这种数据格式的名称
//新类型的名称叫inflatable，这样我们就可以像char或int创建变量一样，用inflatable创建变量啦--inflatabel hat;
//hat 就是一个变量，这和C语言创建结构体不一样。
//*C++允许省略struct，在C++中，结构标记（inflatable）的用法和基本类型名（char）相同
//强调的是，结构声明定义了一种新类型，在C++中省略struct是不会出错的


//结构简介，有一种数据格式，将各种信息存在一个单元里，这种数据类型就是结构类型。
//struct inflatable
//{
//	char name[20];//学生的名字 
//	char sex[5];//学生的性别
//	int age;//学生的年龄
//};
//int main()
//{
//	using namespace std;
//	inflatable A =
//	{
//		"张三",
//		"男",
//		20
//	};//也可以放在一行初始化
//	cout << "what is your name?" << endl;//.（成员运算符）用来访问结构体成员。
//	cout << A.name;
//	//补充:访问类成员函数是从访问结构成员变量的方式衍生出来的。
//	cout << "How old are you\n";
//	cout << A.age;
//	return 0;
//}