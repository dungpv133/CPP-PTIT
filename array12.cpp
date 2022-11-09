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
		long long max = -1e9;
		for(int i = 0; i < n; i++){
			long long temp = 1;
			for(int j = i; j < n; j++){
				if(a[j] == 0){
					break;
				}
				else{
					temp = temp * a[j];
					if(temp > max){
						max = temp;
					}
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}
