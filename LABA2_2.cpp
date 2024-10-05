#include <iostream>
#include <utility>
using namespace std;




int main() {
	
	using byte = unsigned char;
	pair<byte, byte> positionA;
	pair<byte, byte> positionB;
    

    cout << "Enter position A (a b): ";
    cin >> positionA.first >> positionA.second;

    cout << "Enter position B (c d): ";
    cin >> positionB.first >> positionB.second;
    cout << "\n";
    
    if (positionA.first == positionB.first || positionA.second == positionB.second) cout << "Threatening" << endl;
    else cout << "Not threatening" << endl;
    
    if ( positionA.first - positionA.second == positionB.first - positionB.second ) cout << "Threatening" << endl;
    else cout << "Not threatening" << endl;
    
    if ( ( abs(positionA.first - positionB.first) <= 1 ) && ( abs(positionA.second - positionB.second) <= 1 ) ) cout << "Threatening" << endl;
    else cout << "Not threatening" << endl;
    
    if ( (positionA.first == positionB.first || positionA.second == positionB.second) || ( (positionA.first / positionB.first) == (positionA.second / positionB.second) ) ) cout << "Threatening" << endl;
    else cout << "Not threatening" << endl;
    
    if ( (positionA.first == positionB.first) && (positionB.second - positionA.second == 1) ) cout << "Threatening 'first condition'" << endl;
    else cout << "Not threatening 'first condition'" << endl;
    
     if ( (positionA.first < positionB.first) && (abs(positionA.first - positionB.first) == 1) ) cout << "Threatening 'second condition'" << endl;
    else cout << "Not threatening 'second condition'" << endl;
    
    
    
    return 0;
}
