#include<bits/stdc++.h>
using namespace std;

string findSum(string str1,string str2) {
	if(str1.size()>str2.size()) {
		swap(str1,str2);
	}	
	string str="";
	int n1=str1.size();
	int n2=str2.size();
	int diff=n2-n1;
	int carry=0;
	
	//Traverse from end of both strings
	for(int i=n1-1;i>=0;i--) {
		int sum =((str1[i]-'0')+(str2[i+diff]-'0')+carry);
		str.push_back(sum%10+'0');
		carry=sum/10;
	}
	//Add remaining digits of str2[]
	for(int i=n2-n1-1;i>=0;i--) {
		int sum =((str2[i]-'0')+carry);
		str.push_back(sum%10+'0');
		carry=sum/10;
	}
	//Add remaining carry
	if(carry!=0) {
		str.push_back(carry+'0');
	}
	reverse(str.begin(),str.end());
	return str;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str1;
		string str2;
		cin >> str1 >> str2;
		cout << findSum(str1,str2) << endl;
	}
}