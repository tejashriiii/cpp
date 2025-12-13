#include<iostream>
using namespace std;


int fact(int n){
        int fac=1;
        for (int i=n;i>1;i--){
                fac = fac*i;
        }
        return fac;
}

double binomial(int n, int r){
	//ncr= n!/r!(n-r)!
	int n_fac = fact(n);
	int r_fac = fact(r);
	int the_fac = fact(n-r);
	double ncr = (double)n_fac/( r_fac * the_fac);
	return ncr;
}
int main(){
	cout << binomial(7,2);
	return 0;
}
