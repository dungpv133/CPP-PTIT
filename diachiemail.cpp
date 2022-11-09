#include <bits/stdc++.h>
using namespace std;
vector <string> tu;

void result(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	string temp = "";
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' ')
		{
			if(temp != "")
			{
				tu.push_back(temp);
				temp = "";
			}
		}
		else
		{
			temp = temp + s[i];
		}
	}
	if(temp != "")
	{
		tu.push_back(temp);
	}
	cout << tu[tu.size() - 1];
	for(int i = 0; i < tu.size() - 1; i++){
		cout << tu[i][0];
	}
	cout << "@ptit.edu.vn\n";
}
int main(){
	string s;
	getline(cin, s);
	result(s);
	return 0;
}
