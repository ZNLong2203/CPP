#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string str;
	   	cin >> str;
	    int arr[1000]={};
	    for(int i=0;i<str.size();i++) {
	        if(str[i]!=' ')
	        arr[str[i]]++;
	    }
	    for(int i=0;i<str.size();i++) {
	        if(arr[str[i]]==1) {
	            char c=(char)str[i];
	            cout<<c;
	        }
   	 	}
   	 	cout << endl;
	}
}
