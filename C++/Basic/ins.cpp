#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello world!";
    string insert_text = " beautiful";
    text.insert(5, insert_text); // Inserts " beautiful" at position 5
    cout << text << endl; // Outputs: Hello beautiful world!
    return 0;
}