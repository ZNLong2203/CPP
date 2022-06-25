#include<bits/stdc++.h>
using namespace std;

class Students {
	public:
	string id,name,lop,email;
	void input() {
		fflush(stdin);
		scanf("\n");
		cin >> id;
		fflush(stdin);
		scanf("\n");
		getline(cin,name); 
		fflush(stdin);
		scanf("\n");
		cin >> lop >> email;
	}	
};

bool cmp(Students &a , Students &b) {
	if(a.lop == b.lop) return a.id < b.id;
	else return a.lop < b.lop;
}

int main() {
	int n;
	cin >> n;
	Students hs[1000];
	for(int i=0;i<n;i++) {
		hs[i].input();
	}
	sort(hs,hs+n,cmp);
	for(int i=0;i<n;i++) {
		cout << hs[i].id << " " << hs[i].name << " " << hs[i].lop << " " << hs[i].email << endl;
	}
}