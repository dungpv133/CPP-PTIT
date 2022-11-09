#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
int a[MAX][MAX], n, s, truoc[MAX], d[MAX];

void readdata()
{
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 0)
            {
                a[i][j] = MAX * MAX;
            }
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
}

void solve()
{
    d[s] = 0;
    truoc[s] = s;
    for(int i = 1; i <= n; i++)
    {
        if(i != s)
        {
        d[i] = a[s][i];
        truoc[i] = s;
        }
    }
    for(int k = 1; k <= n - 2; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i == s)
            {
                continue;
            }
            for(int j = 1; j <= n; j++)
            {
                if(d[i] > d[j] + a[j][i] && i != j && a[j][i] != MAX * MAX)
                {
                    d[i] = d[j] + a[j][i];
                    truoc[i] = j;
                }
            }
        }
    }
}
void result()
{
	for(int i = 1; i <= n; i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
    for(int i = 1; i <= n; i++)
    {
        if(i == s)
        {
            cout << "K/c " << s << " -> " << s << " = 0; " << s << " <- " << s << endl;
        }
        else if(d[i] == 0)
        {
            cout << "K/c " << s << " -> " << i << " = INF\n";
        }
        else
        {
            cout << "K/c " << s << " -> " << i << " = " << d[i] << "; \t";
            cout << i << " <- ";
            int temp = truoc[i];
            while(temp != s)
            {
                cout << temp << " <- ";
                temp = truoc[temp];
            }
            cout << s << endl;
        }
    }
}
int main()
{
    readdata();
    solve();
    result();
    return 0;
}
