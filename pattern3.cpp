#include<iostream>

using namespace std;

int main () {
	//1
	//21
	//321
	int n=4;

	for (int i=0;i<n;i++){
		for (int j=i+1;j>0;j--){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
