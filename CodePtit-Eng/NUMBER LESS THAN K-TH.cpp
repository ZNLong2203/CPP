#include<bits/stdc++.h>
using namespace std;

void work(int a[],int n,int x) {
 	int cnt = 0;
 	int tmp = 0;
    for(int i = 0; i < n; ++i) {
    	if(a[i] <= x) cnt++;	
	} 
    for(int i = 0; i < cnt; ++i) {
    	if(a[i] > x) tmp++;	
	}
    int kq = tmp;
    for (int i = 0, j = cnt; j < n; i++, j++) {
        if (a[i] > x) tmp--;
        if (a[j] > x) tmp++;
        kq = min(kq, tmp);
    }
    cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,x;
		cin >> n >> x;
		int a[100000];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		work(a,n,x);
	}
}