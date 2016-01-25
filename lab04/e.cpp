// Brandon Lo and Jasmine Moses 10/21/15
// Lab 04
// calculates factorial of n as a double

#include <iostream> 
using namespace std; 

int main () {
double e = 1;
double n=1;
{
double product = 1;
while (n <= 170)
{
product = n * product;
e = 1/product + e;
n++;
}

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(8);
cout << "e is approximately "<< e << endl;
}
return 0;
}

