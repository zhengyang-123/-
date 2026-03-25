#include<cstdio>
#include<iostream>


int main()
{
	char a[10]={"abcd"};

	char b[10]={'a','b','c','d','\0'};
	char c[10] = {0};        // 全部初始化为0
	char d[10] = "";         // 空字符串，第一个字符为\0

	/*printf("%s\n",a);
	printf("%s\n",b);*/

	//double a=3.0;
	//int b=(int)a;
	//printf("%d\n",b);



	using std::cout;
	using std::cin;
	using std::endl;

	cout<<"hello""world!"<<endl;
	cout<<"hello"<<"world!"<<endl;

	cout<<a<<endl;
	cout<<c<<endl;
	cout<<d<<endl;

return 0;
}