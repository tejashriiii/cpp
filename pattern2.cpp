#include<iostream>

using namespace std;

int main() {
	int i=1,k=1,  n=5;
	while (i<n){
		for (int j=1; j<n;j++){
			cout << "* ";
		}
		cout << endl;
		i++;
	}
	cout << endl;
	while (k<n){
		cout << string(n,'*')<< endl;
		k++;
	}
	return 0;
}
