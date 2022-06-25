#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[10000]={0};
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	int bien=15;
	int i=1;
	int xet=a[0];
	while(bien >= xet && i<n) {
		i++;
		xet=a[i];
		bien=a[i-1]+15;
		if(bien>=90) {
			bien=90;
		}
	}
	if(n==1 && a[0]<=15) {
		bien+=a[0];
	}	
	cout << bien;
}