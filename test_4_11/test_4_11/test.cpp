#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

//int main()
//{
//	using namespace std;
//	double wages[3] = {10000.0, 20000.0, 30000.0};
//	int stacks[3] = { 3, 2, 1 };
//	double* pd = wages;//wages��������Ҳ����Ԫ��double����10000.0�ĵ�ַ
//	int* ps = &stacks[0];//stacks[0]����Ԫ�أ�Ȼ��&ȡ��ַ��Ҳ������Ԫ�ص�ַ
//	cout << "pd = " << pd << ", *pd = " << *pd << endl;//��ӡwages�׵�ַ����Ԫ��
//	pd = pd + 1;
//	cout << "pd = " << pd << ", *pd = " << *pd << endl;//��һ���ӡ�ڶ���Ԫ�صĵ�ַ�͵ڶ���Ԫ��
//	cout << endl;//�����ͬ�ϣ����ɴ�ӡstacks����ĵ�ַ��Ԫ��
//	cout<<"ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//
//	cout << "stacks[0] = " << stacks[0] << ", stackd[1] = " << stacks[1] << endl;//�����ʾ��
//	cout << "*stacks = " << *stacks << ", *(stackd+1) = " << *(stacks + 1) << endl;//ָ���ʾ��
//	cout << sizeof(wages) << "  " << sizeof(stacks);//�����С
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
//	parr[0] = 1;//��parrָ�뵱������ʹ�ã���������Ԫ�ء� int arr[3] = {1,2,3}; arr[0] = 1;
//	parr[1] = 2;//arr[1] = 2;
//	parr[2] = 3;//arr[2] = 3;
//	cout << "parr[1] is " << parr[1] << endl;//��ӡ����ڶ���Ԫ��
//	parr = parr + 1;//parr�����ǵڶ���Ԫ�صĵ�ַ ָ��ļӷ�����--�ὲ
//	cout << "parr[0] is " << parr[0] << endl;//��Ϊparr�����ǵڶ���Ԫ�صĵ�ַ�ˣ����Դ�ӡ�ڶ���Ԫ�ء�
//	cout << "parr[1] is " << parr[1] << endl;//��ӡ������Ԫ�صĵ�ַ
//	parr = parr - 1;//ʹparr�ص���ʼλ�ú���Ҫ
//	delete[]parr;//�ͷ�����ռ�
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	char* pc = new char;
//
//	double* pd = new double[10];
//
//	int* pa = new int[1];//���ʹ��newΪһ��ʵ������ڴ棬Ҳ����һ��Ԫ�أ�Ȼ��newʹ����[]
//	delete pa;//ֱ��ʹ��delete�ͷžͿ����ˣ���Ҫ��[],
//
//	delete pc;//�͵ڰ�����һ���򵥵Ĵ������ͷ�
//
//	delete[]pd;//������̬������ͷ�����ĸ�ʽ��Ӧ
//	return 0;
//}