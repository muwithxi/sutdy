#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

////λ�ֶ�--Ϊ����ָ���ռ�λ��bit����
////�ֶε�����ӦΪ���ͻ�ö������ Ҫ��ð�� Ȼ������ֵ ָ��λ����
////����ʹ��û�����Ƶ��ַ������ṩ��� int : 4; ���ڴ��пճ�4��bitλ��ʹǰһ�����һ�����ڴ��ϸ�����
//struct torgle_register
//{
//	unsigned int Sn : 4;//ÿ����Ա������Ϊλ�ֶ�
//	int : 4;
//	bool goodIn : 1;//�������ͣ�������ʾ��ٵ��������͡�//�����и�������
//	bool goodTorgle : 1;
//};
//torgle_register tr{ 14, true, false};//������ͨ��һ����ʼ���ֶ�
////tr.Sn Ҳ����ʹ�ñ�׼���ʽṹ��Ա�ķ�ʽ����

//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
////�ṹ����
//int main()
//{
//	using namespace std;
//	//�ṹ��Ľṹ��Ա������һ�����飬�����Ԫ�ؿ����ǽṹ�塣
//	inflatable guests[2]//�ʹ��������������͵�����һ��������������Ԫ�صĽṹ����
//	{                  //"="����ʡ�ԣ������Ǻ󿴵���������˹��� guests{}����Ҳ����Ŷ
//		{"Bambi", 0.2, 10.5},//���Է���д
//		{"Godzilla", 1820, 561.22}
//	};
//	//guests[0]�ǵ�һ���ṹ�壬guests.name/volume/price ��������Ԫ�أ�Ԫ���ǽṹ����.���ʽṹ��Ա
//	cout << guests[0].price;
//	return 0;
//}

//�������ṹ���ʱ�򣬻��ڽ�β}����������perks���͵ı���,Ҳ���Գ�ʼ����
//struct perks                            
//{                                       
//	int key_number;                     
//	char car[12];                       
//}my_smith, ms_jones;
//// ������: }my_simth = {5, "hh"}; ����ʼ������봴���ֿ���Ȼ�����Եú���
//struct//����һ�������ƵĽṹ�壬ֻ��ͨ����������ʱ��˳�㴴����������Ϊû�����ơ�
//{
//	int age;
//	int weight;
//}people;//ʹ�������ƽṹ��һ��Ҫ�����ﴴ������Ȼ�������塣
//int main()
//{
//	using namespace std;
//	return 0;
//}

//�Խṹ��һЩ������C++ʹ�û��Զ�������;������������Ϳ������ơ�
//���԰ѽṹ�崫�θ�������������һ����������һ���ṹ�塣
//*����ʹ�ø�ֵ����������ṹ��ֵ����һ��ͬ���͵Ľṹ
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
//	//������0.1Ĭ����double���ͣ��ں������f��ʾ�Ǹ�����
//	inflatable choice{};
//	choice = bouquet;
//	cout << choice.name << " " << choice.value << " " << choice.price << endl;
//	//�ѽṹ��bouquet��ĳ�Աֵһ��������ͬ���ͱ�����Ӧ�ĳ�Ա�С�
//	//���ָ�ֵ������Ա��ֵ����ʹ��Ա������Ҳ�ܸ�ֵ��
//	return 0;
//}

//struct Stu//ʹ��string�൱�ṹ��Ա
//{
//	std::string a;//�ṹ������string���������ַ����� -- string���ǿ������ṹ�ĳ�Ա
//	//���԰�using namespace std�ŵ��ⲿ���ǵ�����ͷ�ļ�<string>
//	int age;
//	double height;
//};
//
//int main()
//{
//	using namespace std;
//	Stu s1 = { "����", 18, 173.5 };
//	return 0;
//}

//struct inflatable
//{
//	char name[10];
//	int age;
//	double height;
//};
////C++11�ṹ��ʼ����֪ʶ
//int main()
//{
//	inflatable desk = { "red wood", 10, 1.5 };//C++11���б��ʼ����ͨ�õ� ����ʡ��"=" ������{}����ȫ����ʼ��Ϊ0
//	inflatable pig{};//���ṹ��Աnameÿ���ֽڶ���ʼ��Ϊ0��age��heightҲ��Ϊ0
//	//����Ҳһ������������խת������խ�����ԭ���Ǹ�������ͣ�ת��С��װ���£���������:
//	//inflatable a = {"sddf", 5.5, 1.0};��������ڶ���5.5�ǲ��еģ�double����ת��int������խת����
//	return 0;
//}

//struct tec//�ⲿ���������Ը�����������ʹ�á�
//	//C++���ᳫʹ���ⲿ���������ᳫʹ���ⲿ�ṹ����
//	//���ⲿ�������Ƿ��ų��������� const int a = 10; a�Ƿ��ų�������
//{
//	char name[10];
//	int age;
//};
//tec t1;
//
//Stu student2;//error Stu����main�����������ṹ�����ͣ����治��ʹ��
////�ṹ��������λ��
//int main()
//{
//	using namespace std;
//	struct Stu//�ں��������ṹ�壬�����ں�����ʹ��,ֻ���������ýṹ��ĺ�����ʹ��
//	{
//		char name[10];
//		char learn_number[20];
//		int age;
//	};
//	Stu student1 ={"С��", "2243", 18};
//	tec t2;
//	return 0;
//}


//�ṹ����--�����ṹ������
//struct inflatable
//{   //�б�����{}��Ķ����� ����һ��һ���ı���char name[20]����һ�Ҳ��һ���������
//	//ÿ���б����һ��������䣬ÿһ�����Ϊ�ṹ��Ա��
//	char name[20];//ѧ�������� 
//	char sex[5];//ѧ�����Ա�
//	int age;//ѧ��������
//};
//�ؼ���struct��������Щ���붨����һ���ṹ�����ͣ���ʶ��inflatable���������ݸ�ʽ������
//�����͵����ƽ�inflatable���������ǾͿ�����char��int��������һ������inflatable����������--inflatabel hat;
//hat ����һ�����������C���Դ����ṹ�岻һ����
//*C++����ʡ��struct����C++�У��ṹ��ǣ�inflatable�����÷��ͻ�����������char����ͬ
//ǿ�����ǣ��ṹ����������һ�������ͣ���C++��ʡ��struct�ǲ�������


//�ṹ��飬��һ�����ݸ�ʽ����������Ϣ����һ����Ԫ������������;��ǽṹ���͡�
//struct inflatable
//{
//	char name[20];//ѧ�������� 
//	char sex[5];//ѧ�����Ա�
//	int age;//ѧ��������
//};
//int main()
//{
//	using namespace std;
//	inflatable A =
//	{
//		"����",
//		"��",
//		20
//	};//Ҳ���Է���һ�г�ʼ��
//	cout << "what is your name?" << endl;//.����Ա��������������ʽṹ���Ա��
//	cout << A.name;
//	//����:�������Ա�����Ǵӷ��ʽṹ��Ա�����ķ�ʽ���������ġ�
//	cout << "How old are you\n";
//	cout << A.age;
//	return 0;
//}