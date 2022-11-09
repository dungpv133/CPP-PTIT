#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int k;
		string s;
		cin >> k;
		cin >> s;
		for(int i = 0; i < s.size(); i++)
		{
			int Max = i;
			for(int j = s.size() - 1; j > i; j--)
			{
				if(s[j] > s[Max])
				{
					Max = j;
				}
			}
			if(s[Max] > s[i] && k > 0)
			{
				int temp = s[Max];
				s[Max] = s[i];
				s[i] = temp;
				k--;
			}
			if(k == 0)
			{
				break;
			}
		}
		cout << s << endl;
	}
	return 0;
}
