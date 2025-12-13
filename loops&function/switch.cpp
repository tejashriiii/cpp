//switch case example: days in week

#include <iostream>

using namespace std;

int main(){
	int week;
	cout << "enter a number (1-7):";
	cin >> week;
	switch(week){
		case 1: //youll need to use ' ' for char, like 'A':
			cout << "Its monday.";
			break;
		case 2: cout << "its tuedsay"; break;	
		case 3: cout << "its wed"; break;	
		case 4: cout << "its thur"; break;	
		case 5: cout << "its fri"; break;	
		case 6: cout << "its sat"; break;	
		case 7: cout << "its sun"; break;
		default:
			cout << "number should be between 1 and 7!" << endl;
	};
	return 0;
};

