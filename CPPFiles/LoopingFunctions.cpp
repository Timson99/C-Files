
#include <iostream> // for cout and cin
#include <ctime> // for time()
#include <cstdlib> //For srand() and rand()
#include "looper.h" // for looper() prototype
using namespace std; 

int Loops::looper(int input) {
    
    int count = 0;
    srand (time(NULL));
    bool looper = true;
    while(looper && count < 10000) {

        count++;
        int x = rand() % input;
        if((x) == 5) {
            break;
        }   
    }
    return count;   
}