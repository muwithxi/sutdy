#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char password[10] = { 0 };
//	int ch = 0;
//	printf("����������:");
//	scanf("%s", password);
//	printf("ȷ��Y/����N:");
//	ch = getchar();//û�����뻷�ڣ�ֱ����������Ϊscanf��������'\n'
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//	putchar(ch);//ch���'\n'�ַ�����ʾ��ӡ������ʱ�򣬺�printf("\n");һ���ģ���һ��
//}

//int main()
//{
//	int ch;//����������int����ch����Ҳ���Է��ַ�����Ϊ�ַ�Ҳ������(ASCII)�浽�ڴ��
//	ch = getchar();//ctrl+Z ����getchar���յ�һ��EOF��EOF��ֵ��-1
//	printf("%d\n", ch);//���ʹ�ӡch
//	printf("%c\n", ch);//�ַ��ʹ�ӡch
//	return 0;
//}

//int main()
//{
//	char ch;
//	//getchar�⺯����ԭ��   int getchar(void) ��������һ���ַ�����������ַ���ASCII��ֵ
//	//                                 �޲���
//	ch = getchar();//����һ���ַ���������ch
//	putchar(ch);//int putchar(int character) ���ص����Ǹ�ASCII���Ӧ���ַ�����ӡ�ڴ����� 
//	//                        ����һ���ַ�(�ַ�Ҳ������)
//	return 0;
//}

int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);//��������������ո�ʵ��������Ϊgetchar��ȡ�����ˣ�ch��һ�ε�ֵ���������
	//	//�ڶ��κܿ죬�㷴Ӧ����������ch��'\0'����ͨ����ʾ�������ˡ�
	//}
	return 0;
}

//int main()
//{
//	//putchar��ӡ�ո��ַ�����ʵ���ǿ������ģ��ڴ�����ûʲô����
//
//	char ch = '\n';
//	putchar(ch);//��ӡ�����л��е�Ч��
//	return 0;
//}

//int main()
//{
//	char ch = ' ';
//	putchar(ch);//putchar��ӡ�ո��ַ�����ʵ���ǿ������ģ��ڴ�����ûʲô����
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char ch = '0';
//	while ((ch = getchar()) != EOF)//Ϊʲô�ڴ�ӡ��ʱ�����������������
//                                   // A
//                                   // A  
//	{                              // ���Ⱥ�   ����Ϊ�ڼ仹��һ��getchar��ȡ�˻��з���putchar��ʾ��
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//  "%[^\n]"����scanfһֱ����\n��ͣ������scanf�����հ�(�ո񣬻��У��Ʊ��)�ͻ�ֹͣ��ȡ
//  fflush(stdin);//fflush����ջ������Ŀ⺯����stdin�����뻺�������ڸ߼��������﹦�ܱ�ȡ�����ˡ�
//	char ch[10] = { 0 };
//	char c;
//	scanf("%s", ch);
//	//123456 abc\n �հ����ڣ���getchar����
//	c = getchar();//�ո��ַ�ASCII��ֵ��32
//	printf("%d", c);
//	return 0;
//}

//ʵ�ָ������������������
//int main()
//{
//
//    float n;
//    scanf("%f", &n);
//    if (n > 0)
//        //���Ͳ���ӡС���������Զ���������
//        //��n����0�Ҽ���0.5�����n��С����0.5������0.5�ͽ�λ
//        //������������
//        printf("%d", (int)(n + 0.5));
//    else
//        //����ô�󣬸������������һ������������-2.5����������-3
//        //�����Ǽ�ȥ0.5
//        printf("%d", (int)(n - 0.5));
//    return 0;
//}