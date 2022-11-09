#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
	if(n == 0)
		return 0;
	if(n == 2 || n == 1)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}
bool check(int n){
	if(n == 0 || n == 1){
		return true;
	}
	for(int i = 0; ; i++){
		if(fibo(i) == n){
			return true;
		}
		if(fibo(i) > n)
			return false;
	}
}
int main(){
	int test, n, a[103], b[103];
	cin >> test;
	while(test--){
		cin >> n;
		int size = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(check(a[i])){
				b[size] = a[i];
				size++;
			}
		}
		for(int i = 0; i < size; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
