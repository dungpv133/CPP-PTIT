#include <bits/stdc++.h>
using namespace std;

string tru(string a, string b){
	while(a.size() > b.size())
		b = "0" + b;
	while(b.size() > a.size())
		a = "0" + a;
		if(a < b){
			a.swap(b);
		}
	int dai = a.size() - 1;
	int nho = 0;
	string kq;
	for(int i = dai; i >= 0; i--){
		int temp = int(a[i] - '0') - int(b[i] - '0') - nho;
		if(temp < 0){
			nho = 1;
			kq = char(temp + 10 + '0') + kq;
		}
		else if(temp >= 0){
			kq = char(temp + '0') + kq;
			nho = 0;
		}
	}
	return kq;
}
int main(){
	int test;
	string a, b;
	cin >> test;
	while(test--){
		cin >> a >> b;
		cout << tru(a, b) << endl;
	}
	return 0;
}
