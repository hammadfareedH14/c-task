#include <iostream>
using namespace std;
int main() 
{
    // Prompt the user to enter the total number of seconds
    cout << "Enter total seconds: ";
    // Read and store the input
    int totalSeconds;
    cin >> totalSeconds;

    // Calculate hours, minutes, and seconds
    int hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;     // 1 minute = 60 seconds
    int seconds = remainingSeconds % 60;
    // Output the formatted time
    cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
}
