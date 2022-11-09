#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sphenic(int n){
	int count = 0;
	for(int i = 2; i <= n; i++){
		if(n % i == 0){
			count++;
			n /= i;
		}
		if(n % i == 0)
			return 0;
	}
	if(count == 3)
		return 1;
	return 0;
}
int main(int argc, char** argv) {
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		cout << sphenic(n) << endl;
	}
	return 0;
}
