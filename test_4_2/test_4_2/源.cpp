#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>//ͷ�ļ�����������
//���ļ��Ƕ������ĵط�


//int main()
//{
//	using namespace std;
//	int i;
//	float(i);//C++�����ǿ������ת������������ģʽ
//	static_cast<double>(i);//���ϸ��ǿ������ת��
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);//cout��ӡ��ʱ����С������0ʡ�Ե�����������
//	//��ֹ��cout�ѽϴ��ֵת��E��ʾ������ʹ������ʾ��С�������λ������������ͨ������iostream���ṩ�ĳ�����
//	//�����ڸı���cout������
//	float f = 0;
//	cin >> f;
//	cout << f;
//	return 0;
//} 

//int main()
//{
//	using namespace std;
//	//C++
//	int wrens(432);//432  �����ں������õ� Add() Ҳ��ͬ�ں���������λ�úͽṹ ���������Ͷ�����ֵ λ�ò��ٺ�������
//	//C��C++
//	int i = 101;//101
//	int a;//����ֵ C++�����ǣ��ڴ���a֮ǰ��Ӧ�ڴ浥Ԫ���ֵ
//	//C++11
//	int emus{};//0
//	int emu = {};//0
//	int b = { 20 };//20
//	int c{ 30 };//30
//	return 0;
//}

//#include <cmath>
//*���� C++�������OOP�� �����������ͣ��������������԰�����Щ������Ϣ����ִ��ʲô����
//int main()
//{
//	using namespace std;
//	double i = 6.25;  //����֮�ڱ�������ʾʲô���ݣ�����ʲô���� //��֮�ڶ��󣬱�ʾʲô������Ϣ��ִ��ʲô������
//	double a = sqrt(i);
//	cout << a << endl;
//	return 0;
//}


//ʹ��cout����ƴ��
//int main()
//{
//	using namespace std;
//	//��һ�����ܳ�ʱ��д��һ�к�Ӱ��������C++��д���ɵĹ��򣬱�Ǽ�Ŀո�ͻ��з��ǿ����໥�滻�ģ�C��C++������俴;������һ��һ��
//	cout << "hello,"
//		<< "world";//һ����䣬���е��ַ�����������˫���Ŷ�Ҫ�ӣ���Ҫֻ����ǰ����������С�
//	return 0;
//}


//int main()
//{
//	using namespace std;
//	int carrots;
//	cout << "How many carrots do you have?" << endl;
//	cin >> carrots;//cin>>����  cinҲ��һ�����ܶ��������԰�����������ַ�ת���������������ܹ����յ����ָ�������
//	cout << "Here are two more.";
//	carrots = carrots + 2;
//	cout << "Now you have " << carrots << " carrots." << endl;
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	int count = 25;
//	cout << count;//cout������͵ľ����ǰ�count��ֵ���������ת���ַ�����ʽ���ٴ�ӡ������
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
//	a = b = c = 10;//C��C++������������ֵ
//	return 0;
//}

//int main()
//{
//
//	std::cout << "��ã���ӭ����C++������";//<<��������أ�<<������ʹ�õ��࣬�ض���<<�ĺ��塣
//	std::cout << std::endl;//���Ʒ�endl 
//	//����һ���������ʹ�ã����ַ������û��з����������ַ����ÿ��Ʒ�
//	std::cout << "hello,world" << std::endl;
//	std::cout << "hello,world\n";
//	return 0;
//}

//C����ͷ�ļ�תC++����֪ʶ
//����ʽC����ͷ�ļ����ֻ�������.h��չ����C++��Ȼ����ʹ��
//C++ͷ�ļ�û����չ��
//ת����C++����Cͷ�ļ�ȥ������չ��.h ����ǰ�����c��ʾ����C��

//*C++��ʽ��� iostream.h��cout
//C++��ʽ��� iostream��std::cout  �� using std::cout��cout �� using namespace std��cout
//���ƿռ�std  ���ƿռ�::����

//#include <iostream>

//int main()//����ͷ //��C������,�ã������ű��������ֳ�Ĭ����C++�����루void����Ч ��main�����������ϵͳ�Ľӿ�
//{
//	using namespace std;//ʹ�����ƿռ�  using namespace �Ǳ���ָ��
//	cout << "hello,world";//printf("hello,world");  cout������ʾ��Ϣ
//	cout << endl;//printf("\n");
//	cout << "welcom to C++!" << endl;
//	return 0;//�����main�����û������������䣬Ĭ����return 0��β��
//}