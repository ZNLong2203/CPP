#include<bits/stdc++.h>
using namespace std;

struct Employee {
	string name;
	string gen;
	string dob;
	string add;
	string sdt;
	string iden;
};

void input(Employee &lst) {
	fflush(stdin);
	scanf("\n");
	getline(cin,lst.name);
	fflush(stdin);
	scanf("\n");
	getline(cin,lst.gen);
	fflush(stdin);
	scanf("\n");
	getline(cin,lst.dob);
	fflush(stdin);
	scanf("\n");
	getline(cin,lst.add);
	fflush(stdin);
	scanf("\n");
	getline(cin,lst.sdt);
	fflush(stdin);
	scanf("\n");
	getline(cin,lst.iden);	
	fflush(stdin);
}

void printlist(Employee *lst,int n) { 
	int k=0;
	string in;
	for(int i=0;i<n;i++) {
		k++;
		if(k<10) {
			in ="0000";
		}	else in = "000";
		cout << in << k << " " << lst[i].name << " " << lst[i].gen << " ";
		if(lst[i].dob[1]=='/') {
			cout << "0";
		}
		for(int j=0;j<lst[i].dob.size();j++) {
			cout << lst[i].dob[j];
			if(lst[i].dob[j+2]=='/' && lst[i].dob[j]=='/') {
				cout << "0";
			}
		}
		cout << " " << lst[i].add << " " << lst[i].sdt << " ";
		if(lst[i].iden[1]=='/') {
			cout << "0";
		}
		for(int j=0;j<lst[i].iden.size();j++) {
			cout << lst[i].iden[j];
			if(lst[i].iden[j+2]=='/' && lst[i].iden[j]=='/') {
				cout << "0";
			}
		}
		cout << endl; 	
	}	
}

int main() {
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}