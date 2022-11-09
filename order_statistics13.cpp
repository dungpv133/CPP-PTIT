#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n + 9], b[m + 9];
		long long suma[n + 9], sumb[m + 9];
		suma[0] = 0; sumb[0] = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			suma[i] = suma[i - 1] + a[i];
		}
		for(int i = 1; i <= m; i++){
			cin >> b[i];
			sumb[i] = sumb[i - 1] + b[i];
		}
		int vitri = min(n, m);
		long long sumdau, sumcuoi, sum, kq = 0;
		for(int i = 1; i <= vitri; i++){
			sumdau = max(suma[i], sumb[i]);
			sumcuoi = max(suma[n] - suma[i], sumb[m] - sumb[i]);
			sum = sumdau + sumcuoi;
			if(sum > kq){
				kq = sum;
			}
		}
		cout << kq << endl;
	}
	return 0;
}
