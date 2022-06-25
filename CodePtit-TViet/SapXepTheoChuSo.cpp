#include<bits/stdc++.h> 
using namespace std; 

bool cmp(int a, int b) { 
	return to_string(a) + to_string(b) > to_string(b) + to_string(a); 
} 

int main() { 
	int t;
	cin >> t; 
	while (t--) { 
		int n;
		cin >> n; 
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			v.push_back(x);
		} 
		sort(v.begin(),v.end(),cmp); 
		for (int i = 0; i < n; i++) cout << v[i]; 
		cout << endl; 
	} 
}