#include <iostream>
#include <string>

using namespace std;

string processRequest(string input) {
    if(input.length() > 10)
        return input.substr(0, 20); // potential bug
    return input;
}

int main() {
    cout << processRequest("hello");
    return 0;
}
