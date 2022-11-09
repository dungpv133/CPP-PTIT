#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int test;
	long long MAX = 10000000;
	long long n, a[MAX], b[MAX];
	cin >> test;
	while(test--){
		cin >> n;
		for(long long i = 0; i < n; i++){
			a[i] = -1;
		}
		for(long long i = 0; i < n; i++){
			cin >> b[i];
			if(b[i] >= 0 && b[i] < n){
				a[b[i]] = b[i];
			}
		}
		for(long long i = 0; i < n; i++){
				cout << a[i] << " ";
			}
			cout << endl;
	}
	return 0;
}
