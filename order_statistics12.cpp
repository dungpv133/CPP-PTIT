#include <bits/stdc++.h>
using namespace std;
int check(long a[], long size, long n){
	for(long i = 0; i < size; i++){
		if(a[i] == n)
			return 1;
	}
	return 0;
}
int main(){
	int test;
	long n;
	cin >> test;
	while(test--){
		cin >> n;
		long a[n + 5], b[n + 5];
		long size = 0;
		for(long i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > 0 && !check(b, size, a[i])){
				b[size] = a[i];
				size++;
			}
		}
		if(size == 0 || (size == 1 && b[0] != 1)) {
			cout << "1" << endl;
			continue;
		}
		else if(size == 1){
			cout << b[0] + 1 << endl;
			continue;
		}
		sort(b, b + size, std :: less <long>());
		if(b[0] != 1){
			cout << "1" << endl;
			continue;
		}
		long min;
		for(long i = 1; i < size; i++){
			if(b[i] - b[i - 1] > 1){
				min = b[i - 1] + 1;
				break;
			}
			if(i == size - 1)
				min = b[i] + 1;
		}
		cout << min << endl;
	}
}
