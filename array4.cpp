#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, n, a[1009];
	cin >> test;
	while(test--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		if(n % 2 == 1){
			for(int i = 0; i < n / 2; i++){
				cout << a[i] << " ";
				cout << a[n / 2 + 1 + i] << " ";
			}
			cout << a[n / 2] << " ";
		}
		else if(n % 2 == 0){
			for(int i = 0; i < n / 2; i++){
				cout << a[i] << " ";
				cout << a[n / 2 + i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
