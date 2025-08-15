#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello World!";
    text.erase(5, 6); // Removes 6 characters starting from index 5 (" World")
    cout << text << endl; // Outputs: Hello!
    return 0;
}
