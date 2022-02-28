#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int curr = a[0], idx = 0;
	if (curr > 15) {
		cout << 15 << endl;
		return 0;
	}
	bool check = 1;
	for (int i = 1; i < n; i++) {
		curr = a[i] - a[i - 1];
		if (curr > 15) {
			check = 0;
			idx = i - 1;
			break;
		}
	}
	int ans;
	if (check == 0) ans = a[idx] + 15;
	else ans = a[n - 1] + 15;
	if (ans > 90) ans = 90;
	cout << ans;
}