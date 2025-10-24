#include<iostream>
using namespace std;

int main(){
	int a, b, sub;
	cout << "subtract a and b :";
	cin >> a >> b;
	sub= a-b;
	cout << "its:" << sub<< endl;

	cout << (a< sub)<< endl; //0
	cout << (a==b && sub==0)<< endl; //1 if both same
	return 0;
}
