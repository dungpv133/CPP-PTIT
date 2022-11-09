#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		int a[n + 9];
		int count = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 0){
				count++;
			}
		}
		for(int i = 0; i < n - 1; i++){
			if(a[i + 1] != 0 && a[i + 1] == a[i]){
				a[i] = a[i] * 2;
				a[i + 1] = 0;
				count++;
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] != 0){
				cout << a[i] << " ";
			}
		}
		for(int i = 0; i < count; i++){
			cout << "0 ";
		}
		cout << endl;
	}
}
