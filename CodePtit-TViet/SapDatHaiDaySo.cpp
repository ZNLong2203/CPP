#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
    cin >> n >> m;
    int a[n+5], b[m+5];
    vector<int> v;
    map<int, int> mp;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++) cin >> b[i];
    sort(a, a + n);
    for(int i=0;i<m;i++){
        int tmp = mp[b[i]];
        for(int j=0;j<tmp;j++) {
            v.push_back(b[i]);
            mp[b[i]]--;
        }
    }
    for(int i=0;i<n;i++) if(mp[a[i]]) v.push_back(a[i]);
    for(int i=0;i<v.size();i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
}