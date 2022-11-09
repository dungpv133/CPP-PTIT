#include <bits/stdc++.h>
using namespace std;
string s, temp;
bool check[100000];

void init()
{
	for(int i = 0; i < s.size(); i++)
	{
		check[i] = true;
		temp[i] = s[i];
	}
}
void display()
{
	for(int i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
	cout << " ";
}
void solve(int i)
{
	for(int j = 0; j < s.size(); j++)
	{
		if(check[j])
		{
			s[i] = temp[j];
			check[j] = false;
			if(i == s.size() - 1)
			{
				display();
			}
			else
			{
				solve(i + 1);
			}
			check[j] = true;
		}
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> s;
		init();
		solve(0);
		cout << endl;
	}
}
