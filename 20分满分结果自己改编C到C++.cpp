#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	char n[100];	//定义一个数组，开空间方便大数输入
	int j, i = 0;
	cin>>n;	//字符串输入要用%s
	    
    /*数组声明之后开的空间如果没有被输入的数填满的话会默认为'\0',设置成这样就不会做无谓的循环啦*/
	for( ;n[i] != '\0'; i++) {
		j += (n[i]-'0');   //类型转换
	}
	/*printf("%d",j);这是我写的时候做的一个小测试，输出一下判断第一部分的计算有没有错，
	我直接copy题目里样例试的*/
	
	string pin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(j > 99) {
		cout<< pin[j/100]<<" ";
	cout<<pin[j%100/10]<<" ";
		cout<<pin[j%100%10];
	}else if(j > 9) {
	cout<< pin[j/10]<<" ";
	cout<<pin[j%10];
	}else{
		cout<<pin[j];
	}
	cout<<pin[1]; 
	return 0;
}
