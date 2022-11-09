#include <bits/stdc++.h>
using namespace std;

bool check(string x, string y){
	return (x + y > y + x);
}
int main(){
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		string s;
		vector <string> vt;
		for(int i = 0; i < n; i++){
			cin >> s;
			vt.push_back(s);
		}
		sort(vt.begin(), vt.end(), check);
		for(int i = 0; i < n; i++){
			cout << vt[i];
		}
		cout << endl;
	}
	return 0;
}
