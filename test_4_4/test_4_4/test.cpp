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

//��string�����֮ǰ��C-����ַ���Ҫʵ��������string��Ĳ��������ʵ�֡�
//��ʵ����strcoy��strcat���ַ���������ʵ�ֵģ��������Ƚ�һ�£�string��Ĳ������ַ������ú����Ĳ���
//��������֪��string�ķ����� Ҫ����ͷ�ļ�<cstring>��ʹ���ַ�������
//int main()
//{
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	str1 = str2;
//	strcpy(charr1, charr2);//string�����ֵ�Ϳ�����ͬ
//
//	str1 += " paste";
//	strcat(charr1, " juice");//string�����׷�Ӻ�strcatһ��
//
//	int len1 = str1.size();
//	int len2 = strlen(charr1);
//
//	cout << "The string lenth of str1 is " << len1 << " .\n";
//	cout << "The string lenth of charr1 is " << len2 << " .\n";
//	cout << str1;
//	return 0;
//}

//string��ĸ�ֵ��ƴ�ӣ�׷��
//int main()
//{
//	using namespace std;
//	string str1 = "SJR";
//	string str2, str3;
//	cout << "���ܰ�һ���ַ�����ֵ����һ���ַ�����?\n";
//	str2 = str1;
//	cout << "str1 = " << str1 << " str2 = " << str2 << endl;
//	cout << "��������һ���ַ���\"��˧\"��str3��?" << endl;
//	cin >> str3;
//	cout << "str3 = " << str3 << endl;
//	cout << "���str2��str3ƴ��һ��\n";
//	str1 = str2 + str3;
//	cout << "str1 = " << str1 << endl;
//	cout << "����str2��Ӹ�\"Ҫ�ú�ѧϰ\"" << endl;
//	string str4 = "Ҫ�ú�ѧϰ";
//	str2 += str4;
//	cout << "str2 = " << str2 << endl;
//	cout << "��������Ե�!\n";
//	return 0;
//}

//string�����ĸ�ֵ��ƴ�ӡ�����
//int main()
//{
//	using namespace std;
//	//��ֵ
//	string str1 = "C++";
//	string str2;
//	str2 = str1;//���԰�ֵ����str2��string�ࡰ������
//	cout << str2 << endl;
//	//�ַ����ĺϲ�
//	string str3 = " I love you";
//	str1 = str2 + str3;//��str2��str3��+������ϲ���������str1,
//	cout << str1 << endl;
//	//׷��
//	str2 += str3;//str2+str3�ŵ�str2�У��൱����str2������˸�str3
//	cout << str2 << endl;
//	return 0;
//}

//string��ʼ��
//int main()
//{
//	using namespace std;
//	string str;//������ó����ܹ��Զ�����string�Ĵ�С��str����������һ������Ϊ0��string����û�н��г�ʼ����
//	string str1 = "hello";//������Ҫ�洢�ַ�����ʱ�򣬿���ͨ��һ���򵥵��������������һ������
//	cout << str.size() << endl;
//	cin >> str;//�����ַ�����str��������Զ�����str�ĳ���
//	string str2 { "the bread Bowl" };//C++11Ҳ�����б��ʼ������string�����
//	string str3{};
//	cout << str.size() << endl;
//	cout << str3.size() << endl;
//	return 0;
//}
//��������ȣ�string�ĳ������������������Զ�����������ȫ��
//���Խ��ַ����鿴��һ�����ڴ��һ���ַ�����char�洢��Ԫ��string�������һ������ַ�����ʵ�塣

//�Ƚ�string����ַ�����
//int main()
//{
//	using namespace std;
//	char arr[20];
//	char arr1[20] = "jaguar";
//	string str;//û�г�ʼ�����ǳ���Ϊ0�������
//	string str1 = "panther";//����ַ�����ʼ�����ַ�����һ����ʼ����string�����--C-����ַ���
//
//	cout << "Enter a kind of feline: ";
//	cin >> arr;
//	cout << "Enter another kind of feline: ";
//	cin >> str;//��������ַ�����һ�������string�����-C����ַ���
//	cout << "Here are some felines:\n";
//	cout << arr << " " << arr1 << " "
//		<< str << " " << str1 << endl;//��cout����ʾstring�����
//	cout << "The third letter in " << arr1 << " is "
//		<< arr1[2] << endl;
//	cout << "The third letter in " << str1 << " is "
//		<< str1[2] << endl;//����ͨ���±��������������ĳ���ַ���������һ��
//	return 0;
//}
//string������ַ���������������ǣ�string�����Ǽ򵥱��������������顣

//�����ַ�������ֵ���ַ�����
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

//�ַ���--�µ������µĸ���
//int main()
//{
//	//ͨ���ַ������÷�������ת�����У�ͨ���ַ���������\u �� \U��ͷ��
//	//\u�����ǰ�λʮ�����ƣ�\U������ʮ��λʮ�����ơ�
//	//��Щλ��ʾ�����ַ���ISO 10646��㣬Ϊ�������ַ��ṩ����ֵ����
//	return 0;
//}

//int main()
//{
//	//wchar_t���ַ�����
//	using namespace std;
//	wchar_t bob = L'P';//������Ҫ������ַ��������޷���һ��8λ���ֽڱ�ʾ����������ܶ���ţ�128�������á�
//	//C++���ִ���ʽ
//	//��һ��ͨ��������ʱ��char����Ϊ16λ�Ĵ�С��32λ��
//	//�ڶ�����ʵ��һ�ֿ���ͬʱ֧��һ��С�ͻ����ַ����Ϻ�һ���ϴ����չ�ַ�����
//	//cin��cout���������������char������˲�������������wchar_t���ͣ�iostream�ļ��ṩ�����ƵĹ���wcin��wcout
//	//������wchar_t�������⣬����ͨ������ǰ׺L��ָʾ���ַ������Ϳ��ַ���
//	//C++11���������� char16_t,char32_t  char16_t��char32_t�����޷��ŵ�  ǰ����16λ��ʹ��u�����ַ����������ַ�����ǰ׺
//	//������32λ��ʹ��U�����ַ����������ַ�����ǰ׺��
//	wcout << L"talk" << endl;
//	return 0;
//}

//ԭʼ�ַ���raw
//int main()
//{
//	using namespace std;
//	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;//C++11�ṩ��һ��ԭʼ�ַ������ͣ�R"(string)";"(��)"�Ƕ����
//  //����"+(��)+��֮��������������Ļ����ַ������ո��������ţ�б�ܺͿ����ַ�(�Ʊ���ͻ��з�)���⡣
//	cout << "Jim \"King\" Tutt uses \"\\n\" instead of endl." << endl;//ԭʼ�ַ�������ڲ���ԭʼ�ַ�����Ҫ����������⺬����ַ�������
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << R"+*("(Who)", she said:)+*" << endl;
//	//ĩβ����*+��������DW�Ǹ���ǣ���ô�ӵ�˳�����ô��β
//	return 0;
//}