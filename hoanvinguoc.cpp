#include <bits/stdc++.h>
using namespace std;
int n, a[50];
bool check[50];
vector < vector<int> > res;

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(check[j] == false)
		{
			a[i] = j;
			check[j] = true;
			if(i == n)
			{
				vector <int> temp;
				for(int k = 1; k <= n; k++)
				{
					temp.push_back(a[k]);
				}
				res.push_back(temp);
				temp.clear();
			}
			else
				Try(i + 1);
			check[j] = false;
		}
	}
}
void result()
{
	for(int i = res.size() - 1; i >= 0; i--)
	{
		for(int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j];
		}
		cout << " ";
	}
	cout << endl;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> n;
		memset(check, false, sizeof(check));
		res.clear();
		Try(1);
		result();
	}
	return 0;
}
