#include <iostream>
#include <cstdlib>
//#include <string>
#include "HashHeader.h"

using namespace std;

int main() {
    
    HashTable table1;
    
    cout << table1.hashIndex("Pooop") << endl;

    
    
    
    return 0;
}

//g++ MainHash.cpp HashTable.cpp -o HashProject