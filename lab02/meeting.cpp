// Brandon Lo,Jasmine Moses 9/7/15 
#include <iostream>
using namespace std;

int main ( )
{
	int capacity, present, legal;

	cout << "Enter maximum room capacity:" << endl;
	cin >> capacity;
	cout << "Enter number of people present:" << endl;
	cin >> present;
	
	if ( present <= capacity){
	legal = capacity - present;
	cout << "Meeting is legal."  << endl;
	}
	
	else{
	legal = present - capacity;
	cout << "Meeting cannot be held unless " << legal << " leave." << endl;
	}

	return 0;
}
		
