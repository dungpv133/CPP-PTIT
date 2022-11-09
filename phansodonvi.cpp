#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long ts, ms;
		cin >> ts >> ms;
		while(1)
		{
			if(ms % ts == 0)
			{
				cout << "1/" << ms / ts << endl;
				break;
			}
			else
			{
				long long temp = ms / ts + 1;
				cout << "1/" << temp << " + ";
				ts = ts * temp  - ms;
				ms = ms * temp;
			}
		}
	}
	return 0;
}
