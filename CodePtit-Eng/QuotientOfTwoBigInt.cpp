#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void modBigNumber(string num, string m) {
    vector<int> vec;
    ll mod = 0;
 
    // Do step by step division
    for (int i = 0; i < num.size(); i++) {
          
        ll digit = num[i] - '0';
 
        // Update modulo by concatenating
        // current digit.
        mod = mod * 10 + digit;
 
        // Update quotient
        ll quo = mod / m;
        vec.push_back(quo);
 
        // Update mod for next iteration.
        mod = mod % m;       
    }
    // Flag used to remove starting zeros
    bool zeroflag = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == 0 && zeroflag == 0)
            continue;
        zeroflag = 1;
        cout << vec[i];
    }
    return;
}
 
// Driver Code
int main() {
	int t;
	cin >> t;
	while(t--) {
		string num, m;
	    cin >> num >> m;
	    modBigNumber(num, m);	
	}
    return 0;
}