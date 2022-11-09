#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int  findx(int a, int m){
	for(int i = 0; i <= m - 1; i++){
		if(a * i % m == 1){
			return i;
		}
	}
	return -1;
}
int main(int argc, char** argv) {
	int test, a, m;
	cin >> test;
	while(test--){
		cin >> a >> m;
		cout << findx(a, m) << endl;
	}
	return 0;
}
