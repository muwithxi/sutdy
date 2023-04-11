#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

//int main()
//{
//	using namespace std;
//	double wages[3] = {10000.0, 20000.0, 30000.0};
//	int stacks[3] = { 3, 2, 1 };
//	double* pd = wages;//wages是数组名也是首元素double类型10000.0的地址
//	int* ps = &stacks[0];//stacks[0]是首元素，然后&取地址，也就是首元素地址
//	cout << "pd = " << pd << ", *pd = " << *pd << endl;//打印wages首地址和首元素
//	pd = pd + 1;
//	cout << "pd = " << pd << ", *pd = " << *pd << endl;//加一后打印第二个元素的地址和第二个元素
//	cout << endl;//下面的同上，换成打印stacks数组的地址和元素
//	cout<<"ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//
//	cout << "stacks[0] = " << stacks[0] << ", stackd[1] = " << stacks[1] << endl;//数组表示法
//	cout << "*stacks = " << *stacks << ", *(stackd+1) = " << *(stacks + 1) << endl;//指针表示法
//	cout << sizeof(wages) << "  " << sizeof(stacks);//数组大小
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int i = 1;
//	int* pi = &i;
//	cout << i << endl << pi << endl;
//	i = i + 1;
//	pi = pi + 1;
//	cout << i << endl << pi;
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int* parr = new int[3];
//	parr[0] = 1;//将parr指针当数组名使用，访问数组元素。 int arr[3] = {1,2,3}; arr[0] = 1;
//	parr[1] = 2;//arr[1] = 2;
//	parr[2] = 3;//arr[2] = 3;
//	cout << "parr[1] is " << parr[1] << endl;//打印数组第二个元素
//	parr = parr + 1;//parr现在是第二个元素的地址 指针的加法运算--会讲
//	cout << "parr[0] is " << parr[0] << endl;//因为parr现在是第二个元素的地址了，所以打印第二个元素。
//	cout << "parr[1] is " << parr[1] << endl;//打印第三个元素的地址
//	parr = parr - 1;//使parr回到起始位置很重要
//	delete[]parr;//释放数组空间
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	char* pc = new char;
//
//	double* pd = new double[10];
//
//	int* pa = new int[1];//如果使用new为一个实体分配内存，也就是一个元素，然后new使用了[]
//	delete pa;//直接使用delete释放就可以了，不要用[],
//
//	delete pc;//和第八行是一个简单的创建和释放
//
//	delete[]pd;//创建动态数组和释放数组的格式对应
//	return 0;
//}