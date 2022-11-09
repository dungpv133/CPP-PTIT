#include <bits/stdc++.h>
using namespace std;

int n, a[100], check[100];
void init(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = i;
		check[i] = 1;
	}
}
void result(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << " ";
}
void next_gen(int i){
	for(int j = 1; j <= n; j++){
		if(check[j]){
			a[i] = j;
			check[j] = 0;
			if(i == n)
			result();
		else
			next_gen(i + 1);
		check[j] = 1;
		}	
	}
}
int main(){
	int test;
	cin >> test;
	while(test--){
		init();
		next_gen(1);
		cout << endl;
	}
	return 0;
}
