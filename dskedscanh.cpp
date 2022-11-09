#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	cin.ignore();
	vector <int> ke[100];
	for(int i = 1; i <= n; i++)
	{
		getline(cin, s);
		s = s + " ";
		int num = 0;
		int j = 0;
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
		sort(ke[i].begin(), ke[i].end());
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < ke[i].size(); j++)
		{
			if(i < ke[i][j])
			{
				cout << i << " " << ke[i][j] << endl;
			}
		}
	}
	return 0;
}
