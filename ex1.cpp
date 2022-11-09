#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int test;
	cin >> test;
	while (test--){
	vector <int > v;
	vector <int > :: iterator p;
	int n,value;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> value;
		v.push_back(value);
	}
	int min1 = v.front();
	for (p = v.begin(); p != v.end(); ++p)
		if(*p < min1)
			min1 = *p;
		
	int min2 = 9999999;
	for (p = v.begin(); p != v.end(); ++p){
		if (*p < min2 && *p > min1)
		min2 = *p;
	}
	if (min2 != 9999999) cout << min1 << " " << min2 << endl;
	else cout << -1 << endl;
	}
	return 0;
}
