#include <bits/stdc++.h>
using namespace std;

string cong(string a, string b){
	while(a.size() > b.size())
		b = "0" + b;
	while(b.size() > a.size())
		a = "0" + a;
	int dai = a.size() - 1;
	int nho = 0;
	string kq;
	for(int i = dai; i >= 0; i--){
		int temp = int(a[i] - '0') + int(b[i] - '0') + nho;
		kq = char(temp % 10 + '0') + kq;
		nho = temp / 10;
	}
	if(nho == 1)
		kq = "1" + kq;
	return kq;
}
int main(){
	int test;
	string a, b;
	cin >> test;
	while(test--){
		cin >> a >> b;
		cout << cong(a, b) << endl;
	}
	return 0;
}
