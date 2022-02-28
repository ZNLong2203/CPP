#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int n,k,temp;
int ans[MAX];

int main()
{
	cin >> n >> k;
	temp = k;
	if(n == 1 && !k) {
		puts("0 0");
		return 0;
	}
	if(!k)	puts("-1 -1");
	//else if(!k)	puts("0 0");
	else if(n * 9 < k)	puts("-1 -1");
	else {
		--k;
		for(int i = 1; i <= n; ++i) {
			if(k >= 9)
				ans[i] = 9,k -= 9;
			else if(k)
				ans[i] = k,k = 0;
			else
				ans[i] = 0;
		}
		++ans[n];
		for(int i = n; i; --i)
			printf("%d",ans[i]);
		putchar(' ');
		k = temp;
		for(int i = n; i; --i) {
			if(k > 9) {
				cout << 9;
				k -= 9;
			}
			else if(k){
				cout << k;
				k = 0;
			}
			else	cout << 0;
		}
	}
	return 0;
}