/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  File name     :  IfAndElse.cpp
 *  Purpose       :  None
 *  @author       :  T. Herrmann
 *  Date written  :  2017-02-14
 *  Description   :  Experiment with If and else in C++
 *  Notes         :  None.
 *  Warnings      :  None
 *  Exceptions    :  None
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  Revision Histor
 *  ---------------
 *            Rev      Date     Modified by:  Reason for change/modification
 *           -----  ----------  ------------  -----------------------------------------------------------
 *  @version 1.0.0  2017-02-28  T. Herrmann  Initial writing
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
 
#include <iostream>

using namespace std;

int main() {
    
        string password = "SpicySpice99";
        cout << "\nWELCOME" << endl;
        cout << "*******" << endl;
        bool trueBool = true;
       
        while(true) {
            cout << "\n\tPlease enter password>" << flush;
            string input;
            cin >> input;
            bool bValue = true || false && true;
            if(input == "6") {
                cout << (bValue == 1 ? "true" : "false")  << endl;
                break; 
            }        
            else {
                cout << "Access Denied" << endl;
            }
        }

        return 0;
}
