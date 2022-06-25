#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Point {
	public:
		double x;
		double y;
};

int main() {
	int t;
	cin >> t;
	while(t--) {
		Point Cord1;
		Point Cord2;
		cin >> Cord1.x >> Cord1.y >> Cord2.x >> Cord2.y;
		
		double kq = sqrt((Cord1.x-Cord2.x)*(Cord1.x-Cord2.x)+(Cord1.y-Cord2.y)*(Cord1.y-Cord2.y));
		cout << setprecision(4) << fixed << kq << endl; 
	}
}