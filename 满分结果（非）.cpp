#include<stdio.h>
int main() {
	char n[100];	//����һ�����飬���ռ䷽���������
	int j, i = 0;
	scanf("%s", &n);	//�ַ�������Ҫ��%s
	    
    /*��������֮�󿪵Ŀռ����û�б�������������Ļ���Ĭ��Ϊ'\0',���ó������Ͳ�������ν��ѭ����*/
	for( ;n[i] != '\0'; i++) {
		j += (n[i]-'0');   //����ת��
	}
	/*printf("%d",j);������д��ʱ������һ��С���ԣ����һ���жϵ�һ���ֵļ�����û�д�
	��ֱ��copy��Ŀ�������Ե�*/
	
	char pin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(j > 99) {
		printf("%s ", pin[j/100]);
		printf("%s ", pin[j%100/10]);
		printf("%s", pin[j%100%10]);
	}else if(j > 9) {
		printf("%s ", pin[j/10]);
		printf("%s", pin[j%10]);
	}else{
		printf("%s", pin[j]);
	}
	return 0;
}

