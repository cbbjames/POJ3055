#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n,kase=0;
	string org[16];
	string put[8];
	string stay[8];
	while (cin >> n, n) {
		int p = 0, s = 0;
		for (int i = 0; i < n;i++) {
			cin >> org[i];
			if (i % 2 == 1) put[p++] = org[i];
			else stay[s++] = org[i];
		}
		cout << "SET " << ++kase<<endl;
		for (int i = 0; i < s; i++)
			cout << stay[i] << endl;
		for (int i = p - 1; i >= 0; i--)
			cout << put[i] << endl;
	}

	//system("PAUSE");
	return 0;
}