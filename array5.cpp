#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n, std :: greater<int>());
		if(n % 2 == 0){
			for(int i = 0; i < n / 2; i++){
				cout << a[i] << " " << a[n - i - 1] << " ";
			}
			cout << endl;
		}
		else{
			for(int i = 0; i < n / 2; i++){
				cout << a[i] << " " << a[n - i - 1] << " ";

			}
			cout << a[n / 2] << endl;
		}
	}
	return 0;
}
