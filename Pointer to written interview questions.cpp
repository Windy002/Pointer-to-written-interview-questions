#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*
int main()
{	//����������Ԫ�صĵ�ַ
	//���⣺
	//��1�� sizeof��(������)��������������������
	//��2�� &������������������ʾ�����������飬����������Ԫ�صĵ�ַ 
	//
	//һλ���� 
	int a[]={1,2,3,7};
	printf("%d\n",sizeof(a)); //16	
	//sizeof(������)--�������������Ĵ�С 
	printf("%d\n",sizeof(a+0)); //16��x�� 4 or 8(check)		
	//��Ϊ�����ǣ�1��or��2���е����⣬���������a ��ʾ�Ĳ����������飬 
	// ���� a+0 ��ʾ������Ԫ�صĵ�ַ ����a+0 ������4 or 8 
	printf("%d\n",sizeof(*a)); // 4 	
	//*a ��Ԫ�� 
	printf("%d\n",sizeof(a+1)); //4 or 8  
	//��Ϊ�����ǣ�1��or��2���е����⣬��������� a ��ʾ�Ĳ����������飬
	// ���� a+1 ��ʾ���ǵڶ���Ԫ�صĵ�ַ ����a+1 ������4 or 8 
	printf("%d\n",sizeof(a[1])); //4
	printf("%d\n",sizeof(&a)); //4 or 8  
	//ȡ����ĵ�ַ������ָ�� ������ָ�루��ַ�� 
	printf("%d\n",sizeof(*&a)); //16 	
	//* �� & �൱�ڵ����� sizeof ����ľ�������Ĵ�С 
	printf("%d\n",sizeof(&a+1)); //4 or 8 
	//&a������ĵ�ַ +1 ����һ������ ������Ȼ�ǵ�ַ 
	printf("%d\n",sizeof(&a[0]));//4 or 8  
	//��һ��Ԫ�صĵ�ַ 
	printf("%d\n",sizeof(&a[0]+1));//4 or 8 
	// �ڶ���Ԫ�صĵ�ַ 
	
	return 0;
}
*/


/* 
int main()
{
	char carr[]={'a','b','c','d','e','f'};
	printf("%d\n",sizeof(carr)); // 6 
	// sizeof�����������Ĵ�С 
	printf("%d\n",sizeof(carr+0));//4 or 8
	// ���ǣ�1��or��2���е����⣬���������a ��ʾ�Ĳ����������飬����Ԫ�ص�ַ 
	printf("%d\n",sizeof(*carr));//1
	printf("%d\n",sizeof(carr[1]));//1
	printf("%d\n",sizeof(&carr));//4 or 8
	// & carr ����ĵ�ַ�������ǵ�ַ�� 
	printf("%d\n",sizeof(&carr+1));//4 or 8
	// &carr + 1 ����һ������ĵ�ַ�����ǵ�ַ 
	printf("%d\n",sizeof(&carr[0]+1));//4 or 8
	// &carr[0]+1 �ǵڶ���Ԫ�صĵ�ַ 
	return 0;
}
*/

/* 
int main()
{
	char carr[]={'a','b','c','d','e','f'};
	printf("%d\n",strlen(carr)); // rand number
	// ע��strlen��sizeof������ strlen ����'\0'��ͣ�� 
	printf("%d\n",strlen(carr+0));// rand number
	printf("%d\n",strlen(*carr));// erorr
	// ��a=97 ������ַ���ʣ�����ɷǷ����ʣ����� 
	printf("%d\n",strlen(carr[1]));// eporr
	printf("%d\n",strlen(&carr));// rand number
	printf("%d\n",strlen(&carr+1));// rand number-6
	//&carr +1 �� ����һ���ַ����飬���Ա�֮ǰ����б����Ҫ��6������ 
	printf("%d\n",strlen(&carr[0]+1));//rand number-1
	//&carr[0] +1 �� ����һ���ַ������Ա�֮ǰ����б����Ҫ��1������ 
	return 0;
}
*/


/* 
int main()
{
	char carr[]="abcdef"
	printf("%d\n",sizeof(carr)); // 7
	// sizeof�������������������������������ռ�ÿռ�Ĵ�С 
	printf("%d\n",sizeof(carr+0));//4 or 8
	// ���ǣ�1��or��2���е����⣬���������a ��ʾ�Ĳ����������飬����Ԫ�ص�ַ 
	printf("%d\n",sizeof(*carr));//1
	printf("%d\n",sizeof(carr[1]));//1
	printf("%d\n",sizeof(&carr));//4 or 8
	// & carr ����ĵ�ַ�������ǵ�ַ�� 
	printf("%d\n",sizeof(&carr+1));//4 or 8
	// &carr + 1 ����һ������ĵ�ַ�����ǵ�ַ 
	printf("%d\n",sizeof(&carr[0]+1));//4 or 8
	// &carr[0]+1 �ǵڶ���Ԫ�صĵ�ַ 
	return 0;
}
*/


