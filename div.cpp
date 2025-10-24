#include<iostream>
using namespace std;

int main() {
	int a,b; //this is beacuse if the user will give 1, 2 as values instead of  1.0 2.0 , the division wont happen, result of double needs double values to divide, if that makes sense
	double div;
	cout << "give 2 numbers:" << endl;
	cin >> a >> b;
	div= (double)a/b; //converting manually the int/int = int value we got into a double
	cout << "dividing a and b:" << div;

	return 0;
}
