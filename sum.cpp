#include <iostream>
using namespace std;

int main ()
{ 
	int sum_less, sum_greater, total, sum, count_positive, count_negative, countdown;
	cout << "How many numbers will you enter?" << endl;
	cin >> countdown;
	cout << "Enter " << countdown << " whole numbers while I count down." << endl;
	
	sum_less = 0,
	sum_greater = 0,
	count_positive = 0, 
	count_negative = 0, 
	total = 0;

	while (countdown > 0)
	{
		cout << "Entries left to go: ";
		cin >> sum;

		if (sum >= 0)
		{
		sum_greater = sum_greater + sum;
		count_positive = count_positive + 1;
		} 
		
		if (sum <=0)
		{
		sum_less = sum_less + sum;
		count_negative = count_negative + 1;
		}
		
		total = total + sum
	}
	
	cout << "The sum of " << count_positive << " numbers greater than zero is " << sum_greater << endl;
	cout << "The sum of " << count_negative << " numbers less than zero is "<< sum_less << endl;
	cout << "The sum of all " << countdown << " numbers is " << total << endl;
 	return 0;
}

