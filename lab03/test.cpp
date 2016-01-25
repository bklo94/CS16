#include <iostream>
using namespace std;

int main( )
{
int m,n, sum = 0;
cin >> m;
cin >> n;

for (m; m <= n; m++){
	sum = sum + m;
}
cout << sum;
}
