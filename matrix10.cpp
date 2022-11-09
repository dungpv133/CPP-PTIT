#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hangcot(int a[], int n){
	for(int i = 0; i < n; i++){
		a[i] == 0;
	}
}
void nhap(int arr[][100], int n, int m, int b[], int c[]){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 1){
				b[i] = 1; c[j] = 1;
			}
		}
	}
}
void xuat(int n, int m, int b[], int c[]){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(b[i] == 1 || c[j] == 1) cout << "1 ";
			else cout << "0 ";
		}
		cout << endl;
	}
}
int main() {
	int test, n, m, a[100][100], b[100], c[100];
	cin >> test;
	while(test--){
		cin >> n;
		cin >> m;
		hangcot(b, n);
		hangcot(c, m);
		nhap(a, n, m, b, c);
		xuat(n, m, b, c);
	}
	return 0;
}
