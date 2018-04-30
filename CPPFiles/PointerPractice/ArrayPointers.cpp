#include <iostream>
using namespace std;

int main() { 

    int randNums[] = {3,5,10,16,23,45};
    string groceryList[] = {"Milk","Cheese","Butter","Cream","Eggs"};
    int randNumsSize = sizeof(randNums)/sizeof(int);
    int groceryListSize = sizeof(groceryList)/sizeof(string);
    
    cout << endl << "Loop 1: Int[] Normal" << endl;
    cout << "~~~~~~~~~~~~~~~~" << endl << endl;
    
    for(int i = 0; i < randNumsSize; i++) {
        cout << "\t" << randNums[i] << " " << flush;
    }
    
    cout << endl << "Loop 2: Int[] Pointer-Array Syntax" << endl;
    cout << "~~~~~~~~~~~~~~~~" << endl << endl;
    
    int* pRandNums = randNums; // int* pRandNums = &randNums[0]
    for(int i = 0; i < randNumsSize; i++) {
        cout << "\t" << pRandNums[i] << " " << flush;
    }
    
    cout << endl << "Loop 3: String[] Increment Pointer" << endl;
    cout << "~~~~~~~~~~~~~~~~" << endl << endl;
    
    string* pGroceryList = groceryList;
    for(int i = 0; i < groceryListSize; i++, pGroceryList++) {
        cout << "\t" << *pGroceryList << " " << flush;
    }
    
    cout << endl << "Loop 4: String[] Save Beginning and End Pointer" << endl;
    cout << "~~~~~~~~~~~~~~~~" << endl << endl;
    
    
    string* pGroceryListBeginning = &groceryList[-1];
    string* pGroceryListEnd = &groceryList[groceryListSize-1];
    while(true) {
        cout << "\t" << *++pGroceryListBeginning << " " << flush;
        if(pGroceryListBeginning == pGroceryListEnd) 
            break;
    }
    cout << pGroceryListEnd - pGroceryListBeginning << endl;
    
    
    
}