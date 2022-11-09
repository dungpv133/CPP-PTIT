#include <bits/stdc++.h>
using namespace std;

void solve(string x, string y){
	vector <string> tu;
	string temp = "";
	for(int i = 0; i < x.size(); i++){
		if(x[i] == ' ' && temp != " "){
			tu.push_back(temp);
			temp = "";
		}
		else{
			temp = temp + x[i];
		}
	}
	if(temp != " "){
		tu.push_back(temp);
	}
	for(int i = 0; i < tu.size(); i++){
		if(tu[i] != y){
			cout << tu[i] << " ";
		}
	}
	cout << endl;
}
int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	solve(s1, s2);
	return 0;
}
