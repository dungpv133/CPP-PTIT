#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, t;
int a[100];
void init(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void result(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			result();
		}
		else{
			Try(i + 1);
		}
	}
}
int main(int argc, char** argv) {
	cin >> t;
	while(t--){
		init();
		Try(1);
		cout << endl;
	}
	return 0;
}
