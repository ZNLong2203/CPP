#include <bits/stdc++.h>
using namespace std;
 
// Utility method to construct left and right array
int preprocess(int arr[], int N, int left[], int right[]) {
    // Initialize first left index as that index only
    left[0] = 0;
    int lastIncr = 0;
 
    for (int i = 1; i < N; i++) {
        // if current value is greater than previous,
        // update last increasing
        if (arr[i] > arr[i - 1])
            lastIncr = i;
        left[i] = lastIncr;
    }
 
    // Initialize last right index as that index only
    right[N - 1] = N - 1;
    int firstDecr = N - 1;
 
    for (int i = N - 2; i >= 0; i--) {
        // if current value is greater than next,
        // update first decreasing
        if (arr[i] > arr[i + 1])
            firstDecr = i;
        right[i] = firstDecr;
    }
}
 
// Method returns true if arr[L..R] is in mountain form
bool isSubarrayMountainForm(int arr[], int left[], int right[], int L, int R) {
    // return true only if right at starting range is
    // greater than left at ending range
    return (right[L] >= left[R]);
}
 
//    Driver code to test above methods
int main() {
   	int t;
   	cin >> t;
   	while(t--) {
   		int N;
   		cin >> N;
   		int arr[10000];
   		for(int i=0;i<N;i++) {
   			cin >> arr[i];	
		}
	    int left[10000], right[10000];
	    preprocess(arr, N, left, right);
	 
	    int L,R;
	    cin >> L >> R;
	    if (isSubarrayMountainForm(arr, left, right, L, R))
	        cout << "Yes\n";
	    else
	        cout << "No\n";
	}
	return 0;
}