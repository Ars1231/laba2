#include <iostream>
#include <utility>
using namespace std;




int main() {
	
	using byte = unsigned char;
	pair<byte, byte> positionA;
	pair<byte, byte> positionB;
    int x;
 
    
    while (true){
 
    cout << "Enter position A (a b): ";
    cin >> positionA.first >> positionA.second;

    cout << "Enter position B (c d): " << "\n";
    cin >> positionB.first >> positionB.second;
    cin>>x;
    
    switch(x){
    
    case 1:
	    if (positionA.first == positionB.first || positionA.second == positionB.second) cout << "Threatening" << endl;
	    else cout << "Not threatening" << endl;
	    break;
	    
    
    case 2:
	    if ( (positionA.first / positionA.second) == (positionB.first  / positionB.second) ) cout << "Threatening" << endl;
	    else cout << "Not threatening" << endl;
	   break;

    
    case 3:
	    if ( ( abs(positionA.first - positionB.first) <= 1 ) && ( abs(positionA.second - positionB.second) <= 1 ) ) cout << "Threatening" << endl;
	    else cout << "Not threatening" << endl;
	   break;

    
    case 4:
	    if ( (positionA.first == positionB.first || positionA.second == positionB.second) || ( (positionA.first / positionB.first) == (positionA.second / positionB.second) ) ) cout << "Threatening" << endl;
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
	    
    case 7:
    	return 0;
  
    }
    
    }
    
    return 0;
}
