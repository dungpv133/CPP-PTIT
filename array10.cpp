#include <bits/stdc++.h>
using namespace std;

int solve(long arr[], long n, long k){
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= k)
		count++;
	}
	int dem = 0;
	for (int i = 0; i < count; i++){
		if (arr[i] > k)
		dem++;
	}
	int temp = dem;
	for (int i = 0, j = count; j < n; i++, j++){
		if(arr[i] > k){
		dem--;
	}
		if(arr[j] > k){
		dem++;
	}
	}
	temp = min (temp,dem);
	return temp;
}
int main(){
	long test, n, k;
	cin >> test;
	while(test--){
		cin >> n >> k;
		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		cout << solve(arr,n,k) << endl;
	}
	return 0;
}
