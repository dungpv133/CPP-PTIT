#include <bits/stdc++.h>
using namespace std;
int a[1009][1009];

int main()
{
	int n;
	string s;
	cin >> n;
	cin.ignore();
	vector <int> ke[1009];
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; i++)
	{
		getline(cin, s);
		s += " ";
		int j = 0;
		int num = 0;
		while(j < s.size())
		{
			if(s[j] >= '0' && s[j] <= '9')
			{	
				num = num * 10 + (int)(s[j] - '0');
			}
			else if(num > 0)
			{
				ke[i].push_back(num);
				num = 0;
			}
			j++;
		} 
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < ke[i].size(); j++)
		{
			a[i][ke[i][j]] = a[ke[i][j]][i] = 1;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
