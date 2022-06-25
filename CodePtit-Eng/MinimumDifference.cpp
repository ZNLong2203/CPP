#include <bits/stdc++.h>
using namespace std;
 
int findMinDiff(int arr[], int n){
   sort(arr, arr+n);
   int diff = INT_MAX;
   for (int i=0; i<n-1; i++)
        if (arr[i+1] - arr[i] < diff) {
        	diff = arr[i+1] - arr[i];	
		}
   return diff;
}

int main() {
   int t;
   cin >> t;
   while(t--) {
   	    int n;
   	    cin >> n;
   	    int arr[100000];
   	    for(int i=0;i<n;i++) {
   	    	cin >> arr[i];
		}
	    cout << findMinDiff(arr, n) << endl;
   } 	
}
