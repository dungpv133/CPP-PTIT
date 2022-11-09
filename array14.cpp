#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, k, n;
	cin >> test;
	while(test--){
		cin >> k >> n;
		long a[k + 5][n + 5];
		long long sum[n * k + 5];
		long long size = 0;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				sum[size] = a[i][j];
				size++;
			}
		}
		sort(sum, sum + size, std :: less <long long>());
		for(long long i = 0; i < size; i++){
			cout << sum[i] << " ";
		}
		cout << endl;
	}
}
