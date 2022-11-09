#include <bits/stdc++.h>
using namespace std;


bool snt(long long n){
	if(n < 2)
	{
		return false;
	}
	for(long long i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool check_num(long long n)
{
	long long sum = 0;
	while(n > 0)
	{
		long long temp = n % 10;
		if(temp != 2 && temp != 3 && temp != 5 && temp != 7)
		{
			return false;
		}
		sum += temp;
		n /= 10;
	}
	if(snt(sum))
	{
		return true;
	}
	return false;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		long long a, b;
		cin >> a >> b;
		if(a > b){
			long long temp = a;
			a = b;
			b = temp;
		}
		long long count = 0;
		for(long long i = a; i <= b; i++){
			if(i % 2 == 0 && i > 2)
			{
				continue;
			}
			if(check_num(i))
			{
				if(snt(i))
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
