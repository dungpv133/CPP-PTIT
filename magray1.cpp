#include <bits/stdc++.h>
using namespace std;
int n;
vector <string> l1, l2;

void init()
{
	l1.clear();
	l2.clear();
	cin >> n;
	l1.push_back("0");
	l1.push_back("1");
}
void sinh()
{
	l2.clear();
	for(int i = l1.size() - 1; i >= 0; i--)
	{
		l2.push_back(l1[i]);
	}
	for(int i = 0; i < l1.size(); i++)
	{
		l1[i] = '0' + l1[i];
	}
	for(int i = 0; i < l2.size(); i++)
	{
		l2[i] = '1' + l2[i];
	}
	for(int i = 0; i < l2.size(); i++)
	{
		l1.push_back(l2[i]);
	}
}
void result()
{
	for(int i = 0; i < l1.size(); i++)
	{
		cout << l1[i] << " ";
	}
	cout << endl;
	l1.clear();
	l2.clear();
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		while(l1[0].size() < n)
		{
			sinh();
		}
		result();
	}
	return 0;
}
