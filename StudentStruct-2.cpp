#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

struct Student {
	string name;
	string lop;
	string dob;
	double diem;
	void fixnamev1() {
		int j=0;
		for(int i=0;i<name.size();i++) {
			if(name[i]==' ' && name[i+1]==' ') {
				continue;
			}	else {
				name[j]=name[i];
				j++;
			}
		}
		for(int i=j;i<name.size();i++) {
			name.erase(name.begin()+i+1);
		}
	}
	void fixname() {
		if(islower(name[0])) {
			name[0]-=32;
		}
		for(int i=1;i+1<name.size();i++) {
			if(name[i-1] == ' ' && islower(name[i])) {
				name[i]-=32;
			}	else if(isupper(name[i])) {
				name[i]+=32;
			}
		}
		if(isupper(name[name.size()-1])) {
			name[name.size()-1]+=32;
		}
	}
	void fixdate() {
		if(dob[1]=='/') dob.insert(0,"0");
		if(dob[4]=='/') dob.insert(3,"0");
	}
};

void input(Student lst[],int N) {
	for(int i=0;i<N;i++) {
		fflush(stdin);
		scanf("\n");
		getline(cin,lst[i].name);
		fflush(stdin);
		scanf("\n");
		getline(cin,lst[i].lop);
		fflush(stdin);
		scanf("\n");
		getline(cin,lst[i].dob);
		fflush(stdin);
		scanf("\n");
		cin >> lst[i].diem;	
	}
}
void print(Student lst[],int N) {
	int dem=1;
	for(int i=0;i<N;i++) {
		lst[i].fixnamev1();
		lst[i].fixname();
		lst[i].fixdate();
		cout << "B20DCCN0";
		if(i+1<=9) {
			cout << "0";
		}
		cout << dem << " " << lst[i].name << " " << lst[i].lop << " ";
		cout << lst[i].dob << " " << setprecision(2) << fixed << lst[i].diem << endl;
		dem++;
	}	
}

int main() {
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}