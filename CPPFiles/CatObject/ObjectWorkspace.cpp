#include <iostream>
#include "CatHeader.h"

using namespace std;

int main() {
    
    cout << "Name Cat #1: > " << flush;
    string catNameOne;
    cin >> catNameOne;
    cout << "\nName Cat #2: > " << flush;
    string catNameTwo;
    cin >> catNameTwo;
    Cat cat1(catNameOne);
    cat1.speak();
    {
         Cat cat2(catNameTwo);
        cat2.speak();
    }
    cat1.setHappy(false);
    cat1.speak();
    cout << "Is this cat happy?: " << cat1.getHappy() << endl;
    cout << "End Program" << endl;
    return 0;
}