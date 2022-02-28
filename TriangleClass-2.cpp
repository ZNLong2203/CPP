#include<bits/stdc++.h>
#include<math.h>
using namespace std;
struct Triangle {
	double x1,y1;
	double x2,y2;
	double x3,y3;
	void input() {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
	}
};

double check(Triangle &tg,double a,double b,double c) {
	if(a+b<=c || a+c<=b || b+c<=a) {
		return 0;
	}	else {
		double s = 0.25*(sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)));
		return s;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		Triangle tg;
		tg.input();
		double a=sqrt((tg.x1-tg.x2)*(tg.x1-tg.x2)+(tg.y1-tg.y2)*(tg.y1-tg.y2));
		double b=sqrt((tg.x1-tg.x3)*(tg.x1-tg.x3)+(tg.y1-tg.y3)*(tg.y1-tg.y3));
		double c=sqrt((tg.x2-tg.x3)*(tg.x2-tg.x3)+(tg.y2-tg.y3)*(tg.y2-tg.y3));
		if(check(tg,a,b,c)==0) {
			cout << "INVALID" << endl;
		}	else {
			double kq = check(tg,a,b,c);
			cout << setprecision(2) << fixed << kq << endl;
		}
	}
}
