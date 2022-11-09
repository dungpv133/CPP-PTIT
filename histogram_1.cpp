#include <bits/stdc++.h>
using namespace std;
int i[20][20], res[10], m, n, new_level;

void read_data()
{
    cin >> m >> n;
    cin >> new_level;
    for(int i = 0; i < 10; i++)
        res[i] = 0;
    for(int j = 0; j < m; j++)
    {
        for(int k = 0; k < n; k++)
        {
            int temp;
            cin >> temp;
            i[j][k] = temp;
            res[temp] += 1;
        }
    }
    for(int i = 1; i < 10; i++)
        res[i] += res[i - 1];
}

void display()
{
    for(int j = 0; j < m; j++)
    {
        for(int k = 0; k < n; k++)
        {
            cout << res[i[j][k]];
        }
        cout << endl;
    }
}
void solve()
{
    for(int i = 0; i < 10; i++)
    {
        float temp = (float(res[i]) / float(m * n)) * float(new_level - 1);
        res[i] = round(temp);
//        cout << res[i] << endl;
    }
    display();
}
int main()
{
    read_data();
    solve();
    return 0;
}
