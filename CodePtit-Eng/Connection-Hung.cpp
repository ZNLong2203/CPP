#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007; 
 
ll checkprime(ll n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}
 
int sieve[100000];
int p[100000];
long long ans = 1;
 
int main() {
    int n; 
	cin >> n; 
	n /= 2;
    for (int i = 2; i <= 2 * n; i++) {
        if (sieve[i] == 0) {
            for (int j = 2 * i; j <= 2 * n; j += i) {
                if (sieve[j] == 0)
                    sieve[j] = i;
            }
        }
    }
 
    for (int i = n + 2; i <= 2 * n; i++) {
        int x = i;
        while (sieve[x] != 0) {
            p[sieve[x]]++;
            x /= sieve[x];
        }
        p[x]++;
    }
 
    for (int i = 1; i <= n; i++) {
        int x = i;
        while (sieve[x] != 0) {
            p[sieve[x]]--;
            x /= sieve[x];
        }
        p[x]--;
    }
 
    for (int i = 2; i <= 2 * n; i++) {
        for (int j = 1; j <= p[i]; j++) 
            ans = (ans * i) % MOD;
    }
    cout << ans % MOD << endl;
}