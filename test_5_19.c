 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//
//	int b = a + 1;
//	int b = ++a;
//
//	return 0;
//}

//#define MAX(X,Y)  (X)>(Y)?(X):(Y)
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a, b);
//	int max = (a++) > (b++) ? (a++) : (b++);
//
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//��Ⱥ����ڳ����ϵĹ�ģ���ٶȷ����ʤһ��.
//��ʱ�����޹ص�.

//#define TEST(x,y) printf("tese\n")
//
//int main()
//{
//	TEST();
//
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
////����Դ�����,���Ǻ������ܱȵ�.
//
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("MAX=%d\n", MAX);
//#undef MAX//�Ƴ�һ���궨��
//	printf("MAX=%d\n", MAX);
//	return 0;
//}
//��������
//#define DUBUG
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif	
//	}
//
//	return 0;
//}
//�����֧����������.
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//�ж��Ƿ񱻶���.

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)//�ж��Ƿ����DEBUG
//	printf("hehe\n");
//#endif
//
//	return 0;
//}
//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}
//
//Ƕ��ָ��