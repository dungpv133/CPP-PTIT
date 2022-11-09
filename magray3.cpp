#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string s;
		cin >> s;
		vector <int> res;
		res.push_back((int)(s[0] - '0'));
		for(int i = 1; i < s.size(); i++)
		{
			int a = (int)(s[i] - '0');
			int b = (int)(s[i - 1] - '0');
			int temp = a ^ b;
			res.push_back(temp);
		}
		for(int i = 0; i < res.size(); i++)
		{
			cout << res[i];
		}
		cout << endl;
		res.clear();
	}
	return 0;
}
