#include<bits/stdc++.h>
using namespace std;

struct Human {
	string name;
	string dob;	
	int day,month,year;
	void input() {
		cin >> name >> dob;
	}
};

bool cmp(Human &a,Human &b) {
	if(a.year < b.year) {
		return true;
	}	else if(a.year == b.year) {
		if(a.month < b.month) {
			return true;
		}	else if(a.month == b.month) {
			if(a.day < b.day) {
				return true;
			}
		}
	}
	return false;
}

void tachdob(Human &hm) {
	hm.day=(hm.dob[0]-'0')*10+hm.dob[1]-'0';
	hm.month=(hm.dob[3]-'0')*10+hm.dob[4]-'0';
	hm.year=(hm.dob[6]-'0')*1000+(hm.dob[7]-'0')*100+(hm.dob[8]-'0')*10+(hm.dob[9]-'0');	
}

int main() {
	Human hm[200];
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		hm[i].input();
		tachdob(hm[i]);
	}
	sort(hm,hm+n,cmp);
	cout << hm[n-1].name << "\n" << hm[0].name;
}