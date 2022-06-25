#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien {
	string msv, name, lop;
	double m1,m2,m3;
};

bool cmp(SinhVien a, SinhVien b) {
	return a.name < b.name;	
}

void nhap(SinhVien &ds) {
	cin >> ds.msv;
	fflush(stdin);
	scanf("\n");
	getline(cin,ds.name);
	cin >> ds.lop;
	cin >> ds.m1 >> ds.m2 >> ds.m3;
}

void sap_xep(SinhVien ds[], int n) {
	sort(ds,ds+n,cmp);
}

void in_ds(SinhVien ds[], int n) {
	for(int i=0;i<n;i++) {
		cout << i+1 << " " << ds[i].msv << " " << ds[i].name << " ";
		cout << ds[i].lop << setprecision(1) << fixed << " " << ds[i].m1 << " " << ds[i].m2 << " " << ds[i].m3 << endl;
	}	
}

int main() {
 	int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}