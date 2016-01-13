//Brandon Lo 11/3/15
#include <iostream>
#include <cmath>
using namespace std;

void get_length(int &feet, int &inches) {
	cout << "enter feet and inches" <<endl;
	cin >> feet >> inches;
}

double feet_plus_fraction(int feet, int inches) {
	return static_cast<float>(feet) + (static_cast<float>(inches)/static_cast<float>(12));
}

void convert(double dfeet, int &meters, int &centimeters) {
	float a = static_cast<float>(dfeet) * static_cast<float>(0.3048);
	meters = int(a);
	centimeters = floor((static_cast<float>(a) - static_cast<float>(meters)) / static_cast<float>(.01));
}

void show_results(int meters, int centimeters) {
	cout << "conversion: " << meters << " meters and " << centimeters << " centimeters" <<endl;
}

void user_prompt(int &number) {
	cout <<"enter 1 for feet,inches to meters,centimeters, or" << endl;
	cout << "enter 2 for meters,centimeters to feet,inches" << endl;
	cin >> number;
}
void get_length2(int &meters, int &centimeters) {
	cout << "enter meters and centimeters" <<endl;
	cin >> meters >> centimeters;
}

double meters_plus_fraction(int meters, int centimeters) {
	return static_cast<float>(meters) + (static_cast<float>(centimeters)/100);
}

void convert2 (double dmeter, int &inches, int &feet){
	float b = static_cast<float>( dmeter) /static_cast<float>(0.3048);
	feet = int (b);
	inches = floor ((static_cast<float>( b) - static_cast<float>(feet)) * static_cast<float>(12));
}

void show_results2 (int feet, int inches) {
	cout << "conversion: " << feet << " feet and " << inches << " inches" <<endl;
}

void user_prompt2 (string& ans) {
	cout << "convert more?" << endl;
	cin >> ans;
}

void error(int numbers){
	do{
		cout << "enter 1 or 2 only" << endl;
		cin >> numbers;
	} while ((numbers != 1 || numbers != 2));
}

int main() {
	int feet = 0, inches = 0, meters = 0, centimeters = 0, number;
	double dfeet, dmeter;
	string ans;
	while(true){
			user_prompt(number);
			if (number == 1) {
				get_length(feet, inches);
				dfeet = feet_plus_fraction(feet, inches);
				convert(dfeet, meters, centimeters);
				show_results(meters, centimeters);
				user_prompt2(ans);
				if ((ans[0] == 'y') || (ans[0] == 'Y')) {
					continue;
				} else {
					break;
				}
			}
			if (number == 2) {
				get_length2(meters, centimeters);
				dmeter = meters_plus_fraction(meters, centimeters);
				convert2(dmeter, inches, feet);
				show_results2(feet, inches);
				user_prompt2(ans);
				if ((ans[0] == 'y') || (ans[0] == 'Y')) {
					continue;
				} else {
					break;
				}
			}
			if (number != 1 || number != 2){
				do {
					cout << "enter 1 or 2 only" << endl;
					cin >> number;
			}while (number != 1 || number != 2);
			}
	}
	return 0;
}
