#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

//int main()
//{
//	using namespace std;
//	int age = 0;
//	cout << "How old are you?\n";
//	cin >> age;//����������ʱ�� ���з������˶�����
//	cout << "what is your phone number\n";
//	char ch[12];
//	cin.getline(ch, 12);//�����˻��з��󣬼���������β����ȡ�����滻�ɿ��ַ�������ch����
//	cout << "��" << ch << "��?\n";//ch�ǿ��ַ�������ʲôҲ�����
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
//	cin.getline(name, ArSize);//����ȡ19���ַ�����Ϊ��Ҫ��һ���ַ��ǻ��з�
//	//getline���������з�(�س�)��β���������滻�з���Ҳ���ǻ�ѻ��з�Ҳ��ȡ�����ڴ��ַ�����ʱ�򣬰ѻ��з������˿��ַ�
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);//
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	return 0;
//}

//cin.getline()��ȡһ���ַ������� ���������� ��һ��Ŀ�����飬�ڶ�����Ҫ��ȡ���ַ���
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.getline(name, ArSize);//����ȡ19���ַ�����Ϊ��Ҫ��һ���ַ��ǻ��з�
//	//getline���������з�(�س�)��β���������滻�з���Ҳ���ǻ�ѻ��з�Ҳ��ȡ�����ڴ��ַ�����ʱ�򣬰ѻ��з������˿��ַ�
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
//	cin >> dessert;//��û��ͣ�����ȴ����� 
//	//cin˵:�������뵽�����Ҳ���֪���㵽����û����һ���ַ���������
//	// ��˵:���ұ��������������ַ�����β������ַ�������֪���������˵ģ��κμ������ޣ����޷�������
//	// cin˵:���������ɣ�����������һ���հף��ո��Ʊ���ͻ��з�������ʾ�������ˣ��Ҷ�ȡ��ok��
//	
//	//�������ʱ�򲢲���������ַ��������ַ����Ľ�����cinʹ�ÿհ�(�ո��Ʊ�������з�)��ȷ���ַ����Ľ���λ��
//
//	//����ζ��cin�ڻ�ȡ�ַ���������ʱֻ��ȡһ�����ʣ���ȡһ�����ʷŵ��ַ��������в��Զ��������β��ӿ��ַ�
//	//�������Ǿ������Ϊʲôû��ͣ�����ˣ�cin����Alistair��ĵ�һ���ո���Ϊ�����ˡ�Ȼ��Dreeb���������������
//	//�ڶ���cin���������������Dreeb���������ˡ�����û�еȴ��� ��Ļ������Ҳ�ܿ�������
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

//#include <cstring>//ʹ��string
//int main()
//{
//	using namespace std;
//	const int Size = 10;
//	char name1[Size];
//	char name2[Size] = "C++boy";
//	cout << "Hi, I am " << name2 << " what is your name\n";
//	cin >> name1;
//	cout << "Well, " << name1 << " You name has " << strlen(name1)//����name1�ĳ��ȡ��ַ���̫���ˣ�����һ��
//		<< " letters and is stored\n" << "in an array of "
//		<< sizeof(name1) << " bytes.\n";//�����ַ�����Ĵ�С����λ���ֽڡ�����; cout����
//	//��仰����˼�ǣ����ܺã����������3����ĸ���Ҵ洢�ڴ�СΪ10���ֽڴ�С�������С���
//	cout << "Your initial is " << name1[0] << " .\n";//���ǿ�һ����is���������ˣ� .ǰ�������� �м��и�ֵ
//	//����Ϊ��ֵ�����������ĸ����һ���������Ǿ�����ϰ��C++����������շ�ʽ
//	name2[3] = '\0'; 
//	cout << "Here are the first 3 characters of my name: ";
//	cout << name2 << endl;
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << "I had give my right arm to be" "a great violinist.\n";//ƴ��ʱ�����������ַ���֮����ӿո�
//	cout << "I had give my right ar"//��һ���ַ�����\0�ᱻ�ڶ����ַ����������ַ������ǵ���
//		"m to be a great violinist";
//	return 0;
//}

