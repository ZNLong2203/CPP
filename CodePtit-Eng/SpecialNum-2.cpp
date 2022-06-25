#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll p = 1;
        ll ans = 0;
        for(int j=0;j<32;j++){
            if(k & (1<<j)){
                ans = (ans + p) % mod;
            }
            p *= n;
            p %= mod;
        }
        cout << ans << "\n";
    }
}