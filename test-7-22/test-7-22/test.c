#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	scanf("%d%d", &a,&b);
//	sum = a + b;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	const int num = 4;//const修饰常变量
//	printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	const int n = 10;
//	int a[n] = 0;
//	return 0;
//}
//#define max 120//define定义的标识符常量
//int main()
//{
//	int a[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}
//enum ses
//{
//	male,
//	fmale,
//	secret
//};// male,fmale,secret--枚举常量
//int main()
//{
//	enum ses s = male;
//	printf("%d\n", male);//0
//	printf("%d\n", fmale);//1
//	printf("%d\n", secret);//2
//	return 0;
//}
enum Color
{
	red,
	yellow,
	blue
};
int main()
{
	enum Color color = red;
	printf("%d\n", red);
	printf("%d\n", yellow);
	printf("%d\n",blue);
	return 0;
}