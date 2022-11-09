#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	deque <int> hd;
	while(test--)
	{
		string s;
		cin >> s;
		if(s == "PUSHFRONT")
		{
			int x;
			cin >> x;
			hd.push_front(x);
		}
		else if(s == "PRINTFRONT")
		{
			if(hd.empty())
			{
				cout << "NONE" << endl;
			}
			else
			{
				cout << hd.front() << endl;
			}
		}
		else if(s == "POPFRONT")
		{
			if(!hd.empty())
			{
				hd.pop_front();
			}
		}
		else if(s == "PUSHBACK")
		{
			int x;
			cin >> x;
			hd.push_back(x);
		}
		else if(s == "PRINTBACK")
		{
			if(hd.empty())
			{
				cout << "NONE" << endl;
			}
			else
			{
				cout << hd.back() << endl;
			}
		}
		else if(s == "POPBACK")
		{
			if(!hd.empty())
			{
				hd.pop_back();
			}
		}
	}
	return 0;
}
