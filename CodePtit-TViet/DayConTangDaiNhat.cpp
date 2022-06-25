#include<bits/stdc++.h> 
using namespace std; 

int main() { 
	int k; cin >> k; 
	while(k--) { 
		int n; cin >> n; 
		int a[n+5]; 
		for(int i = 0; i < n; i++) cin >> a[i]; 
		int res[n+5]; 
		int cnt = 0; 
		for(int i = 0; i < n; i++) { 
			int max = 0; 
			for(int j = 0; j < i; j++) { 
				if(a[i] > a[j]) { 
					if(max < res[j]) max = res[j]; 
				}
			} 
			res[i] = max + 1; 
			cnt = cnt < res[i] ? res[i] : cnt; 
		} 
	cout << cnt << endl; 
	} 
}