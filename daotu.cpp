#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string s;
		getline(cin, s);
		vector <string> res;
		string temp = "";
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] != ' ')
			{
				temp = temp + s[i];
			}
			else if(s[i] == ' ')
			{
				res.push_back(temp);
				temp = "";	
			}
		}
		if(temp != ""){
			res.push_back(temp);
		}
		for(int i = res.size() - 1; i >= 0; i--)
		{
			cout << res[i] << " ";
		}
		cout << endl;
		res.clear();
	}
	return 0;
}
