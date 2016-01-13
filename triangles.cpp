#include <iostream>
using namespace std;
int main ()
{
   string tri = "*";
   int number, size;
   while (true){
   cout << "enter number and size of triangles" << endl;
   cin >> number >> size;
   if (number >=5 || number <= 0){
      cout << "number must be between 1 and 4" << endl;
      }
   if (size < 1){
      cout << "size must be greater than 0" << endl;
      }
   if (number > 4 || number < 1 || size <= 0){
      cout << "enter number and size of triangles" << endl;
      cin >> number >> size;
      }
   if ( number == 1){
      for(int a = 1; a <= size; a++) {
         for (int b = 1; b <= a; b++){
            cout << tri; //TRIANGLE 1
         }
      cout << endl;
      }
   return 0;
   }
   if (number ==2){
      int e = size;
      for(int a=1;a <= e;a++){
         for(int b=0;b<a;b++){
            cout<<"*" ;  // TRIANGLE 1
            }
            int d = size;
            d = 2*a - d;
            for(int c= d ;c <= a ;c++){
            cout<<" ";  // TRIANGLE SPACE 1
            }
            for (int x = 0; x+a <= e; x ++){
            cout <<"*"; // TRIANGLE 2
            }
         cout<<endl;
      }
   return 0;
   }
   if (number == 3){
      int e = size;
      for(int a=1;a <= e;a++){
         for(int b=0;b<a;b++){
            cout<<"*" ;  // TRIANGLE 1
            }
            int d = size;
            d = 2*a - d;
            for(int c= d ;c <= a ;c++){
            cout<<" ";  // TRIANGLE SPACE 1
            }
            for (int x = 0; x+a <= e; x ++){
            cout <<"*"; // TRIANGLE 2
            }
            int g = size;
            g = 4*a -a -2;
            for(int c= g ;c >= a ;c--){
            cout<<" "; //TRIANGLE SPACE 2/3
            }
            for(int b=e;b>=a;b--){
            cout<<"*" ; //TRIANGLE 3
            }
         cout<<endl;
      }
   return 0;
   }
   if (number == 4){
      int e = size;
      for(int a=1;a <= e;a++){
         for(int b=0;b<a;b++){
            cout<<"*" ;  // TRIANGLE 1
            }
            int d = size;
            d = 2*a - d;
            for(int c= d ;c <= a ;c++){
            cout<<" ";  // TRIANGLE SPACE 1
            }
            for (int x = 0; x+a <= e; x ++){
            cout <<"*"; //TRIANGLE 2
            }
            int g = size;
            g = 4*a -a -2;
            for(int c= g ;c >= a ;c--){
            cout<<" "; //PYRAMID SPACE FOR TRIANGLE 2/3
            }
            for(int b=e;b>=a;b--){
            cout<<"*" ; //TRIANGLE 3
            }
            int k = size;
            k = 2* a - k;
            for(int l= k ;l <= a ;l++){
            cout<<" ";  // TRIANGLE SPACE 4
            }
            for(int b=0;b<a;b++){
            cout<<"*" ;  // TRIANGLE 4
            }
         cout<<endl;
      }
   return 0;
   }
}

return 0;
}
