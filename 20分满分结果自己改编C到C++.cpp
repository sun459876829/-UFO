#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	char n[100];	//����һ�����飬���ռ䷽���������
	int j, i = 0;
	cin>>n;	//�ַ�������Ҫ��%s
	    
    /*��������֮�󿪵Ŀռ����û�б�������������Ļ���Ĭ��Ϊ'\0',���ó������Ͳ�������ν��ѭ����*/
	for( ;n[i] != '\0'; i++) {
		j += (n[i]-'0');   //����ת��
	}
	/*printf("%d",j);������д��ʱ������һ��С���ԣ����һ���жϵ�һ���ֵļ�����û�д�
	��ֱ��copy��Ŀ�������Ե�*/
	
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