//int main()
//{
//	char c = 'S';//�ַ�����S��'S'ASCII��ֵ��83������൱����83��ʼ��c
//	char arr2[] = "S";//*�ַ�������"S"ʵ���ϱ�ʾ�����ַ������ڵ��ڴ��ַ
//	//�ַ�ָ��ָ���ַ�������ʱ���ַ������ݲ��ܱ��ġ�-C
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	//�ַ����Ǵ洢���ڴ�� �����ֽ��� ��һϵ���ַ���
//	//C++�����ַ��������ַ�ʽ����һ����C-����ַ�������һ���ǻ���string���ķ�ʽ��
//	//*�ַ����ṩ��һ�ִ洢�ı���Ϣ�ı�ݷ�ʽ
//	cout<<"���";//����
//
//	//��Ϊ�ַ�����һϵ�������ֽڵ��ַ������Կ������ַ���������ʾ--��ʼ���ַ�����
//	char arr[] = { 'w', 'c', 'l', 't' };//�����ַ�����C-����ַ��������п��ַ�'\0'��β��ASCII��ֵΪ0��
//	char arr1[] = { 'w', 'c', 'l', 't','\0'};//��������ַ�������������ʼ�����鷳��
//	char arr2[] = "wclt";//"string"�Դ����ַ����������ַ�������Ϊ�ַ���������Ҳ�����ַ�������ֵ
//	char arr3[4] = "wclt";//ǰ��˵������ʼ���ַ�����ʱ��[]���С��������Ҫ����""�ַ�����������һ�����ص�'\0'Ԫ��Ҫռһ���ֽڡ�
//	char arr4[8] = "wclt";//����������� 'w', 'c', 'l', 't', '\0'(���ص�)�� '\0', '\0', '\0'�������Ǳ�������ʼ���ġ�
//	
//	//C++�кܶദ���ַ����ĺ��������а���coutʹ�õ���Щ���������Ƕ�����������ַ����е��ַ���֪��������ַ���
//	//����������ʾarrʱ������û�п��ַ����Ὣ������Ľ���λҪ������ַ������ǲ�Ӧ�ý������ַ�������������ݵ����ַ�������
//	return 0;
//}

//int main()
//{
//	//C++11�����ĳ�ʼ������
//	int arr[]{ 1,2,3,4,5 };//��ʼ�������ʱ����Բ���"="
//	int arr1[10]{};//��ʼ������ʱ��{}��û���κγ�ʼֵ�����������ܰ��������ֵ��ʼ��Ϊ0
//	//��ֹ��խת��
//	int arr2[]{ 5,6,3.0 };//3.0��float���ͣ��浽arr2�л�����ת���ǲ�����ģ�Ҳ��������������ÿ��Ԫ�ض�����int
//	char ch[]{'h', 'w', 2, 4561156};//4561156������char�ı�ʾ��Χ��2��Ȼ��int����Ҳ��char�ı�ʾ��Χ�ڣ�����char�������ͼ��塣
//	//C++��׼ģ���STL�ṩ��һ���������Ʒ--ģ���ࣨvector�� --C++������ģ����array
//	return 0;
//}

//C++�����ʼ������
//int main()
//{
//	//C
//	int ain[4];//�������飬�������ֵ��ԭ�ȴ�����ڴ浥Ԫ�е����ֵ���ͱ�������ʱû��ʼ��һ��
//	//��ʵ�������ÿ��Ԫ�ض���һ�����ͱ�������Ȼ��һ���ˡ�
//	int ain1[4] = { 0 };//�ڴ��������ʱ�򣬿��Ը������ʼ����ֻҪ�г�ʼ�����������Ԫ��ʣ�࣬��������������ǳ�ʼ��Ϊ0
//
//	//C++
//	ain = { 1,2,3,4 };//error�����ǲ�����ģ�����ֻ��ͨ������Ԫ�ط��ʡ�
//	ain = ain1;//Ҳ���ܽ����鸳ֵ������
//
//	//����������Ԫ�ظ����ò���? �ñ�����ȥ���������Ǽ���Ԫ�ظ������Ⲣ����һ���ܺõ�����
//	int arr[] = { 1,2,3,4,5,6 };//ʵ������ҪΪarr��ʼ���߸�Ԫ�أ�Ҳ������Ҫ�߸�Ԫ�ؿռ䣬����©��һ��������arrֻ��������Ԫ�ش�С
//	int arr1[7] = {};//�������ͺ����ɵ����ڴ�Ҫ���߸�Ԫ�ؿռ�  ����ὲ{}�ǳ�ʼ��Ϊ0����˼
//	//���һ��о������ǲ������Զ��׼��Ŀ�������Ԫ�ظ���������Ҫ�Լ�ȥ��
//
//	char arr2[6] = "abcdef";//���ַ������ʼ����ʱ�������ǱȽϰ�ȫ�ġ������������Ϊ'\0'����Ԫ��λ�ã��ͻ�����⣬�⵹������arr3�ķ�ʽ
//	char arr3[] = "abcdef";
//	//���Եÿ�������ü���������Ǽ���Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	const int ArraySize = 10;
//	int arr[ArraySize] = { 0 };//ArraySize��const���εķ��ų�����C�����ǳ�������C���Բ�֧�֡�
//	//��C������������ #define ArraySize 10
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << "hello,world";
//	return 0; 
//}