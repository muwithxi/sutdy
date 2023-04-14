#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstring>

//使用new和delete来存储通过键盘输入的字符串示例
//char* getname(void)
//{
//	using namespace std;
//	char tmp[80]{};
//	cin.get(tmp, 80);//一般都不需要80个字节大小的空间存放name
//	char* pc = new char[strlen(tmp) + 1];//使用strlen来计算tmp里被输入多少个字符，加1是给空字符留的
//	strcpy(pc, tmp);
//	return pc;//返回pc的值，是指向新开辟的字符合适大小的字符数组的地址
//	//而且返回后pc就销毁了
//}
//int main()
//{
//	using namespace std;
//	char* name = NULL;
//
//	name = getname();
//	cout << name << " at " << (int*)name << endl;
//	delete[]name;//释放
//	name = NULL;//赋成空指针，因为name还是指向那块已经释放的地址。
//	return 0;
//}

//*使用new创建动态结构
//创建动态结构也是动态数组一样，都是在运行时确定大小的而不是在编译时。
//由于C++中类于结构非常相似，所以有关结构的技术也适用于类。
//创建一个结构体类型，Stu，它就像一张蓝图一样，没有用他来创建变量的时候，并没有占用空间
//struct Stu
//{
//	char name[10];//名字
//	char sex[5];//性别
//	short age;//年龄
//};
//int main()
//{
//	using namespace std;
//	Stu* p = new Stu;//和为C++基本类型开辟空间一样，类型要对应好
//	//因为new将会把一个没有名称的结构体Stu内存空间的起始地址返回给结构体指针p
//	//没有变量名的结构体成员只能通过 指针->结构体成员来操作和访问 不能使用结构名.结构成员来操作
//	//为结构体赋值，这里的赋值并不是很像C语言中为结构体赋值
//	cin.get(p->name, 10);//通过cin.get为结构体字符数组成员赋值
//	//C语言中是 p->name = "string";这样的
//	getchar();//前面的get会留下一个空字符，读取掉。
//	cin.get((*p).sex, 5);//可能你这里不理解的是关于(*p).sex的使用，我们知道p是指向结构体的
//	//对其进行解引用就是找到结构体，然后通过.(点操作符)访问结构成员。逻辑上没毛病，疑惑的是
//	//这块为结构体开辟的空间不是没有名称吗?也就是没有结构名，那为何可以用这种方法呢。
//	//也许是因为计算机中内存单元的地址是唯一的吧，即使我们没有为其起名，计算机认识就可以了！
//	cin >> p->age;//为什么这里前面的空字符不会直接输入给age呢，是因为不符合age的格式要求且是一个空字符
//	//被cin给丢掉了，如果想了解更细一点的情节，可以看博主的《令博主崩溃的scanf函数-C》
//	cout << "Name: " << (*p).name << " Sex: " << p->sex << " Age: " << p->age << endl;
//	return 0;
//}

//备一份字符串的副本
//int main()
//{
//	using namespace std;
//	char arr[20] = "Hello, world";
//	char* ps = NULL;
//	ps = arr;//这样并不能将将字符串存起来，我们需要新建一个数组或者是使用new来完成
//	//使用动态联编，我们知道"Hello, world"也就是13个字节，我们给数组开了20个字节的大小
//	//浪费了7个字节，如果在运行阶段确定数组的大小，可以不用因为开的小不够，开的大浪费而烦恼
//	ps = new char[(strlen(arr)) + 1];//最后加一是为空字符留的空间。
//	//将字符串拷贝到ps所指向的内存空间里去
//	strcpy(ps, arr);//strcpy有两个参数，第一个是目的地，第二个是来源，将来源的字符串拷贝到目的地。
//	//strlen、strcpy两个库函数要引用<cstring>的头文件。这样将得到一份字符串备份。
//	cout << " string: " << arr << endl;
//	cout << " copy string: " << ps << endl;
//	delete[]ps;//用完new开辟的空间记得释放，不释放会导致内存越来越少，也就是内存泄漏。
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	char animal[10] = "lion";
//	const char* bird = "wren";//将char指针初始化为指向一个字符串，因为用双引号括起来的字符串是表示首元素地址。
//	//*字符串常量是常量，所以在指针前面加上const修饰
//	//可以访问bird，但是不能解应用bird，用*bird改变字符串的内容
//	char* ps = NULL;//创建指针的时候，不知道指向谁，初始化为空指针NULL
//
//	cout << animal << " and " << bird << endl;
//	cin >> animal;
////cin >> bird;//error 错误的，因为C++中字符串字面值都将被视为常量，试图修改就会报错
//	//有些编译器只使用字符串字面值的一个副本来表示程序中所有的该字面值
//	//C++不能保证字符串字面值是被唯一存储的，也就是程序中多次使用了"wren"的话，可能是多个副本分别使用
//	//也可能是只有一个副本重复使用，如果是一个的话，对bird进行输入的话，程序中使用了bird来表示"wren"都会受到影响
//	//但它们之间又都是独立的，是位于程序其它地方的字符串。总之，bird被声明为const，因此禁止改变bird指向的位置中的内容
//	ps = animal;
//	cout << ps << "!" << endl;
//	cout << animal << " at " << (int*)animal << endl;//将animal首元素的地址打印出来用(int*)animal
//	cout << ps << " at " << (int*)ps << endl;//ps=animal;将首元素地址赋给了ps，所以打印出来一样
//  //(int*)ps显示为该字符串的地址
//	//为什么打印地址要更换一个类型呢?因为直接将ps交给cout，cout会以为打印一个字符串
//	//只有将地址当做整型打印出来，虽然我们知道十六进制地址和十六进制数字不一样，
//	//但计算机处理地址还是按整型处理，所以用int*类型才能打印出地址，注意打印出来是地址，不是十六进制数字。
//	return 0;
//}

int main()
{
	using namespace std;
	const int sz = 10;
	char flower[sz] = "rose";
	cout << flower << "s are red.\n";//数组名flower是r字符所在的地址
	//cout接收到char类型的地址后，认为要打印该地址处的一个字符串，所以在遇到'\0'之前不会停止打印
	//所以我们也可以把char类型的指针传递给cout打印
	//那我们如何理解"s are red"这个常量字符串呢?
	//为了与cout对字符串输出的处理保持一致，就是让cout认为"s are red."也是要打印的字符串
	//所以这个字符串常量也应该表示一个地址，在C++中，用引号括起来的字符串就像数组名一样，也是首元素地址
	//*在cout和多数C++表达式中，char数组名，char指针和用双引号括起来的字符串常量
	//都被解释为字符串中第一个字符的地址。
	return 0;
}