#include <iostream>


using namespace std;


int main() { 
    for(int x = 1; x <= 10000; x++) {
        if(x % 100 == 0) {
            cout << x << flush; 
        }
    }


    return 0;
}