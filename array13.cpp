#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n + 9], b[m + 9];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a, a + n);
		int min = a[0] - 1;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(b[i] == a[j]){
					cout << b[i] << " ";
					a[j] = min;
				}
				else if(b[i] < a[j]){
					break;
				}
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] != min){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
