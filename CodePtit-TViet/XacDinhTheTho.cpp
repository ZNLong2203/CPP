#include<bits/stdc++.h>
using namespace std;

int line = 1;
int sobai = 0;
int mot = 0;
bool motcheck = false;
int hai = 0;
bool haicheck = false;
vector<int> v;

void solve(string s) {
	int count = 0;
	stringstream ss(s);
	while(ss >> s) {
		count++;
	}
	if(line%2!=0) {
		if(count==6 && motcheck==false) {
			mot++;
			motcheck = true;
			haicheck = false;
			sobai++;
			v.push_back(1);
		}	else if(count==7 && haicheck==false) {
			hai++;
			haicheck = true;
			motcheck = false;
			sobai++;
			v.push_back(2);
		}
	}
	line++;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		fflush(stdin);
		getline(cin,s);
		solve(s);	
	}
	cout << sobai << endl;
	for(auto x:v) {
		cout << x << endl;
	}
}