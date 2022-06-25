#include<bits/stdc++.h>
using namespace std;

bool isSmaller(string str1, string str2) {
    // Calculate lengths of both string
    int n1 = str1.size(), n2 = str2.size();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++) {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

string findMinus(string str1,string str2) {
	int carry=0;
	string str="";
	if(isSmaller(str1,str2)) {
		swap(str1,str2);
	}
	int n1=str1.size(),n2=str2.size();
	int diff = n1-n2,minus=0;
	for(int i=n2-1;i>=0;i--) {
		if((str1[i+diff]-'0')>=(str2[i]-'0')+carry) {
			minus = (str1[i+diff]-'0')-((str2[i]-'0')+carry);
			str.push_back(minus+'0'); 
			carry=0;
		}	else {
			minus = (10+(str1[i+diff]-'0'))-((str2[i]-'0')+carry);
			str.push_back(minus+'0'); 
			carry=1;
		}
	}
	for(int i=n1-n2-1;i>=0;i--) {
		if((str1[i]-'0')>=carry) {
			minus = (str1[i]-'0')-carry;
			str.push_back(minus+'0');
			carry=0;
		}	else {
			minus = (10+(str1[i]-'0'))-carry;
			str.push_back(minus+'0');
			carry=1;
		}
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
		cout << findMinus(str1,str2) << endl;
	}
	return 0;
}