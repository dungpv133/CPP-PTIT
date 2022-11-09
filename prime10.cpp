#include <bits/stdc++.h>
using namespace std;

bool check(int n){
	if(n < 2) 
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int sum(int n){
	int temp = 0;
	while(n > 0){
		temp += n % 10;
		n /= 10;
	}
	return temp;
}
int tongsnt(int n){
	int temp = 0;
	for(int i = 2; i <= n; i++){
		while(n % i == 0){
			n /= i;
			if(i > 10){
				int tong = sum(i);
				temp += tong;
			}
			else if(i < 10){
				temp += i;
			}
		}
	}
	return temp;
}
int main(){
	int n, t;
	cin >> t;
	while(t--){
		cin >> n;
		int s1 = sum(n);
		int s2 = tongsnt(n);
		if(!check(n) && s1 == s2){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}
