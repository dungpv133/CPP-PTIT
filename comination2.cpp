#include <bits/stdc++.h>
using namespace std;

int n, a[100], k;
void result(){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << " ";
}
void next_gen(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k)
			result();
		else
			next_gen(i + 1);
	}
}
int main(){
	int test;
	cin >> test;
	while(test--){
		cin >> n >> k;
		a[0] = 0;
		next_gen(1);
		cout << endl;
	}
	return 0;
}
