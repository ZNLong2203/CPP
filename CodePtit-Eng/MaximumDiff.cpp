#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n) {
	int min = a[0];
	int max_diff = a[1]-a[0];
	for(int i=2;i<n;i++) {
		if(a[i] - min > max_diff) {
			max_diff = a[i] - min;
		}
		if(a[i] < min) { 
			min = a[i];
		}
	}
	if(max_diff < 0) {
		return -1;
	}	else return max_diff;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[100000];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		cout << check(a,n) << endl;
	}
}