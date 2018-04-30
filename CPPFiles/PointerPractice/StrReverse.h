#include <iostream>
using namespace std;

int main() {
    
    cout << endl <<  "Method 1" << endl << endl;
    
    char text[] = "hello";
    cout << text << endl;
    for(int i = 0; i <  (sizeof(text) - 1)/2; i++) {
        char temp = text[i]
        text[i] = text[sizeof(text) - 1 - i];
        text[sizeof(text) - 1 - i] = temp;
    }
    cout << text << endl;
    
    cout << endl <<  "Method 2" << endl << endl;
    
    
    
    
    
}