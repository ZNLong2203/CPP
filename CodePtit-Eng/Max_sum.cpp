#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	int maxPathSum(int arr1[], int arr2[], int m, int n) {
	    int i=0,j=0,result=0,sum1=0,sum2=0;
	    
	    while(i<m && j<n){
	        if(arr1[i]<arr2[j]){
	            sum1+=arr1[i];
	            i++;
	        }
	        else if(arr1[i]>arr2[j]){
	            sum2+=arr2[j];
	            j++;
	        }
	        else{
	            result+=max(sum1,sum2)+arr1[i];
	            sum1=0;
	            sum2=0;
	            i++;
	            j++;
	        }
	        
	    } 
	    while(i<m) sum1+=arr1[i++];
	    while(j<n) sum2+=arr2[j++];
	    
	    result+=max(sum1,sum2);
	    return result;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int arr1[100000], arr2[100000];
        for (int i = 0; i < m; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maxPathSum(arr1, arr2, m, n);
        cout << ans << "\n";
    }
    return 0;
}  