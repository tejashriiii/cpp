#include<iostream>

using namespace std;

void name();
void name(string abc);
void name(string abc, string xyz);
int main(){
	name();
	name("tejashri");
	name ("tejashri","maske");
	return 0;
}
void name(){
	cout << "you have a name!\n";
}
void name(string abc){
	cout << "your name is" << abc<< "\n";
}
void name(string abc, string xyz){
	cout << "your name is" << abc<< xyz << "\n";
}
