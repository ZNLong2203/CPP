#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Students {
	public:
		string name, dob;
		string day, month, year;
		void input() {
			cin >> name;
			cin >> dob;
			day = dob.substr(0,1);
			month = dob.substr(3,4);
			year = dob.substr(6,9);
		}	
};

bool cmp(Students a, Students b) {
	if(a.year == b.year) {
		if(a.month == b.month) {
			return a.day < b.day;
		} else return a.month < b.month;
	} else return a.year < b.year;
}

int main() {
	int n;
	cin >> n;
	Students sv[n+5];
	for(int i=0;i<n;i++) {
		sv[i].input();
	}
	sort(sv,sv+n,cmp);
	cout << sv[n-1].name << endl << sv[0].name << endl;
}