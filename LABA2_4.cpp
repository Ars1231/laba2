#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, x;
	cout << "Введите 1, чтобы найти произведение всех целых чисел от 8 до 15."  << endl;
	cout << "Введите 2, чтобы найти произведение всех целых чисел от a до 20."  << endl;
	cout << "Введите 3, чтобы найти произведение всех целых чисел от 1 до b."  << endl;
	cout << "Введите 4, чтобы найти произведение всех целых чисел от a до b."  << endl;
	cout << "Введите 0, чтобы выйти из программы."  << endl;
	
	while(true){
		
	int proiz = 1;
	
	cin>>x;
	
    switch(x){
	
	case 1:
	    for (int i = 8; i <= 15; i++) {
	        proiz *= i;
	    }
	    cout << "Произведение всех целых чисел от 8 до 15: " << proiz << endl;
	    
	    break;


	case 2:
	    cout << "Введите значение a (1 < a < 20): " << endl;;
		cin>>a;
	    for (int i = a; i <= 20; i++) {
	        proiz *= i;
	    }
	    cout << "Произведение всех целых чисел от " << a << " до 20: " << proiz << endl;
	    break;

   case 3:
	    cout << "Введите значение a ( (a <= b) && (1 < b < 20) ): " << endl;
		cin>>b;
	    for (int i = 1; i <= b; i++) {
	        proiz *= i;
	    }
	    cout << "Произведение всех целых чисел от 1 до " << b << ": " << proiz << endl;
	    break;

	case 4:
	    cout << "Введите значение a (1 < a < 20): " << endl;;
		cin>>a;
    	cout << "Введите значение a ( (a <= b) && (1 < b < 20) ): " << endl;
    	cin>>b;
	    for (int i = a; i <= b; i++) {
	        proiz *= i;
	    }
	    cout << "Произведение всех целых чисел от " << a << " до " << b << ": " << proiz << endl;
	    break;
	    
    case 0:
    	return 0;
    }
		
	}
	return 0;
}
