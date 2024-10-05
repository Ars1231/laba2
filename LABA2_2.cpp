#include <iostream>
#include <utility>
using namespace std;




int main() {
	
	using byte = unsigned char;
	pair<byte, byte> positionA;
	pair<byte, byte> positionB;
	
   	int x;
	
 	cout << "Чтобы проверить ладью, введите 1." << endl;
	cout << "Чтобы проверить слона, введите 2." << endl;
	cout << "Чтобы проверить ферзя, введите 3." << endl;
	cout << "Чтобы проверить короля, введите 4." << endl;
	cout << "Чтобы проверить пешку на ход, введите 5." << endl;
	cout << "Чтобы проверить пешку на битье, введите 6." << endl;
	cout << "Чтобы выйти, введите 0." << endl;
	    
    while (true){
	    
    cin>>x;
	    
    cout << "Enter position A (a b): ";
    cin >> positionA.first >> positionA.second;

    cout << "Enter position B (c d): " << "\n";
    cin >> positionB.first >> positionB.second;
	    
   
    
    switch(x){
    
	    case 1:
		    if (positionA.first == positionB.first || positionA.second == positionB.second) cout << "Threatening" << endl;
		    else cout << "Not threatening" << endl;
		    break;
		    
	    
	    case 2:
		    if ( abs(positionA.first - positionB.first) == abs(positionA.second  -  positionB.second) ) cout << "Threatening" << endl;
		    else cout << "Not threatening" << endl;
		   break;
	
	    
	    case 3:
		    if ( ( abs(positionA.first - positionB.first) <= 1 ) && ( abs(positionA.second - positionB.second) <= 1 ) ) cout << "Threatening" << endl;
		    else cout << "Not threatening" << endl;
		   break;
	
	    
	    case 4:
		    if ( (positionA.first == positionB.first || positionA.second == positionB.second) || ( abs(positionA.first - positionB.first) == abs(positionA.second  -  positionB.second) ) ) cout << "Threatening" << endl;
		    else cout << "Not threatening" << endl;
		    break;
	
	    case 5:
		    if ( (positionA.first == positionB.first) && (positionB.second - positionA.second == 1) ) cout << "Threatening 'first condition'" << endl;
		    else cout << "Not threatening 'first condition'" << endl;
		 break;
	    
	    case 6:
		    if ( (positionA.first < positionB.first) && (abs(positionA.first - positionB.first) == 1) ) cout << "Threatening 'second condition'" << endl;
		    else cout << "Not threatening 'second condition'" << endl;
		    break;
		    
	    case 0:
	    	return 0;
	  
	    }
    
    }
    
    return 0;
}
