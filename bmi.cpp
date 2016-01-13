#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
   double pounds,inches;
   cout << "enter pounds and inches: " << endl;
   cin >> pounds >> inches;

   double BMI, kg, m;
   kg = 0.453592*pounds;
   m = 0.0254*inches;
   BMI = kg/(pow(m,2));

   cout.precision(3);
   cout << "BMI is " << BMI << endl;

   cout << "  Underweight? ";
   if (BMI < 18.5)
      cout << "yes";
   else
      cout << "no";
   cout << endl;
   cout << "  Normal? ";
   if (BMI >= 18.5 && BMI < 24.9)
      cout << "yes";
   else
      cout << "no";
   cout << endl;
   cout << "  Overweight? ";
   if (BMI >= 25 && BMI < 30)
      cout << "yes";
   else
      cout << "no";
   cout << endl;
   cout << "  Obese? ";
   if (BMI >= 30)
      cout << "yes";
   else
      cout << "no";
   cout << endl;
}
