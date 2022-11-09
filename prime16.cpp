#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool snt(int n){
	if(n < 2) 
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int main(int argc, char** argv) {
	long long n, count;
	int test;
	cin >> test;
	while(test--){
		cin >> n;
		count = 0;
		for(long  i = 0; i * i <= n; i++){
			if(snt(i))
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
