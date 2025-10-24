#include<iostream>
using namespace std;

int main(){
	//ternary statement:
	int a=-10,b,i=1,evens=0, sum=0;
	cout << (a>0? "positive": "negative")<< "\n give me a number" <<endl;

	//while:
	
	cin >> b;
	while (i<b){
		if (i%2==0){
			evens++;
			//cout << i << "\n";
		}	
		i++;
	}
	cout<< "the number of evens in given range are:" << evens << endl;
	
	//sum of numbers with for loop
        
	// for (initialization; condition; updation){ smtn; }	
	
	for (int j=0 ;j<=b;j++){
		sum+=j;
	}
	cout << "sum of all nos until your given no is:"<< sum;
	return 0;
}
