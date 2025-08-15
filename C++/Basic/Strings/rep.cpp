#include <iostream>
#include <string>
using namespace std;

int main() {
    string originalString = "Hello world!";
    string replacementString = "C++";

    // Replace "world" with "C++"
    originalString.replace(6, 5, replacementString); 

    cout << originalString << endl; // Output: Hello C++!

    return 0;
}