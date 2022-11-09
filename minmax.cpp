#include <bits/stdc++.h>
using namespace std;

void findmin(int m, int s){
	string res = "";
	int first = 1;
	m--; s--;
	while(m--){
		if(s >= 9)
		{
			res = '9' + res;
			s -= 9;
		}
		else
		{
			char temp = s + '0';
			res = temp + res;
			s = 0;
		}
	}
	if(m > 0)
	{
		while(m--)
		{
			res = '0' + res;
		}
	}
	first += s;
	res = (char)(first + '0') + res;
	cout << res << " ";
}
void findmax(int m, int s){
	string res = "";
	int first = 9;
	m--; s -= 9;
	while(m--){
		if(s >= 9)
		{
			res = res + '9';
			s -= 9;
		}
		else
		{
			res = res + (char)(s + '0');
			s = 0;
		}
	}
	if(m > 0)
	{
		while(m--)
		{
			res = res + '0';
		}
	}
	res = (char)(first + '0') + res;
	cout << res << endl;
}
int main(){
	int m, s;
	cin >> m >> s;
	if(s == 0)
	{
		if(m == 1)
		{
			cout << "0 0" << endl;
		}
		else
		{
			cout << "-1 -1" << endl;
		}
	}
	else if(s > 9 * m)
	{
		cout << "-1 -1\n";
	}
	else
	{
		findmin(m, s);
		findmax(m, s);
	}
	return 0;
}
