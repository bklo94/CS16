// Brandon Lo,Jasmine Moses  9/7/15 
 #include <iostream>
 using namespace std;
 
 int main()
 {
     // DECLARE VARIABLES
	int quarters, dimes, nickels, total;
     
     // GET NUMBERS OF COINS BY TYPE (REMEMBER TO
     // PROMPT USER BEFORE GETTING EACH ONE)
	cout << "Enter number of quarters:" << endl;
	cin >> quarters;
	cout << "Enter number of dimes:" << endl;
	cin >> dimes;
	cout << "Enter number of nickels:" << endl;
	cin >> nickels;
     
     
     // CALCULATE AND PRINT RESULTS
	total = 25 * quarters + 10 * dimes + 5 * nickels;
	cout << "The coins are worth " << total <<" cents." << endl;     
     
 
     return 0;
 }

