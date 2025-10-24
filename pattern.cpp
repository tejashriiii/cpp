#include<iostream>
using namespace std;


//    *
//   ***
//  *****
// *******
//*********

int main() {
	int lines=5, i=1;
	while (i<= lines){
		cout << string(lines-i,' ')
		       	<< string(2*i-1,'*')
			<<endl; //first give the operation then the print stmt string(a+b, '*');
		i++;
	}
	return 0;

}

