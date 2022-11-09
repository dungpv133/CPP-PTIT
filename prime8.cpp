#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	int n, p;
	cin >> test;
	while(test--){
		cin >> n >> p;
		int count = 0;
		for(int i = 2; i <= n; i++){
			int temp = i;
			while(temp % p == 0){
				count++;
				temp /= p;
			}
		}
		cout << count << endl;
	}
	return 0;
}
