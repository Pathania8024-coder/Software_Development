#include <iostream>
#include <string>
#include <stdexcept> // For exception handling

using namespace std;

int main() {
    try {
        // Example strings to convert
        string str1 = "12345";      // Valid integer
        string str2 = "9876543210"; // Valid long
        string str3 = "123456789012345"; // Valid long long
        string str4 = "42 is the answer"; // Partially valid (stops at first non-digit)
        string str5 = "abc123";     // Invalid (throws exception)
        
        // Using stoi() - string to integer
        int num1 = stoi(str1);
        cout << "stoi(\"" << str1 << "\") = " << num1 << endl;
        
        // stoi() with partial conversion
        int num4 = stoi(str4);
        cout << "stoi(\"" << str4 << "\") = " << num4 << " (stops at first non-digit)" << endl;
        
        // Using stol() - string to long
        long num2 = stol(str2);
        cout << "stol(\"" << str2 << "\") = " << num2 << endl;
        
        // Using stoll() - string to long long
        long long num3 = stoll(str3);
        cout << "stoll(\"" << str3 << "\") = " << num3 << endl;
        
        // This will throw an invalid_argument exception
        // Uncomment to see the exception handling
        // int num5 = stoi(str5);
        // cout << "stoi(\"" << str5 << "\") = " << num5 << endl;
        
        // Demonstrating base conversion (hexadecimal)
        string hexStr = "1A3F";
        int hexNum = stoi(hexStr, nullptr, 16);
        cout << "stoi(\"" << hexStr << "\", nullptr, 16) = " << hexNum << " (hexadecimal conversion)" << endl;
        
        // Demonstrating size_t parameter to get index of first unconverted character
        size_t index;
        string mixedStr = "123abc";
        int mixedNum = stoi(mixedStr, &index);
        cout << "stoi(\"" << mixedStr << "\") = " << mixedNum << ", stopped at index " << index << endl;
        
    } catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cerr << "Out of range: " << e.what() << endl;
    }
    
    return 0;
}