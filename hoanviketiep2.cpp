#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test, stt;
	string s;
	cin >> test;
	for(int i = 1; i <= test; i++)
	{
		cin >> stt;
		cin >> s;
		cout << stt << ' ';
		int so[90], sz;
		for(int j = 1; j <= s.size(); j++)
		{
			so[j] = (int)(s[j - 1] - '0');
		}
		sz = s.size() - 1;
		while(sz > 0 && so[sz] >= so[sz + 1])
		{
			sz--;
		}
		if(sz <= 0)
		{
			cout << "BIGGEST" << endl;
		}
		else
		{
			int k = s.size();
			while(so[k] <= so[sz])
			{
				k--;
			}
			swap(so[k], so[sz]);
			int t = sz + 1, p = s.size();
			while(t < p)
			{
				swap(so[t], so[p]);
				t++;
				p--;
			}
			for(int j = 1; j <= s.size(); j++)
			{
				cout << so[j];
			}
			cout << endl;
		}
	}
	return 0;
}
