#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

//使用new创建动态数组
int main()
{
	//在C++中，创建动态数组很容易。告诉new数组的类型和元素个数就可以
	int* parr = new int[10];//new运算符返回第一个元素的地址。
	return 0;
}

//int main()
//{
//	using namespace std;
//	int* ps = new int;
//	int* pd = ps;
//	delete pd;//一般不要创建两个指向同一个块内存块的指针，这会增加释放两次的可能性
//	//可能会再delete ps;然而已经通过delete pd;释放掉了，再次释放的结果将是不确定的。
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* ps = new int;
//	*ps = 100;
//	cout << *ps << " location = " << ps << endl;
//	delete ps;//释放掉用new开辟的空间
//	//但指针ps本身不会被清除，也就是ps里的值，还存放着释放前的那块内存地址
//	ps = NULL;//赋成空指针，防止错误使用导致的指针破坏程序。
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int night = 1001;
//	int* pn = new int;//使用new在运行时为int值开辟空间，并把地址返回来
//	*pn = 1001;//使用指针给内存赋值
//	cout << "night value = " << night << ", location " << &night << endl;
//	cout << "int value = " << *pn << ", location " << pn << endl;
//	double* pd = new double;//使用new为double值开辟空间
//	*pd = 1001.0;
//	cout << "double value = " << *pd << ", location " << pd << endl;
//	cout << "size of pn = " << sizeof(pn) << endl;//整型指针的大小
//	cout << "size of *pn = " << sizeof(*pn) << endl;//*pn是一个整数了，不是指针。
//	cout << "size of pd = " << sizeof(pd) << endl;//双精度浮点数指针的大小
//	cout << "size of *pd = " << sizeof(*pd) << endl;//*pd是一个doubel值了
//	delete pn;//free释放
//	delete pd;//C++中使用delete
//	return 0;
//}

//使用指针来跟踪new在运行阶段开辟的内存空间
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	前面我们都将指针初始化为了变量的地址；变量是在编译时分配的有名称的内存。
//	而指针只是另一种访问变量值的一种方式，它还不如用变量名称直接访问来的快。
//	指针真正的用武之地是：给在运行阶段分配未有名称的内存空间存储值---细读
//	在这种情况下，只能通过指针给这块空间进行唯一性的操作。在C中使用malloc，C++用新的运算符new。
//	int* pb = new int;//在运行的阶段为int值分配未命名的内存，new返回这块内存的地址，我们用指针来接收
//	new int的意思是，在内存中开辟一个int类型的空间。
//	既然pb指向的内存空间没有名称，那我们怎么称呼它呢?我们说pb指向一个数据对象，术语:数据对象比变量更通用。
//	数据对象是为数据项分配的内存块。变量也是一个存储数据项的内存块的名称，因此变量也是数据对象。
//	这里的对象不是面向对象编程中的那个对象的意思，而是指针指向的内存块的意思。
//	为一个数据对象分配内存的格式是 type_name* pointer = new type_name;
//	delete pb;
//	return 0;
//}


//指针与十六进制数字
//int main()
//{
//	using namespace std;
//	//指针不是整型，虽然计算机通常把地址当做整数来处理。
//	//从概念上来看，指针与整数是不同的两种类型，整数是可以执行加减乘除等运算的数字
//	//而指针是描述的是位置，将两个地址相乘是无意义的。
//	int a = 0;
//	int* pt = &a;
//	//pt = 0x11223344;//error。整数是整型，还是一样的道理，不能将整型赋值给指针，类型不同，但可以强制转换。
//	//pt = (int*)0x11223344 //right 但前提是,你需要对这个地址有掌握性，不然访问也是容易出错的
//	//在C99标准发布之前，C语言允许这样赋值，也就是pt = 0x11223344是合法的。但C++在类型一致方面要求更严格。
//	//pt虽然是int值的地址，但不意味着pt就是int类型。
//	//例如在有些平台上，int是2个字节大小，而地址的大小是4个字节（32位）
//	return 0;
//}


//对指针解引用之前，一定要确保指针的有效性
//int main()
//{
//	using namespace std;
//	int* pa;//创建了一个指针，但pa的值是多少我们不知道，也就是随机值。
//	//可以理解成内存单元在被我们使用之前，操作系统给这个内存空间放什么值是不确定的。
//	// 
//	//在创建指针变量的时候，计算机为指针开辟了空间供指针存放地址
//	//但不会为指针所指向的地方开辟内存空间。
//
//	*pa = 20;//error。对不知道指向的指针解引用，无疑是在玩火自焚。
//	return 0;
//}