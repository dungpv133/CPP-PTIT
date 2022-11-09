#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		queue <int> hd;
		while(n--)
		{
			int num;
			cin >> num;
			if(num == 1)
			{
				cout << hd.size() << endl;
			}
			else if(num == 2)
			{
				if(hd.empty())
				{
					cout << "YES" << endl;
				}
				else
				{
					cout << "NO" << endl;
				}
			}
			else if(num == 3)
			{
				int ptu;
				cin >> ptu;
				hd.push(ptu);
				cout << endl;
			}
			else if(num == 4)
			{
				if(!hd.empty())
				{
					hd.pop();
				}
				cout << endl;
			}
			else if(num == 5)
			{
				if(hd.empty())
				{
					cout << "-1" << endl;
				}
				else
				{
					cout << hd.front() << endl;
				}
			}
			else if(num == 6)
			{
				if(hd.empty())
				{
					cout << "-1" << endl;
				}
				else
				{
					cout << hd.back() << endl;
				}
			}
		}
	}
	return 0;
}
