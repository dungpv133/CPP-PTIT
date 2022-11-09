#include <bits/stdc++.h>
using namespace std;

int n, stt;
string s;

void init(){
	cin >> stt;
	cin >> s;
	n = s.size() - 1;
}
void sinh(){
	int i = n - 1;
	while(s[i] >= s[i + 1] && i >= 0){
		i--;
	}
	int j = n;
	while(s[j] < s[i]){
		j--;
	}
	char temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	int t = i + 1;
	int r = n;
	while(t < r){
		temp = s[t];
		s[t] = s[r];
		s[r] = temp;
		r--;
		t++;
	}
}
bool isfinal(){
	for(int i = 1; i <= n; i++){
		if(s[i] >= s[i - 1]){
			return false;
		}
	}
	return true;
}
void result(){
	cout << stt << " ";
	for(int i = 0; i <= n; i++){
		cout << s[i];
	}
	cout << endl;
}
int main(){
	int test;
	cin >> test;
	while(test--)
	{
		init();
		if(isfinal())
		{
			cout << stt << " " << "BIGGEST" << endl;
			continue;
		}
		sinh();
		result();
	}
	return 0;
}
