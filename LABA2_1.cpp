#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int X, Y, Z;
	cin>>X>>Y>>Z;
	
	if (X % 2 != 0 && Y % 2 != 0) cout<<"condition is true"<<endl;

	else cout<<"condition is false"<<endl;

	if ((X < 20 && Y >= 20) || (X >= 20 && Y < 20)) cout<<"condition is true"<<endl;

	else cout<<"condition is false"<<endl;

    if (X == 0 || Y == 0) cout<<"condition is true"<<endl;

    else cout<<"condition is false"<<endl;

    if (X < 0 && Y < 0 && Z < 0) cout<<"condition is true"<<endl;

    else cout<<"condition is false"<<endl;

    if ( (X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0) ) cout<<"condition is true"<<endl;

    else cout<<"condition is false"<<endl;

    if (X > 100 || Y > 100 || Z > 100) cout<<"condition is true"<<endl;

    else cout<<"condition is false"<<endl;

	return 0;
}
