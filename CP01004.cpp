#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int fopt = 0;
		int xopt;
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			if(a[i] != 0){
				int count = 0;
				int value = a[i];
				int j = i;
				while(a[j] == value){
					count++;
					a[j] = 0;
					j++;
				}
				if(count > fopt){
					fopt = count;
					xopt = value;
				}
			}
		}
		if(fopt > n / 2){
			cout << xopt << endl;
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}