/*
int main()
{
	char carr[]="abcdef";
	printf("%d\n",strlen(carr)); // 6
	// ע��strlen��sizeof������ strlen ����'\0'��ͣ�� 
	printf("%d\n",strlen(carr+0));// 6
	//����Ԫ�ص�ַ��Ȼ�������ң�ֱ���ҵ�'\0' 
	//printf("%d\n",strlen(*carr));// erorr
	// ��a=97 ������ַ���ʣ�����ɷǷ����ʣ����� 
	//printf("%d\n",strlen(carr[1]));// eporr
	printf("%d\n",strlen(&carr));// 6
	// &arr--ȡ����ĵ�ַ ,����ĵ�ַ������Ԫ�صĵ�ַ 
	printf("%d\n",strlen(&carr+1));// rand number
	//&carr +1 �� ����һ���ַ��������Ҫ�����ҵ�'\0' 
	printf("%d\n",strlen(&carr[0]+1));//5
	//&carr[0] +1 �� ����һ���ַ������Ա�֮ǰ��sizeof(carr)��1������ 
	return 0;
}
*/


/*
int main()
{
	const char *p="abcdef";
	printf("%d\n",sizeof(p)); // 4 or 8
	// ע��strlen��sizeof������ sizeof �������ռ�ÿռ� 
	printf("%d\n",sizeof(p+1));// 4 or 8
	//�ǵڶ���Ԫ�صĵ�ַ��'b'�ĵ�ַ 
	printf("%d\n",sizeof(*p));// 1
	printf("%d\n",sizeof(p[0]));// 1
	// p[0]==*(p+0) Ҳ����'a' 
	printf("%d\n",sizeof(&p));// 4 or 8
	// &arr--ȡ����ĵ�ַ 
	printf("%d\n",sizeof(&p+1));// 4 or 8
	//&carr +1 �� ȡ����һ���ַ������ĵ�ַ 
	printf("%d\n",sizeof(&p[0]+1));// 4 or 8
	//&carr[0] +1 �� ����һ���ַ��ĵ�ַ
	return 0;
}
*/


/* 
int main()
{
	const char* p="abcdef";
	printf("%d\n",strlen(p)); // 6
	// ע��strlen��sizeof������ strlen ����'\0'��ͣ�� 
	printf("%d\n",strlen(p+1));// 5
	//����Ԫ�ص�ַ��Ȼ�������ң�ֱ���ҵ�'\0' 
//	printf("%d\n",strlen(*p));// erorr
	// ��a=97 ������ַ���ʣ�����ɷǷ����ʣ����� 
//	printf("%d\n",strlen(p[0]));// eporr
	printf("%d\n",strlen(&p));// 6
	// &arr--ȡ��������ĵ�ַ 
	printf("%d\n",strlen(&p+1));// rand number
	//&carr +1 �� ����һ���ַ��������Ҫ�����ҵ�'\0' 
	printf("%d\n",strlen(&p[0]+1));//5
	//&carr[0] +1 �� ����һ���ַ������Ա�֮ǰ��sizeof(carr)��1������ 
	return 0;
}
*/


int main()
{
	int a[3][4]={0};
	printf("%d\n",sizeof(a) );//48
	printf("%d\n",sizeof( a[0][0]) );//4
	printf("%d\n",sizeof( a[0]) );//16	 a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(arr[0])���������������� 
	//sizeof()�ڣ�������ǵ�һ�еĴ�С 
	printf("%d\n",sizeof( a[0]+1) );//4 or 8
	// sizeof(arr[0])������������������sizeof�ڣ���ʾ����a[0]�е���Ԫ�ص�ַ�ټ�һ�ĵ�ַ��Ҳ����a[0][1] 
	printf("%d\n",sizeof( *(a[0]+1) ) );//4 
	// a[0] + 1��ʾ����a[0]�е���Ԫ�ص�ַ�ټ�һ�ĵ�ַ,�����þ���Ԫ��a[0][1] 	
	printf("%d\n",sizeof(a+1) );//4 or 8
	// sizeof(a+1)������������������sizeof�ڣ���ʾ����a�е���Ԫ�ص�ַ�ټ�һ�ĵ�ַ��Ҳ����a[1]�ĵ�ַ 
	printf("%d\n",sizeof(*(a+1) ) );//16
	//��ʾ����a�е���Ԫ�ص�ַ�ټ�һ�ĵ�ַ�ٽ����ã�Ҳ����a[1]�ĵ�ַ�����ã�Ҳ����a[1] 
	printf("%d\n",sizeof(&a[0]+1) );//4 or 8
	printf("%d\n",sizeof( *(&a[0]+1) ) );// 16
	printf("%d\n",sizeof(*a) );//16
	printf("%d\n",sizeof(a[3]) );//16
	return 0;
}




