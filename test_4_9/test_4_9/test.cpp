#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>


//int main()
//{
//	using namespace std;
//
//	return 0;
//}

//指针的声明和初始化
//int main()
//{
//	using namespace std;
//	//计算机需要跟踪指针（地址）指向的值的类型。例如，int的地址与double的地址虽然在大小上相同
//	//但int和doubel值的字节数不一样，而且存储的格式也不一样，当我们对一个double的值用整型指针就会出错
//	//指针解引用的时候，认为它是个int，首先大小就只访问四个字节，其次是取存储的值格式取的不对。
//	//所以指针必须指定指向值的数据类型
//	int data;
//	int* p_data;//这表示*p_data的类型是int型，不是指针。*解引用运算符是用于指针的，因此p_data变量本身必须是指针
//	//一个指向整型的指针，就是说p_data指向int类型。我们也说p_data的类型，是指向int的指针，也就是int*
//	//p_data的类型是 int*，意即指向整型的指针。
//	//C程序员多数使用int *ptr强调*ptr是一个整型。C++程序员多数使用int* ptr表明ptr是指向整型的指针。
//	//当然int*ptr的写法也没问题
//	//*请注意，当我们在声明的时候 int* p1, p2;这样写的时候，p1是指向整型的指针，p2是整型变量。
//	//对每个指针变量，都需要使用一个*。 对于C++而言 int*是一种复合类型，是指向int的指针。
//
//	double* ptr1;//已将ptr1声明为一个指向double的指针，因此编译器知道*ptr是一个double类型的值
//	//也就是说，它知道*ptr1是一个浮点格式存储的值，这个值占8个字节，指针变量ptr1不仅仅是指针
//	//而且是指向特定类型(double*)的指针，和数组一样，指针都是基于其它类型的，所以是复合类型。
//
//	//初始化指针
//	char ch = 'w';
//	char* pc = &ch;//初始化的是pc，而不是*pc，关于C++对指针类型的强调。强调pc的类型是指向char类型的一个指针。
//	//pc是（指针）变量。
//	return 0;
//}

//指针的思想
//int main()
//{
//	using namespace std;
//	//面向对象编程与传统的过程性编程的区别在于，事先还是实时。OOP强调的是运行阶段进行决策
//	//运行阶段指的是程序正在进行时。  编译阶段指的是编译器将程序组合起来时，这也和过程性编程的思想一样
//	//先看大问题如何分解成小问题解决，预先设定。而OPP是从下往上，需要什么就做什么。比较灵活。
//
//	//例如:要在C++数组中声明数组，必须指定数组的长度，因此，数组长度在编译的时候就已经确定好了。
//	//这就是编译阶段决策，预先设定。 但如果设小了，不够用，设多了，浪费。OPP通过将这样的决策推迟到运行阶段进行。
//	//在程序运行后，可以告诉它这次小的就够用了或这次需要大一点的数组。
//
//	//总之，要想在运行阶段能确定数组长度，语言必须支持在程序运行时创建数组，C++采用的方法是new请求正确数量的内存
//	//以及使用指针来跟踪新分配的内存的位置。你知道这和C里的malloc和relloc很像，不过C++编写比C容易。
//	int data = 3;
//	int* p_data = &data;//指针用于存储值（data）的地址，因此指针名p_data表示的是地址，就像data指的是值一样。
//	//*运算符被称为间接值或解除引用运算符，将其应用于指针，可以得到该得到该地址存储的值。
//	cout << "Values: data = " << data << " Addresses: data = " << &data << endl;
//	cout << "3+5 Values: *p_data = " << *p_data << " Addresses: p_data = " << p_data << endl;//在字符串内不进行运算
//	//为什么会这么说，且看p_data是data的地址，解引用后是地址p_data指向的值，我们又知道，data的值由名称data表示。
//	//所以*p_data等同于data。在字符串里没进行转换。 就像3+5没有变成8一样。
//	*p_data = *p_data + 1;//*p_data既然与data等价，那就可以把它看成int类型来使用，并且data会改变
//	cout << data << endl;
//	return 0;
//}

//地址和自由存储空间
//int main()
//{
//	using namespace std;
//	//计算机程序在存储数据的时候时必修跟踪的三种基本属性
//	//1.信息存储在何处 2.存储的值是多少 3.存储的信息是何种类型
//	//在我们创建简单变量时，比如int a = 5; 我们存储了整型，符号名为a，为5这个整型开辟了空间 使用a可以跟踪。
//	//指针--- 指针是一个变量，它存储的值是地址，而不是值本身，比如指针存的是0x11223344，不是十六进制的那个数。
//	//在讲指针之前，我们需要知道，如何求得一个简单变量的地址，那就是运用&取地址操作符，就可以获取它的位置。
//	int a = 6;
//	double b = 4.5;
//	cout << "a value = " << a;
//	cout << " and a address = " << &a << endl;//显示地址是，cout使用十六进制表示法，一般地址都是十六进制表示。
//	//有些使用十进制，很少。
//	cout << "b value = " << b;
//	cout << " and b address = " << &b << endl;
//	return 0;
//	//在不同系统中，可能是先存储b变量，再存储a变量，也能是反着的。
//	//而且并不是所有系统创建变量，变量都是在相邻内存单元存着的。
//}

