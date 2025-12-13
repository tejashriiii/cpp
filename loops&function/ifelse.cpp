#include<iostream>
using namespace std;

int main() {
	int no;
	cout << "give one number: ";
	cin >> no;
	if(no%2==0 && no !=0){
		cout << "its even no.\n";
	}else if(no %2 != 0){
		cout << "its odd no.\n";
	}else{
		cout << "its probably a 0";
	}
	return 0;
}


