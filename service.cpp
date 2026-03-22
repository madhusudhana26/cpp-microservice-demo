#include <iostream>
#include <string>

using namespace std;

// string processRequest(string input) 
string processRequest(const string& input)
{
    return "Processed: " + input;
}

int main() {
    cout << processRequest("hello");
    return 0;
}
