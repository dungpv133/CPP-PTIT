#include <iostream>
#include <cmath>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(int argc, char** argv) {
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		for(int i = 2; i <= n; i++){
			if(snt(i) && snt(n - i)){
				cout << i << " " << n - i;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}
