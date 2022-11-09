#include <bits/stdc++.h>
using namespace std;
vector <string> tu;

int main(){
	string s;
	getline(cin, s);
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
	if (temp.size() > 0) tu.push_back(temp);
	for(int i = 0; i < tu.size() - 1; i++){
		if(tu[i][0] >= 'a' && tu[i][0] <= 'z'){
			tu[i][0] -= 32;
		}
	}
	for(int i = 0; i < tu[tu.size() - 1].size(); i++){
		if(tu[tu.size() - 1][i] >= 'a' && tu[tu.size() - 1][i] <= 'z'){
			tu[tu.size() - 1][i] -= 32;
		}
	}
	for(int i = 0; i < tu.size() - 1; i++){
		cout << tu[i];
		if(i == tu.size() - 2){
			cout << ",";
		}
		else{
			cout << " ";
		}
	}
	cout << " " << tu[tu.size() - 1] << endl;
	return 0;
}
