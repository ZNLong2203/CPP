#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

class Rect {
	public:
		int length;
		int width;
		string color;
};

int main() {
	int length,width;
	string color;
	cin >> length >> width >> color;
	if(length <= 0 || width <= 0) {
		cout << "INVALID";
		return 0;
	}
	
	Rect Rect1;
	Rect1.length=length;
	Rect1.width=width;
	Rect1.color=color;
	
	if(islower(Rect1.color[0])) {
		Rect1.color[0]-=32;
	}
	for(int i=1;i<Rect1.color.size();i++) {
		if(isupper(Rect1.color[i])) {
			Rect1.color[i]+=32;
		}
	}
	long long perimeter = (Rect1.length + Rect1.width)*2;
	long long area = Rect1.length * Rect1.width; 
	cout << perimeter << " " << area << " " << Rect1.color;
	return 0;
}