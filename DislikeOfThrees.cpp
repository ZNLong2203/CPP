#include<bits/stdc++.h>
using namespace std;

int check(int n) {
	if(n%3==0 || (n%10)==3) {
		return 0;
	}	else return 1;
}
int main() {
	int n;
	cin >> n;
	int count=0;
	for(int i=0;i<100000;i++) {
		if(check(i)) {
			count++;
		}
		if(count==n) {
			cout << i;
			break;
		}
	}
}