#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char password[10] = { 0 };
//	int ch = 0;
//	printf("请输入密码:");
//	scanf("%s", password);
//	printf("确认Y/否认N:");
//	ch = getchar();//没有输入环节，直接跳过，因为scanf里遗留的'\n'
//	if (ch == 'Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
//	putchar(ch);//ch里放'\n'字符，显示打印出来的时候，和printf("\n");一样的，有一行
//}

//int main()
//{
//	int ch;//这里用整型int创建ch，但也可以放字符，因为字符也是整型(ASCII)存到内存的
//	ch = getchar();//ctrl+Z 会让getchar接收到一个EOF，EOF的值是-1
//	printf("%d\n", ch);//整型打印ch
//	printf("%c\n", ch);//字符型打印ch
//	return 0;
//}

//int main()
//{
//	char ch;
//	//getchar库函数的原型   int getchar(void) 我们输入一个字符，返回这个字符的ASCII码值
//	//                                 无参数
//	ch = getchar();//输入一个字符给到变量ch
//	putchar(ch);//int putchar(int character) 返回的是那个ASCII码对应的字符并打印在窗口上 
//	//                        接收一个字符(字符也是整型)
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
	//	putchar(ch);//而这里会跳两个空格，实际上是因为getchar读取两次了，ch第一次的值是你输入的
	//	//第二次很快，你反应不过来就是ch是'\0'，并通过显示，换行了。
	//}
	return 0;
}

//int main()
//{
//	//putchar打印空格字符，其实你是看不到的，在窗口上没什么区别。
//
//	char ch = '\n';
//	putchar(ch);//打印出来有换行的效果
//	return 0;
//}

//int main()
//{
//	char ch = ' ';
//	putchar(ch);//putchar打印空格字符，其实你是看不到的，在窗口上没什么区别。
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
//	while ((ch = getchar()) != EOF)//为什么在打印的时候会是如下这样的呢
//                                   // A
//                                   // A  
//	{                              // 光标等候   是因为期间还有一次getchar读取了换行符，putchar显示了
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//  "%[^\n]"是让scanf一直读到\n才停下来，scanf遇到空白(空格，换行，制表符)就会停止读取
//  fflush(stdin);//fflush是清空缓冲区的库函数，stdin是输入缓冲区，在高级编译器里功能被取消掉了。
//	char ch[10] = { 0 };
//	char c;
//	scanf("%s", ch);
//	//123456 abc\n 空白仍在，给getchar读的
//	c = getchar();//空格字符ASCII码值是32
//	printf("%d", c);
//	return 0;
//}

//实现浮点数四舍五入成整数
//int main()
//{
//
//    float n;
//    scanf("%f", &n);
//    if (n > 0)
//        //整型不打印小数，不会自动四舍五入
//        //当n大于0且加上0.5，如果n的小数是0.5，加上0.5就进位
//        //算是四舍五入
//        printf("%d", (int)(n + 0.5));
//    else
//        //长这么大，负数四舍五入第一次听，哈哈，-2.5四舍五入是-3
//        //负数是减去0.5
//        printf("%d", (int)(n - 0.5));
//    return 0;
//}