#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,xet;
		cin >> n;
		int count=0;
		int a[20]={1000,500,200,100,50,20,10,5,2,1};
		for(int i=0;i<10;i++) {
			if(n-a[i]>=0) {
				xet=n/a[i];
				count+=xet;
				n-=a[i]*xet;
			} 
		}
		cout << count << endl;
	}
}
