#include <iostream>
using namespace std;

long long ucln(long long a, long long b){
	if(a == 1 || b == 1){
		return 1;
	}
	while(a != b){
		if(a > b){
			a -= b;
		}
		else{
			b -= a;
		}
	}
	return a;
}
long long bcnn(long long a, long long b){
	if(ucln(a, b) == 0){
		return 0;
	}
	return a * b / ucln(a, b);
}
int main(){
	long long a, b;
	int n;
	cin >> n;
	while(n--){
		cin >> a;
		cin >> b;
		cout << bcnn(a, b) << " " << ucln(a, b) << endl;
	}
	return 0;
}
