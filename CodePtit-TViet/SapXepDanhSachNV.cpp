#include<bits/stdc++.h>
#define ll long long
using namespace std;

int cnt = 1;
struct NhanVien {
	string name, gen, dob, add, sdt, nk, xet, id;
};

bool cmp(NhanVien a, NhanVien b) {
	return a.xet < b.xet;	
}

void nhap(NhanVien &ds) {
	fflush(stdin);
	scanf("\n");
	getline(cin,ds.name);
	cin >> ds.gen >> ds.dob;
	fflush(stdin);
	scanf("\n");
	getline(cin,ds.add);
	cin >> ds.sdt >> ds.nk;	
	ds.xet = ds.dob.substr(6,9) + ds.dob.substr(0,1) + ds.dob.substr(3,4);
	if(cnt<10) ds.id = "0000" + to_string(cnt);
	else ds.id = "000" + to_string(cnt);
	cnt++;
}

void sapxep(NhanVien ds[], int n) {
	sort(ds,ds+n,cmp);
}

void inds(NhanVien ds[], int n) {
	for(int i=0;i<n;i++) {
		cout << ds[i].id << " " << ds[i].name << " " << ds[i].gen << " " << ds[i].dob << " " << ds[i].add;
		cout << " " << ds[i].sdt << " " << ds[i].nk << endl;
	}
}

int main() {
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}