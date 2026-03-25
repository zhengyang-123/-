#include<iostream>


int main(void)
{
        using namespace std;


		int a[2][2]={{1,2},{3,4}};
		int (* b)[2]=a;   //数组第一行的指针（数组名的退化）
		int (*d)[2]=&a[0];//数组第一行的指针

		int *c=&a[0][0];//第一个元素的指针和a[0]基本等价，a[0] 是第一行数组名退化为指向第一个元素的指针而&a[0][0] 是显式取地址操作
		int (*e)[2][2]=&a;//整个数组的指针


		

		cout<<"sizeof(a[1])="<<sizeof(a[1])<<endl<<"sizeof(*a)="<<sizeof(*a)<<endl;
		cout<<"sizeof(*a[1])="<<sizeof(*a[1])<<endl<<"(*a[1])="<<(*a[1])<<endl;
		cout<<"a="<<a<<endl<<"&a[0][0]="<<&a[0][0]<<endl<<"&*a="<<&*a<<endl;

		/*
		cout<<"sizeof(a)="<<sizeof(a)<<endl;
		cout<<"sizeof(b)="<<sizeof(b)<<endl;


		cout<<b<<endl<<b+1<<endl;
		cout<<"sizeof(c)="<<sizeof(c)<<endl;

		*/


		return 0;
}


//a 到底是什么意思？

//从对象的角度：a 是一个 int[2][2] 类型的数组对象，占用16字节内存

//从表达式的角度：在大多数情况下，a 会自动退化为 int(*)[2] 类型的指针