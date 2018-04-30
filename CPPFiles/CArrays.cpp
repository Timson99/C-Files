#include <iostream>
using namespace std;

int main() {
    
    int animals[10][10];
    cout << sizeof(animals) << endl;
    cout << sizeof(animals[0]) << endl << endl;
    
    for( int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++ ) {
        cout << endl;
        for( int j = 0; j < sizeof(animals[0])/sizeof(int); j++) {
            animals[i][j] = (i+1) * (j+1);
            cout << animals[i][j] << " ";
        }
    }
        
        
        return 0;
}