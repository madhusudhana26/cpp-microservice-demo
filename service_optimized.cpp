#include <iostream>
#include <string>

using namespace std;

string processRequest(const string& input) {
    if(input.length() > 10)
        return input.substr(0, 10);
    return input;
}

int main() {
    cout << processRequest("hello");
    return 0;
}
