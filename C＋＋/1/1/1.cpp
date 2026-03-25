#include<stdio.h>

#define M 4
#define N 4

int main()
{
	int a[M][N]={1,2,3,4,5,6};
	int(*ptr)[4]=a;
	printf("%d\n" ,**(ptr+1));
	printf("%d\n" ,*(*a+1));
	printf("%d\n" ,**a);

}