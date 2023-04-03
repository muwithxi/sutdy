#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

//int main()
//{
//	using namespace std;
//	int age = 0;
//	cout << "How old are you?\n";
//	cin >> age;//在输出年龄的时候 换行符留在了队列里
//	cout << "what is your phone number\n";
//	char ch[12];
//	cin.getline(ch, 12);//看到了换行符后，即遇到了行尾，读取掉并替换成空字符赋给了ch数组
//	cout << "是" << ch << "吗?\n";//ch是空字符，所以什么也不输出
//	cout << "Yes";
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.getline(name, ArSize);//最多读取19个字符，因为还要有一个字符是换行符
//	//getline的遇到换行符(回车)结尾，但不保存换行符，也就是会把换行符也读取掉，在存字符串的时候，把换行符换成了空字符
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);//
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	return 0;
//}

//cin.getline()读取一行字符串输入 有两个参数 第一个目的数组，第二个是要读取的字符数
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.getline(name, ArSize);//最多读取19个字符，因为还要有一个字符是换行符
//	//getline的遇到换行符(回车)结尾，但不保存换行符，也就是会把换行符也读取掉，在存字符串的时候，把换行符换成了空字符
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);//
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin >> name;//Alistair Dreeb
//	cout << "Enter your favorite dessert:\n";
//	cin >> dessert;//并没有停下来等待输入 
//	//cin说:“你输入到哪里我才能知道你到底输没输完一个字符串啊！”
//	// 我说:“我本来是想输入在字符串结尾输入空字符来让你知道我输完了的，奈何键盘有限，我无法操作”
//	// cin说:“那这样吧，你输完后输出一个空白（空格、制表符和换行符）来暗示我输完了，我读取就ok”
//	
//	//在输入的时候并不能输入空字符来决定字符串的结束，cin使用空白(空格，制表符，换行符)来确定字符串的结束位置
//
//	//这意味着cin在获取字符数组输入时只读取一个单词，读取一个单词放到字符串数组中并自动在数组结尾添加空字符
//	//这样我们就能理解为什么没有停下来了，cin遇到Alistair后的第一个空格，以为结束了。然而Dreeb还留在输入队列中
//	//第二个cin看到输入队列里有Dreeb，就拿走了。所以没有等待。 屏幕输出结果也能看出来。
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin >> name;//Alistair Dreeb
//	cout << "Enter your favorite dessert:\n";
//	cin >> dessert;
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << " .\n";
//	return 0;
//}

//#include <cstring>//使用string
//int main()
//{
//	using namespace std;
//	const int Size = 10;
//	char name1[Size];
//	char name2[Size] = "C++boy";
//	cout << "Hi, I am " << name2 << " what is your name\n";
//	cin >> name1;
//	cout << "Well, " << name1 << " You name has " << strlen(name1)//计算name1的长度。字符串太长了，另起一行
//		<< " letters and is stored\n" << "in an array of "
//		<< sizeof(name1) << " bytes.\n";//计算字符数组的大小，单位是字节。遇到; cout结束
//	//这句话的意思是，“很好，你的名字有3个字母并且存储在大小为10个字节大小的数组中。”
//	cout << "Your initial is " << name1[0] << " .\n";//我们看一看到is后面留空了， .前面留空了 中间有个值
//	//这是为了值不会和其它字母连在一起，所以我们就慢慢习惯C++的输出的留空方式
//	name2[3] = '\0'; 
//	cout << "Here are the first 3 characters of my name: ";
//	cout << name2 << endl;
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << "I had give my right arm to be" "a great violinist.\n";//拼接时不会在链接字符串之间添加空格
//	cout << "I had give my right ar"//第一个字符串的\0会被第二个字符串紧跟的字符给覆盖掉。
//		"m to be a great violinist";
//	return 0;
//}

