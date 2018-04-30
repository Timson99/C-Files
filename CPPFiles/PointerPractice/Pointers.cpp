#include <iostream>
#include "Person.h"

using namespace std;


void manipulate1(double value) {
    cout << "Value in manip1: " << value << "Location: " << &value << endl;
    value = 10.0;
    cout << "Value in manip1: " << value << "Location: " << &value << endl;
}
void manipulate2(double* value) {
    cout << "Value in manip1: " << *value << "Location: " << value << endl;
    *value = 10.0;
    cout << "Value in manip1: " << *value << "Location: " << value << endl;
}
int main() {
    
    /* cout << "1. Pointer Test with Doubles" << endl;
    cout << "----------------------------" << endl;
    double dValue = 8; 
    cout << "Value: " << dValue << "Location: " << &dValue << endl;
    dValue = 9;
    cout << "Value: " << dValue << "Location: " << &dValue << endl;
    cout << "2. Pointer Test with Doubles" << endl;
    cout << "----------------------------" << endl;
    dValue = 8; 
    cout << "Value: " << dValue << "Location: " << &dValue << endl;
    double* pdValue2 = &dValue;
    *pdValue2 = 9;
    cout << "Value: " << dValue << "Location: " << &dValue << endl;
    cout << "3. Pointer Test with Strings" << endl;
    cout << "----------------------------" << endl;
    std::string sValue = "Butt"; 
    cout << "Value: " << sValue << "Location: " << &sValue << endl;
    sValue = "Poop";
    cout << "Value: " << sValue << "Location: " << &sValue << endl;
    cout << "4. Pointer Test with Strings" << endl;
    cout << "----------------------------" << endl;
    std::string sValue2 = "Butt"; 
    cout << "Value: " << sValue2 << "Location: " << &sValue2 << endl;
    string* psValue2 = &sValue2;
    *psValue2 = "Pooop";
    cout << "Value: " << sValue2 << "Location: " << &sValue2 << endl;
    cout << "5. Pointer Test with Doubles" << endl;
    cout << "----------------------------" << endl;
    double ddValue = 8; 
    cout << "Value: " << ddValue << "Location: " << &ddValue << endl;
    manipulate1(ddValue);
    cout << "Value: " << ddValue << "Location: " << &ddValue << endl;
    cout << "6. Pointer Test with Doubles" << endl;
    cout << "----------------------------" << endl;
    double dddValue = 8; 
    cout << "Value: " << dddValue << "Location: " << &dddValue << endl;
    manipulate2(&dddValue);
    cout << "Value: " << dddValue << "Location: " << &dddValue << endl;
    cout << "7. Pointer Test with Objects" << endl;
    cout << "----------------------------" << endl;
    Person sam("sam",8);
    cout << "Value: " << sam.toString() << "Location: " << &sam << endl;
    Person pam = sam;
    cout << "Value: " << pam.toString() << "Location: " << &pam << endl;
    cout << "Value: " << sam.toString() << "Location: " << &sam << endl; */

    
    
    
    
    return 0;
}
