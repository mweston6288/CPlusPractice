#include <iostream>
using namespace std;

int main(){
	int day = 4;
	switch (day){
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		default:
			cout << "Sunday";
	}
	cout << "\n";
	
	int i = 0;
	while (i < 5){
		cout << i++ <<"\n";//i++ still works in cout
	}

	do{
		cout << i--<<"\n";
	}while(i > 0);
}