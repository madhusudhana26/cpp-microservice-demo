#include <iostream>
#include <string>

using namespace std;

string processRequest(string input) {
    return "Processed: " + input;
}

int main() {
    cout << processRequest("hello");
    return 0;
}
