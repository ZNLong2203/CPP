#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct xe {
	string bs,loai,io,date;
	int soghe;
};

ll seat(xe n) {
	if(n.io == "OUT") return 0;
	if(n.loai == "Car") {
		if(n.soghe==5) return 10000;
		else return 15000;
	}
	if(n.loai == "Truck") return 20000;
	if(n.loai == "Bus") {
		if(n.soghe == 29) return 50000;
		else return 70000;
	}
}

int main() {
	int n;
	cin >> n;
	xe a[1000];
	for(int i=0;i<n;i++) {
		cin >> a[i].bs >> a[i].loai >> a[i].soghe >> a[i].io >> a[i].date;
	}
	unordered_map<string,ll> mp;
	vector<string> v;
	for(int i=0;i<n;i++) {
		if(!mp[a[i].date]) v.push_back(a[i].date);
		mp[a[i].date] += seat(a[i]);
	}
	for(auto x:v) {
		if(mp[x]) {
			cout << x << ": " << mp[x] << endl;
			mp[x]=0;
		}
	}
	return 0;
}