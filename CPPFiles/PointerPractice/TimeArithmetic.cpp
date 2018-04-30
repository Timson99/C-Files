#include <iostream>

using namespace std;


int main() { 

    int const MINUTES_PER_HOUR = 60;
    int const SECONDS_PER_MINUTE = 60;
    cout << "Please enter large number of seconds\n > " << flush;
    int totalSeconds;
    cin >> totalSeconds;
    int hours = totalSeconds/3600;
    totalSeconds -= 3600 * hours;
    int minutes = totalSeconds/60;
    totalSeconds -= 60 * minutes;
    cout << hours << ":" << minutes << ":" << totalSeconds << endl;

    return 0;
}