#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//BC32 ���ܻ������
//int main()
//{
//    long age = 0;
//    scanf("%ld", &age);
//    printf("%ld\n", age * 31560000);
//    return 0;
//}

//BC31 2��n�η�����
//int main()
//{
//    int i = 1;
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", i << n);
//    return 0;
//}

//BC30 ʱ��ת��
//int main()
//{
//    int seconds = 0;
//    int h, m, s;
//    scanf("%d", &seconds);
//    h = seconds / 3600;
//    m = (seconds - h * 3600) / 60;
//    s = seconds % 60;
//    printf("%d %d %d", h, m, s);
//    return 0;
//}

//BC29 ��ѧ��
//int main()
//{
//    int X, N;
//    scanf("%d%d", &X, &N);
//    //��X+N�Ľ����14,14%7��0��ʵ�����������գ�����Ҫ�ֳ���
//    if ((X + N) % 7 == 0)
//    {
//        printf("%d\n", 7);
//    }
//    else
//    {
//        printf("%d\n", (X + N) % 7);
//    }
//    return 0;
//}

//BC28 ������ʮλ
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    a /= 10;
//    a %= 10;
//    printf("%d\n", a);
//    return 0;
//}

//-------2.BC28 ������ʮλ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", (a % 100) / 10);
//	return 0;
//}

//BC27 �����ĸ�λ
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    a %= 10;
//    printf("%d\n", a);
//    return 0;
//}

//BC26 ����������
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}

//BC25 ţţ���ӰƱ
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", n * 100);
//    return 0;
//}

//BC24 �������ĸ�λ����
//int main()
//{
//    float f = 0.0f;
//    scanf("%f", &f);
//    //С�����ܽ���ȡģ����
//    printf("%d", ((int)f) % 10);
//    return 0;
//}
//BC24 �������ĸ�λ����---.2
//int main()
//{
//	int f = 0;
//	scanf("%d", &f);
//	printf("%d\n", f % 10);
//	return 0;
//}

//BC23 ţţѧȡ��
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a % b);
//    return 0;
//}

//BC22 ţţѧ����
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a / b);
//    return 0;
//}

//BC21 ţţѧ�ӷ�
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//BC20 ����A+B
//int main()
//{
//    int H = 0;
//    int O = 0;
//    scanf("%x %o", &H, &O);//����0x12 05 
//    printf("%d\n", H + O);//���23
//    return 0;
//}

//BC19 ţţ�Ķ���
//int main()
//{
//    int a, b, c;
//    //ͬһ��Ϊ������������
//    scanf("%d %d %d", &a, &b, &c);
//    //���Ϊ8����'-'�Ǳ�ʾ�����
//    printf("%-8d%-8d%-8d\n", a, b, c);
//    printf("%8d%8d%8d\n", a, b, c);
//    return 0;
//}

//BC18 ţţ�Ŀո�ָ�
//int main()
//{
//    char ch = 0;
//    int a = 0;
//    float f = 0.0f;
//    scanf("%c", &ch);
//    scanf("%d", &a);
//    scanf("%f", &f);
//    printf("%c %d %f", ch, a, f);
//    return 0;
//}
	
//BC17 ���̶�����
//int main()
//{
//	//�˽�����%o ʮ��������%x(��ĸСд) %X(��ĸ��д) ǰ����#
//	printf("%#o %#X\n", 1234, 1234);
//	printf("%#o %#x\n", 1234, 1234);
//	return 0;
//}