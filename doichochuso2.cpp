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
		cin >> k >> s;
		for(int i = 0; i < s.size() - 1; i++)
		{
			int pos = s.size() - 1;
			int val = s[s.size() - 1];
			for(int j = pos; j > i; j--)
			{
				if(s[j] > val)
				{
					val = s[j];
					pos = j;
				}
			}
			if(k > 0 && val > s[i])
			{
				swap(s[i], s[pos]);
				k--;
			}
		}
		cout << s << endl;
	}
	return 0;
}
