#include <iostream>
#include <string> // Required for std::to_string
using namespace std;

int main() {
    int num = 123;
    string str_num = to_string(num);
    cout << "Integer: " << num << endl;
    cout << "String: " << str_num << endl;

    double pi = 3.14159;
 string str_pi = to_string(pi);
 cout << "Double: " << pi << endl;
 cout << "String: " << str_pi <<  endl;

    return 0;
}