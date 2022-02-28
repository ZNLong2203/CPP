#include<bits/stdc++.h>
#include<math.h>
using namespace std;

struct Point {
	float x;
	float y;
};

void input(Point &pt) {
	cin >> pt.x;
	cin >> pt.y;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		struct Point pt[2000];
		int n;
		cin >> n;
		int xet=n;
		int dem=0;
		while(xet--) {
			Point pt[dem];
			input(pt[dem]);
			dem++;
		}
		double area = 0;
	    int j = dem - 1;
	    for (int i = 0; i < dem; i++) {
	        area += (pt[j].x + pt[i].x) * (pt[j].y - pt[i].y);
	        j = i;  
	    }
	    area=abs(area/2);
	    cout << setprecision(3) << fixed << area;
	}
}