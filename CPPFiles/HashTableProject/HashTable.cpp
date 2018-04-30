/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  File name     :  BrobInt.java
 *  Purpose       :  Imitate the BigInteger class
 *  @author       :  T. Herrmann
 *  Date written  :  2018-04-04
 *  Description   :  Class to handle large int values
 *  Notes         :  None
 *  Warnings      :  None
 *  Exceptions    :  NumberFormatException
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  Revision History
 *  ---------------
 *            Rev      Date     Modified by:  Reason for change/modification
 *           -----  ----------  ------------  -----------------------------------------------------------
 *  @version 1.0.0  2018-03-22 T. Herrmann  Initial writing and release
 *  @version 2.0.0  2018-04-04 T. Herrmann  All methods revised for functionality
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#include <iostream>
#include <cstdlib>
//#include <string>
#include "HashHeader.h"

using namespace std;

int HashTable::hashIndex(string key) {
    
    /* int tableSize = 100;
    int hashValue;
    return hashValue % 100;  */
    cout << key[0] << endl;
    
    return key.length(); 
}





