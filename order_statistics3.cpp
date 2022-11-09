#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int test, n, k;
	long a[10009], b[105][105];
	cin >> test;
	while(test--){
		cin >> n >> k;
		long m = 1;
		for(long i = 1; i <= n; i++){
			for(long j = 1; j <= n; j++){
				cin >> b[i][j];
				a[m] = b[i][j];
				m++;
			}
		}
		sort(a, a + m);
		cout << a[k] << endl;
	}
	return 0;
}
