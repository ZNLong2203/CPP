#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		vector<int> v,kq;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v.push_back(x);
		}
		multiset<int> ms;
		for(int i=0;i<k;i++) {
			ms.insert(v[i]);
		}
		kq.push_back(*ms.rbegin());
		for(int i=k;i<n;i++) {
			ms.erase(ms.find(v[i-k]));
			ms.insert(v[i]);
			kq.push_back(*ms.rbegin());
		}
		for(auto x:kq) cout << x << " ";
		cout << endl;
	}
}