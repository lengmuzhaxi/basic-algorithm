#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
{
	bitset<32>s;
	cin >> s;//����һ���ַ���
	cout << s.count() << " ";//�����ж���λ1
	cout << s.set(5, 1) << " ";//��s�ĵ�5λ��Ϊ1����s[5]=1
	cout << s.set() << " ";//��s������λ��Ϊ1
	cout << s.reset(5) << " ";//��s�ĵ�5λ��Ϊ0����s[5]=0
	cout << s.reset() <<" ";//��s������λ��Ϊ0
	cout << s.flip() << " "; //��s������λ��λȡ������s=~s
	cout << s.set(5,0) << endl;//��s�ĵ�5λ��Ϊ1����s[5]=0
}