#include <iostream>
using namespace std;

int main() {
    
    cout << endl <<  "Method 1" << endl << endl;
    
    char text[] = "hello";
    cout << text << endl;
    for(int i = 0; i < (sizeof(text) - 1)/2; i++) {
        char temp = text[i];
        text[i] = text[sizeof(text) - 2 - i];
        text[sizeof(text) - 2 - i] = temp;
    }
    cout << "Reversed Text: " << text << endl;

    cout << endl <<  "Method 2" << endl << endl;
    
    char text2[] = "Wow! It's Made!";
    cout << text2 << endl;
    int length = sizeof(text2) - 1;
    char* pTextStart = text2;
    char* pTextEnd = text2 + length - 1;
    for(int i = 0; i < length/2; i++, pTextStart++, pTextEnd--) {
        char temp = *pTextStart;
        *pTextStart = *pTextEnd;
        *pTextEnd = temp; 
    }
    cout << text2 << endl;
    
    
    
}