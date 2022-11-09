#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool snt(int n){
	if(n < 2 )
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int t, m, n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		if(m > n){
			int temp = m;
			m = n;
			n = temp;
		}
		for(int i = m; i <= n; i++){
			if(snt(i))
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
