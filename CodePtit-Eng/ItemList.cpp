#include<bits/stdc++.h>
using namespace std;

struct Item {
	int id;
	string name;
	string group;
	double buy;
	double sell;
	double profit;
	void input() {
		fflush(stdin);
		scanf("\n");
		getline(cin,name);
		fflush(stdin);
		scanf("\n");
		getline(cin,group);
		scanf("\n");
		cin >> buy >> sell;
	}	
};

void pf(Item &it) {
	it.profit=it.sell-it.buy;	
}

int main() {
	Item it[100];
	int t;
	cin >> t;
	int x=t;
	int dem=0;
	double a[200]={0};
	while(t--) {
		it[dem].input();
		pf(it[dem]);
		a[dem]=it[dem].profit;
		it[dem].id=dem+1;
		dem++;
	}
	sort(a,a+x);
	for(int i=x-1;i>=0;i--) {
		for(int j=0;j<x;j++) {
			if(it[j].profit == a[i]) {
				cout << it[j].id << " " << it[j].name << " " << it[j].group << " ";
				cout << setprecision(2) << fixed << it[j].profit << endl;
				break;
			}
		}
	}
	
}