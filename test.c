#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ѡ���岿��
//�ҷ����Ҷ���do-while���ֲ�̫���������Ǻ�������ܽ�������
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

//����С������
//��Ŀ������������A��������B����С��������ָ�ܱ�A��B��������С��������ֵ
//��������������A��B
//���A��B����С������

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
//	//���Լ�� --- շת�������������ˣ����������й���Լ��������ߣ�
//
//
//	//��С������ ---- a*b / ���Լ��
//	printf("%d\n", a*b / max_div_count(a, b));
//	return 0;
//}


// I like beijing.
// .gnijieb ekil I   
// beijing. like I
//��һ��ȫ�����򣬵ڶ�����ÿ���ո�ǰ�ٰ��ַ�������һ������
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
//��һ��whileѭ����Ӧ������д������С���ַ��������ǵڶ���while��Ӧ������ÿһ���ַ�����ѭ��
int main()
{
	char str[100] = { 0 };
	fgets(str, sizeof(str) - 1, stdin);  // ��Ϊ��׼�����������»س�֮�����һ��\n
	//һ��ҪԤ��һ��\0��λ��
	str[strlen(str)-1] = '\0';

	char* begin = str;
	char* end = str;
	while (*end != '\0')
	{
		while (*end != ' '&& *end != '\0')  //����תÿ��С���ַ���
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