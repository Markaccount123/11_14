#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//选择体部分
//我发现我对于do-while部分不太熟练，不是很清楚的能解析代码
//int main()
//{
//	int a = 0, c = 0;
//	do
//	{
//		--c;
//		a = a - 1;
//	} while (a > 0);
//	return 0;
//}

//求最小公倍数
//题目描述：正整数A和正整数B的最小公倍数是指能被A和B整除的最小的正整数值
//输入两个正整数A和B
//输出A和B的最小公倍数

//int max_div_count(int m, int n)
//{
//	int r = 0;
//	while (r = m% n)
//	{
//		m = n;
//		n = r;
//	}
//	return n;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//最大公约数 --- 辗转相除法又忘球掉了（两个数据中公共约数的最大者）
//
//
//	//最小公倍数 ---- a*b / 最大公约数
//	printf("%d\n", a*b / max_div_count(a, b));
//	return 0;
//}


// I like beijing.
// .gnijieb ekil I   
// beijing. like I
//第一步全部逆序，第二步在每个空格前再把字符串进行一次逆序
#include<string.h>
void reverse_str(char* begin, char* end)
{
	while (begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}
//第一个while循环对应的是我写的三个小的字符串，但是第二个while对应的是我每一个字符串的循环
int main()
{
	char str[100] = { 0 };
	fgets(str, sizeof(str) - 1, stdin);  // 因为标准的输入在敲下回车之后会是一个\n
	//一定要预留一个\0的位置
	str[strlen(str)-1] = '\0';

	char* begin = str;
	char* end = str;
	while (*end != '\0')
	{
		while (*end != ' '&& *end != '\0')  //先逆转每个小的字符串
		{
			end++;
		}
		reverse_str(begin, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		begin = end;
	}
	reverse_str(str, str + strlen(str) - 1);
	printf("%s\n", str);
	return 0;
}