//枚举变量的取值范围
//enum bits {one = 1, two = 2, four = 4, night = 9};
//bits myflag;
//int main()
//{
//	using namespace std;
//	//最初，只有枚举结构里的枚举量是合法有效的值，可以赋给枚举变量
//	//因为增加了强制类型转换，扩大了枚举值合法值的范围，每个枚举类型都有一个范围
//	//这个范围是多少呢?如何计算呢?
//	myflag = bits(6);//这将是合法的赋值。虽然6不是枚举值，但在枚举范围内。
//	//取值范围:首先，找上限，需要知道枚举最大值，找到大于这个最大值的2的n次方幂
//	//这个幂是最接近最大值的，把这个幂减去1，就是上限。
//	//找下限，如果最小值不小于0，则下限是0。
//	//否则，与求上限方法一样，先找到最小值，比如是-6，先看成是6，接近6的2次方幂是8，减一后加上负号
//	//-7就是最小枚举值为-6的枚举类型的下限
//	return 0;
//}

//设置枚举量的值
//enum bits {one = 1, two = 2, three = 3, seven = 7};//设置的值必须是整数
//enum b {first, second = 100, third};//显式定义其中一部分 first是0 third是101。
//enum {zero, NUL = 0, one, numberone = 1};//可以创建多个值相同的枚举量。
//比如枚举量NUL和zero的枚举值相同。
//int main()
//{
//	using namespace std;
//	return 0;
//}

//enum op//如果只打算使用符号常量也就是枚举量，可以把名称去掉--匿名
//{      //enum{和}; //结构体，共用体，枚举都有匿名
//	exit,//0
//	add,//1
//	sub,//2
//	mul,
//	modify
//};
//int main()
//{
//	using namespace std;
//	int input;
//	cin >> input;
//	//枚举的使用场景
//	switch (input)
//	{
//	case op::exit://case 0:一样 枚举更常被用来定义相关的符号常量，而不是定义新类型。
//		break;//用enum来创建符号常量比用const值来创建快的多，且方便管理。都固定在一起
//		      //在C++中const修饰的变量是符号常量！
//		//等等....
//	}
//	return 0;
//}

//枚举
	//enum Color {Red, Blue, Yellow};
	////这里有两层意思，第一是创建了新类型Color名称。第二是创建了符号常量，也就是枚举量Red、Blue、Yellow等
	////默认情况下，将整数值赋给枚举量，从0开始依次增加1，也可以显式的给枚举量赋值。后面例子有讲
	//int main()
	//{
	//	using namespace std;
	//	Color cloth;//使用枚举名创建枚举变量
	//	cloth = Blue;//在不进行强制类型转换情况下，枚举变量只能通过枚举量赋值。
	//	cloth = 0;//error 0是整型，不能赋值给枚举类型
	//	cloth = (Color)2;//可行 枚举类型赋给枚举类型，但我们要保证枚举值有效性，后面讲
	//	//对于枚举变量只定义了赋值操作，没有算术操作。
	//	cloth = Red;
	//	++cloth;//error
	//	cloth = 0 + Yellow;//虽然枚举类型本身是没有算术运算的，但在这里枚举量(Yellow)会转换成整型2进行运算
	//	//表达式是合法的
	//	//但结果的类型是int，不能赋值给枚举类型。
	//	cloth = Red + Blue;//error。这里的表达式也是合法的，因为算术运算符让两个枚举量都转成int型进行运算。
	//	//会出错的原因同上，结果是int型，与枚举类型不同。但我们可以强制类型转换。
	//	//如果int值是有效的枚举值，我们可以通过强制类型转换使其赋给枚举变量。
	//	cloth = Color(0 + Yellow);//right。int值（0+Yellow）是2 强制类型转换枚举类型把2赋值给cloth
	//	//但如果int值不是有效的，比如是5，那强制类型转换后赋给枚举变量，会怎样？
	//	cloth = Color(5);//结果是不确定的，虽然不会出错，但结果不可信赖。
	//	return 0;
	//}

//匿名共用体
//struct widget
//{
//	char brand[20];
//	int type;
//	//匿名共用体没有名称，共用体成员也是从同一块地址开始的
//	union 
//	{
//		long id_num;
//		char id_char[20];
//	};
//};
//widget prize;
//int main()
//{
//	using namespace std;
//	if (prize.type == 1)
//	//由于共用体是匿名的，id_num和id_char被视为prize的两个成员，所以直接成员访问就可以了
//	//虽然是属于prize的成员，但它们的起始地址还是相同的，也是共用体。
//		cin >> prize.id_num;
//	else
//		cin >> prize.id_char;
//	return 0;
//}
//可能你表示非常疑惑，那就是真的有必要节省空间吗？现在系统的内存多达数GB，好像没有必要节省
//但是C++不仅是可以为这些系统编程，还用于嵌入式系统编程，比如MP3播放器，对于这些应用程序来说
//内存可能是很宝贵的。另外共用体常用于操作系统数据结构或硬件数据结构。

//共用体
//商品目录，其中有些商品的名字是数字，有些是字符串。
//我们在结构体中使用共用体，可以使结构体占用空间小一点。
//struct widget
//{
//	char brand[20];
//	int type;
//	union id
//	{
//		long id_num;
//		char id_char[20];
//	}id_val;
//};
//widget prize;
//int main()
//{
//	using namespace std;
//	//这里需要强调一点的是，我们在使用共用体的时候，它使用的时间是不同的
//	//在我使用共用体里的id_num的时候，没有在使用id_char。
//	//为什么能节省空间，你看如果我们一个商品名称是数字的，我们只需要用数字来表示
//	//结构成员里的字符串是多余的，但有些商品名称又是字符串来表示，数字又是多余的
//	//但这两种类型都需要，我们如果使用两种结构体，一种表示数字商品的，一种表示商品的，又很麻烦。
//	//而共用体可以让字符串的一部分空间与数字的空间重合，提高空间利用率。
//	if (prize.type == 1)
//		cin >> prize.id_val.id_num;
//	else
//		cin >> prize.id_val.id_char;
//	return 0;
//}