//int main()
//{
//	char c = 'S';//字符常量S，'S'ASCII码值是83，这句相当于用83初始化c
//	char arr2[] = "S";//*字符串常量"S"实际上表示的是字符串所在的内存地址
//	//字符指针指向字符串常量时，字符串内容不能被改。-C
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	//字符串是存储在内存的 连续字节中 的一系列字符。
//	//C++处理字符串的两种方式，第一种是C-风格字符串，另一种是基于string类库的方式。
//	//*字符串提供了一种存储文本信息的便捷方式
//	cout<<"你好";//例子
//
//	//因为字符串是一系列连续字节的字符，所以可以用字符数组来表示--初始化字符数组
//	char arr[] = { 'w', 'c', 'l', 't' };//不是字符串，C-风格字符串必须有空字符'\0'结尾，ASCII码值为0，
//	char arr1[] = { 'w', 'c', 'l', 't','\0'};//这个才是字符串，但这样初始化很麻烦。
//	char arr2[] = "wclt";//"string"自带空字符，，这种字符串被称为字符串常量，也叫做字符串字面值
//	char arr3[4] = "wclt";//前面说过，初始化字符数组时，[]里大小定下来不要忘记""字符串常量还有一个隐藏的'\0'元素要占一个字节。
//	char arr4[8] = "wclt";//里面的内容是 'w', 'c', 'l', 't', '\0'(隐藏的)， '\0', '\0', '\0'后三个是编译器初始化的。
//	
//	//C++有很多处理字符串的函数，其中包括cout使用的那些函数，它们都是逐个处理字符串中的字符，知道到达空字符。
//	//当我们在显示arr时，由于没有空字符，会将数组外的解释位要处理的字符，我们不应该将不是字符串数组外的内容当做字符串处理。
//	return 0;
//}

//int main()
//{
//	//C++11新增的初始化规则
//	int arr[]{ 1,2,3,4,5 };//初始化数组的时候可以不用"="
//	int arr1[10]{};//初始化数组时，{}是没有任何初始值，编译器仍能帮你把所有值初始化为0
//	//禁止缩窄转换
//	int arr2[]{ 5,6,3.0 };//3.0是float类型，存到arr2中会向下转型是不允许的，也可以理解数组里的每个元素都得是int
//	char ch[]{'h', 'w', 2, 4561156};//4561156超出了char的表示范围。2虽然是int，但也在char的表示范围内，而且char属于整型家族。
//	//C++标准模板库STL提供了一种数组替代品--模板类（vector） --C++新增了模板类array
//	return 0;
//}

//C++数组初始化规则
//int main()
//{
//	//C
//	int ain[4];//创建数组，数组里的值是原先存放在内存单元中的随机值，和变量创建时没初始化一样
//	//其实数组里的每个元素都是一个整型变量，自然就一样了。
//	int ain1[4] = { 0 };//在创建数组的时候，可以给数组初始化。只要有初始化，如果还有元素剩余，编译器都会帮我们初始化为0
//
//	//C++
//	ain = { 1,2,3,4 };//error，这是不允许的，现在只能通过数组元素访问。
//	ain = ain1;//也不能将数组赋值给数组
//
//	//编译器计算元素个数好不好? 让编译器去做，帮我们计算元素个数，这并不是一个很好的做法
//	int arr[] = { 1,2,3,4,5,6 };//实际上我要为arr初始化七个元素，也就是我要七个元素空间，但遗漏了一个，这样arr只能有六个元素大小
//	int arr1[7] = {};//而这样就很轻松的像内存要来七个元素空间  后面会讲{}是初始化为0的意思
//	//而且还有就是我们并不能显而易见的看到数组元素个数，还需要自己去算
//
//	char arr2[6] = "abcdef";//在字符数组初始化成时候这样是比较安全的。如果我们忘记为'\0'考虑元素位置，就会出问题，这倒可以用arr3的方式
//	char arr3[] = "abcdef";
//	//所以得看情况来让计算机帮我们计算元素个数
//	return 0;
//}

//int main()
//{
//	const int ArraySize = 10;
//	int arr[ArraySize] = { 0 };//ArraySize是const修饰的符号常量，C语言是常变量，C语言不支持。
//	//用C方法来理解就是 #define ArraySize 10
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << "hello,world";
//	return 0; 
//}