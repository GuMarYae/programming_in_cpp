#include <iostream>
#include <string>
using namespace std;

// Recursive function to compute the length of the string
int compute(string s) {
    if (s.length() == 0)  // Base case: empty string has length 0
        return 0;
    else 
        return compute(s.substr(1)) + 1;  // Recursive case: reduce string by one character and add 1
}

int main() {
    string course = "CSC335";  // Input string
    cout << compute(course) << endl;  // Call the recursive function and print the result
    return 0;
}
