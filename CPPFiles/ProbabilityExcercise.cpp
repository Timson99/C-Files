/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  File name     :  Probabiliy.cpp
 *  Purpose       :  None
 *  @author       :  T. Herrmann
 *  Date written  :  2017-02-14
 *  Description   :  Experiment with probability in C++
 *  Notes         :  None.
 *  Warnings      :  None
 *  Exceptions    :  None
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  Revision History
 *  ---------------
 *            Rev      Date     Modified by:  Reason for change/modification
 *           -----  ----------  ------------  -----------------------------------------------------------
 *  @version 1.0.0  2017-04-26  T. Herrmann  Initial writing
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#include <iostream> // for cout and cin
#include <ctime> // for time()
#include <cstdlib> //For srand() and rand()
#include "looper.h" // for looper() prototype
using namespace std; 


int main() {
    
    while(true) {
        Loops loop1;
        cout << "Please input probability" << endl;
        cout << ">>" << flush;
        int input;
        cin >> input;
        if(input == 0) {
            break;
        }
        cout << "" << loop1.looper(input) << endl;
    }

    return 0;
}

