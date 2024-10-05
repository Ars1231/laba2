#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int X, Y, Z;
	cout << "1 - проверка каждое из чисел X и Y нечетное; " << endl;
	cout << "2 - только одно из чисел X и Y меньше 20; " << endl;
	cout << "3 - хотя бы одно из чисел X и Y равно нулю; " << endl;
	cout << "4 - каждое из чисел X, Y, Z отрицательное; " << endl;
	cout << "5 - только одно из чисел X, Y и Z кратно пяти; " << endl;
	cout << "6 - хотя бы одно из чисел X, Y, Z больше 100; " << endl;
	cout << "0 -выход из программы. " << endl;

	while(true){

	cin >> X >> Y >> Z;

	switch(x){
	case 1:
		//каждое из чисел X и Y нечетное;
		if (X % 2 != 0 && Y % 2 != 0) cout << "condition is true" << endl;
	
		else cout << "condition is false" << endl;
		
		break;
	case 2:
		//только одно из чисел X и Y меньше 20;
		if ((X < 20 && Y >= 20) || (X >= 20 && Y < 20)) cout << "condition is true" << endl;
	
		else cout << "condition is false" << endl;

		break;
	case 3:
		//хотя бы одно из чисел X и Y равно нулю;
	    	if (X == 0 || Y == 0) cout << "condition is true" << endl;
	
	  	else cout << "condition is false" << endl;

		break;
	case 4:
		//каждое из чисел X, Y, Z отрицательное;
	   	if (X < 0 && Y < 0 && Z < 0) cout << "condition is true" << endl;
	
	    	else cout << "condition is false" << endl;

		break;
	case 5:
		//только одно из чисел X, Y и Z кратно пяти;
	    	if ( (X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0) ) cout << "condition is true" << endl;
	
	   	else cout << "condition is false" << endl;

		break;
	case 6:
		//хотя бы одно из чисел X, Y, Z больше 100.
	   	if (X > 100 || Y > 100 || Z > 100) cout << "condition is true" << endl;
	
	   	else cout << "condition is false" << endl;

		break;
	case 7:
		return 0;
	
	}
	
	}
	return 0;
}
