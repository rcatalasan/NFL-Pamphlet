#include "Header.h"

// Function to put thousands 
// separators in the given integer 
string thousandSeparator(int n)
{
    string ans = "";

    // Convert the given integer 
    // to equivalent string 
    string num = to_string(n);

    // Initialise count 
    int count = 0;

    // Traverse the string in reverse 
    for (int i = num.size() - 1;
        i >= 0; i--) {
        count++;
        ans.push_back(num[i]);

        // If three characters 
        // are traversed 
        if (count == 3) {
            ans.push_back(',');
            count = 0;
        }
    }

    // Reverse the string to get 
    // the desired output 
    reverse(ans.begin(), ans.end());

    // If the given string is 
    // less than 1000 
    if (ans.size() % 4 == 0) {

        // Remove ',' 
        ans.erase(ans.begin());
    }

    return ans;
}