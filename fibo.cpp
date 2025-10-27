#include<iostream>
using namespace std;

int fibo(int n){
	if (n ==0 || n==1){
		return n;
	}
	else{
		return (fibo(n-1)+ fibo(n-2)); //for i= 2 itll give fibo(2-1)+fibo(2-2)= 1+0=1.
	}
}

int main(){
	int a = 10;
	for (int i=0; i<a; i++){
		cout << fibo(i)<< ", ";
	}
	return 0;
}

