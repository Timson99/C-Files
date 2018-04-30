#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


class Animal {

private:
    string name;

public:
    Animal() {};
    void setName(string name) { this->name = name; };
    void speak() const { cout << "My name is " << name << endl; };
};

int main() {
    
    string value1 = "Hey";
    string value2 = value1;
    value2 = "Hi";
    cout << "1: " + value1 << endl;
    cout << "2: " + value2 << endl << endl;
    
    string text1 = "Howdy";
    string& text2 = text1;
    text2 = "Hello";
    cout << "1: " + text1 << endl;
    cout << "2: " + text2 << endl << endl;
    
    int value = 6;
    const int* pValue1 = &value;
    int* const pValue2 = &value;
    int randVal = 4;
    pValue1 = &randVal;
    *pValue2 = 3;
    cout << value <<endl;
    
    
    
    return 0;
}