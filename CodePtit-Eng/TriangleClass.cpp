#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Triangle {
	public:
		float x1,y1;
		float x2,y2;
		float x3,y3;
};

void input(Triangle &tg) {
	cin >> tg.x1 >> tg.y1;
	cin >> tg.x2 >> tg.y2;
	cin >> tg.x3 >> tg.y3;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		Triangle tg;
		input(tg);
		double c1=sqrt((tg.x1-tg.x2)*(tg.x1-tg.x2)+(tg.y1-tg.y2)*(tg.y1-tg.y2));
		double c2=sqrt((tg.x3-tg.x2)*(tg.x3-tg.x2)+(tg.y3-tg.y2)*(tg.y3-tg.y2));
		double c3=sqrt((tg.x1-tg.x3)*(tg.x1-tg.x3)+(tg.y1-tg.y3)*(tg.y1-tg.y3));
		if(c1+c2 > c3 && c1+c3 > c2 && c2+c3 > c1) {
			double cv = c1+c2+c3;
			cout << setprecision(3) << fixed << cv << endl;	
		}	else {
			cout << "INVALID" << endl;
		}
	}	return 0;
}
