#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,chay=0,luu=0;
		cin >> n;
		int a[200][200];
		int check[100000]={0};
		int dem=0;
		int kq[1000]={0};
		for(int i=0;i<n;i++) { // Scan Array and save the first row to Array check
			for(int j=0;j<n;j++) {
				cin >> a[i][j]; 
				if(i==0) {
					check[dem]=a[i][j];
					dem++;	
				}
			}
		}
		for(int i=1;i<n;i++) {
			luu=chay; //luu is the begin element to check with new row
			chay=dem; //chay is the last element to check with new row
			for(int j=0;j<n;j++) {
				for(int k=luu;k<chay;k++) {
					if(a[i][j]==check[k]) {	//if is have so we add a new element to the array and dem++
						check[dem]=a[i][j];
						dem++;
						break;
					}
				}
			}
		}
		luu=chay;
		int count=0;					
		for(int i=luu;i<dem;i++) {   //Check the frequency of element again 
			kq[check[i]]++;			//to find the exactly number of element
		}
		for(int i=luu;i<dem;i++) {
			if(kq[check[i]]>0) {
				count++;
				kq[check[i]]=0;
			}
		}
		cout << count;
		cout << endl; 
	}
}