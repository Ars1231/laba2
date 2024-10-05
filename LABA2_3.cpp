#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int N;
	while (true){
	cout << "Введите число N" << endl;
	cin >> N;	
	cout << "Чтобы выйти, введите 0" << endl;
	switch(N){
		case 0:
			return 0;
		default:
			cout << "Таблица умножения для числа "<< N << endl;
		    for (int i = 1; i < 10; i++) {
		    cout << i << " x "<< N  << " = " << N * i << endl;
		    
    }

	}
	
	}
    return 0;
}
