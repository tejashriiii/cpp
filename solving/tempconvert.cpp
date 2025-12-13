//convert temperature celsius fahrenheit
#include <iostream>

using namespace std;

int main(){
	double temp;
	int convert;
	cout << "enter temperature: ";
	cin >> temp;
	cout << "convert to? (1= Celsius, 2= Fahrenheit): ";
	cin >> convert;

	switch (convert){
		case 1: 
			temp = (temp-32.0)/1.8;
			cout << temp;
			break;
		case 2:
			temp = (1.8*temp)+32.0;
			cout << temp;
			break;
		default:
			cout << "number should be 1 or 2 only";
		}
	return 0;
}
