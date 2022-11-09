#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m, n, a, b, test, temp;
	cin >> test;
	while(test--){
		cin >> m >> n >> a >> b;
		int count = 0;
		if(m > n){
			temp = m;
			m = n;
			n = temp;
		}
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0)
				count++;
		}
		cout << count << " " << endl;
	}
	return 0;
}
