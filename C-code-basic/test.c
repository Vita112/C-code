#define _CRT_SECURE_NO_WARNINGS 1//����Ԥ������ţ�_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//ʹ�ñ��˵Ķ�����Ҫ���к�-#include��#��һ��ָ����ʽ��includeָ����
//����һ����stdio.h���ļ���ʹ��<>��������std-��׼��io-�������
//��ʹ�����롢�������ʱ�����õ�

//������ǰ��int ��ʾ���������÷���һ������ֵ
//int main()//������-�������ڣ�ֻ����һ��
//{
//	printf("hello world\n");//��ӡ����printfunction
//	printf("��ã�");

//	//��ӡ��ͬ���ͱ����������ڴ�����Ŀռ�
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;//����0
//}


short age = 20;//���ڴ�����ռ�-�������� ������ = ֵ���ں�����Ϊglobal�������ڼ�{}��Ϊlocal
int main()
{
	//ʹ�ñ��ļ���� �����ڵı���ʱ����Ҫ���������򱨴�
	//ʹ��extern �������� ������
	extern int g_val;
	printf("g_val = %d\n", g_val)��
	return 0;
}


int main()
{
	//����2�����ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0; //C�������Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//&Ϊȡ��ַ����-��mum1��mum3����ȡ���ĵ�ַ
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}