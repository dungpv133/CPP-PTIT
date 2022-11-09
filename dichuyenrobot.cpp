#include <bits/stdc++.h>
using namespace std;


void move(string s, int n)
{
	int x = 0, y = 0;
	char up = 'G', down = 'B', right = 'R', left = 'L';
	char temp;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == right)
		{
			x++;		
		}
		else if(s[i] == left)
		{
			x--;
		}
		else if(s[i] == up)
		{
			y++;
		}
		else if(s[i] == down)
		{
			y--;
		}
		if(s[i] == 'L')
		{
			temp = up;
			up = right;
			right = down;
			down = left;
			left = temp;
		}
		else if(s[i] == 'R')
		{
			temp = up;
			up = left;
			left = down;
			down = right;
			right = temp;
		}
		else if(s[i] == 'B')
		{
			temp = up;
			up = down;
			down = temp;
			temp = right;
			right = left;
			left = temp;
		}
	}
	cout << x << " " << y << endl;
}
int main()
{
	int test = 1;
	while(test--)
	{
		int n;
		string s;
		cin >> n;
		cin.ignore();
		cin >> s;
		move(s, n);
	}
	return 0;
}
