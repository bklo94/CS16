
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
	centimeters = round((static_cast<float>(a) - static_cast<float>(meters)) / static_cast<float>(.01));
}

void show_results(int meters, int centimeters) {
	cout << "conversion: " << meters << " meters and " << centimeters << " centimeters" <<endl;
}

int main() {
	int feet = 0, inches = 0, meters = 0, centimeters = 0;
	double dfeet;
	get_length(feet, inches);
	dfeet = feet_plus_fraction(feet, inches);
	convert(dfeet, meters, centimeters);
	show_results(meters, centimeters);
    return 0;
}
