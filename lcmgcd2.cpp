#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long int ulli;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

ulli ucln(ulli a, ulli b){
	ulli tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
ulli bcnn(ulli a, ulli b){
	return a * b / ucln(a, b);
}
int main(int argc, char** argv) {
	ulli test, n;
	cin >> test;
	while(test--){
		cin >> n;
		ulli min = 1;
		for(ulli i = 2; i <= n; i++){
			min = bcnn(min, i);
		}
		cout << min << endl;
	}
	return 0;
}
