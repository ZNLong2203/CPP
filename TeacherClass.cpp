#include<bits/stdc++.h>
using namespace std;

class Teacher {
	public:	
		string id;
		string name;
		long long sl;
		long long fund;
		long long sllevel;
		void input() {
			fflush(stdin);
			scanf("\n");
			getline(cin,id);
			fflush(stdin);
			scanf("\n");
			getline(cin,name);
			fflush(stdin);
			scanf("\n");
			cin >> sl;
		}
};

void funds(Teacher &gv) {
	if(gv.id[1]=='T') {
		gv.fund=2000000;
	}	else if (gv.id[1]=='P') {
		gv.fund=900000;
	}	else if (gv.id[1]=='V') {
		gv.fund=500000;
	}
}

void level(Teacher &gv) {
	if(gv.id[2]==0) {
		gv.sllevel=gv.id[3]-'0';
	}	else {
		gv.sllevel=(gv.id[2]-'0')*10+(gv.id[3]-'0');
	}
}

int main() {
	Teacher gv;
	gv.input();
	funds(gv);
	level(gv);
	cout << gv.id << " " << gv.name << " " << gv.sllevel << " ";
	cout << gv.fund << " " << gv.sllevel*gv.sl + gv.fund;
}