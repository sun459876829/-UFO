#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int main()
{
	char py[10][5] = { "ling","yi","er","san","si","wu","liu ","qi","ba","jiu" };
	char s[100];
	
	int i, sum;
	int n[10];
	cin >> s;
	cin.ignore(1024, '\n');
	sum = 0;
	for (i = 0; i < strlen(s); i++)
		sum += s[i] - '0';
	i = 0;
	while (sum > 0)
	{
		n[i++] = sum % 10;
		sum /= 10;
	}
cout<< py[n[--i]];
	while (i--)
		cout<<" "<< py[n[i]];
	
	return 0;

}


