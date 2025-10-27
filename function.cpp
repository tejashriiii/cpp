#include<iostream>

using namespace std;

int min(int a, int b){
	if (a>b){
		return b;
	}
	else {
		return a;
	}
}
//there are int functions(return integer), double functions (decimal values) and void functions(return; nothing). but no char functions.

//factorial
int fact(int n){
	int fac=1;
	for (int i=n;i>1;i--){
		fac = fac*i; 
	}
	return fac;
}

int main(){
	cout << min(1,1) << endl;
	cout << fact(4) <<endl;
	return 0;
}


