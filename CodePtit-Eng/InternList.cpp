#include<bits/stdc++.h>
using namespace std;

struct Students {
	int index;
	string id, name, lop, email, corp;	
};

void input(Students &sv,int index) {
	sv.index = index + 1;
	fflush(stdin);
	scanf("\n");
	cin >> sv.id;
	scanf("\n");
	getline(cin,sv.name);
	string s = "",luu;
	stringstream st(sv.name);
	while(st >> luu) {
		s+= luu + " ";
	}
	sv.name = s;
	scanf("\n");
	cin >> sv.lop;
	scanf("\n");
	cin >> sv.email;
	scanf("\n");
	cin >> sv.corp;
}

bool cmp1(Students &a, Students &b) {
	return a.id < b.id;	
}

int main() {
	int n;
	cin >> n;
	Students sv[1000];
	int index = 0;
	for(int i=0;i<n;i++) {
		input(sv[index],index);
		index++;	
	}
	sort(sv,sv+n,cmp1);
	int x; cin >> x;
	string s;
	for(int i=0;i<x;i++) {
		cin >> s;
		for(int i=0;i<n;i++) {
			if(sv[i].corp==s) {
				cout << sv[i].index << " " << sv[i].id << " " << sv[i].name;
				cout << sv[i].lop << " " << sv[i].email << " " << sv[i].corp << endl;
			}
		}
	}
}