#include <bits/stdc++.h>
using namespace std;

int n, a[100];

void init(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = n - 1;
	while(a[i] > a[i + 1] && i > 0){
		i--;
	}
	int j = n;
	while(a[j] < a[i]){
		j--;
	}
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	int s = i + 1;
	int r = n;
	while(s < r){
		temp = a[s];
		a[s] = a[r];
		a[r] = temp;
		r--;
		s++;
	}
}
bool isfinal(){
	for(int i = 1; i <= n; i++){
		if(a[i] != n - i + 1){
			return false;
		}
	}
	return true;
}
void result(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	init();
	result();
	while(!isfinal()){
		sinh();
		result();
	}
	return 0;
}
