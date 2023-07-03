#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
bool a[1000] = { 0 };
int cnt;
using namespace std;
void primes(int n)
{
	//int p[1000] = { 0 };
	vector<int>p;
	memset(a, 0, sizeof(a));
	for (int i = 2; i <= n; i++)
	{
		if (!a[i])
		{
			p.push_back(i);
			cnt++;
		}
		for (int j = i; j <= n / i; j++)
		{
			a[i * j] = 1;
		}
	}
	for (int i = 0; i < cnt; i++)
	{
		cout << p[i] << " ";
	}
}
int main()
{
	int n = 0;
	/*cin >> n;
	primes(n);*/
	cout << (5 &-1);
}