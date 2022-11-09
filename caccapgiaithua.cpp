#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, n;
	string a, sum;
	cin >> test;
	while(test--){
		cin >> n;
		cin >> a;
		sum = "";
		for(int i = 0; i < n; i++){
			if(a[i] == '0' || a[i] == '1')
				continue;
			else if(a[i] == '2')
				sum += "2";
			else if(a[i] == '3')
				sum += "3";
			else if(a[i] == '4')
				sum += "223";
			else if(a[i] == '5')
				sum += "5";
			else if(a[i] == '6')
				sum += "35";
			else if(a[i] == '7')
				sum += "7";
			else if(a[i] == '8')
				sum += "2227";
			else if(a[i] == '9')
				sum += "3327";
		}
		sort(sum.begin(), sum.end(), std :: greater <int>());
		cout << sum << endl;
	}
}
