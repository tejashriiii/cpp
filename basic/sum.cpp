#include<iostream>

using namespace std;

int main(){
	int a,b,sum;
	cout << "give values of a and b:";
	cin >> a >>b;
	sum= a+b;
	cout << "sum of a b is:"<< sum << endl;

	cout << (a==a&&b==b) << endl; //1
	cout << ((sum==a)||(sum == sum))<< endl;//1
	cout << (a != sum)<< endl;//1
	cout << (a==sum)<< endl;//0
	return 0;

}
