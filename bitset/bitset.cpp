#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
{
	bitset<32>s;
	cin >> s;//输入一个字符串
	cout << s.count() << " ";//返回有多少位1
	cout << s.set(5, 1) << " ";//把s的第5位变为1，即s[5]=1
	cout << s.set() << " ";//把s的所有位变为1
	cout << s.reset(5) << " ";//把s的第5位变为0，即s[5]=0
	cout << s.reset() <<" ";//把s的所有位变为0
	cout << s.flip() << " "; //把s的所有位按位取反，即s=~s
	cout << s.set(5,0) << endl;//把s的第5位变为1，即s[5]=0
}