#include<bits/stdc++.h>
using namespace std;

struct Time {
	int hour;
	int min;
	int se;
	long long sumTime;
	void input() {
		cin >> hour >> min >> se;
	}
};

void sumTime(Time &ti) {
	ti.sumTime = ti.hour*60*60 + ti.min*60 + ti.se;	
}

bool cmp(Time &a , Time &b) {
	return a.sumTime < b.sumTime;	
}

int main() {
	Time ti[5000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		ti[i].input();
		sumTime(ti[i]);
	}
	sort(ti,ti+n,cmp);
	for(int i=0;i<n;i++) {
		cout << ti[i].hour << " " << ti[i].min << " " << ti[i].se << "\n";
	}
}