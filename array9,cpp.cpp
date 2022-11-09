#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector <int> res;
		long long temp;
		for(int i = 0; i < n; i++){
			if(i == 0){
				temp = a[0] * a[1];
				res.push_back(temp);
			}
			else if(i == n - 1){
				temp = a[n - 1] * a[n - 2];
				res.push_back(temp);
			}
			else{
				temp = a[i - 1] * a[i + 1];
				res.push_back(temp);
			}
		}
		for(int i = 0; i < res.size(); i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
