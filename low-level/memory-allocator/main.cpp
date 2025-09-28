#include <iostream>

using namespace std;

int main() {
    char* cptr;
    char str[6] = "hello";

    cptr = str;

    char c = 'A';

    cout << (void*)cptr << "\n";
    cout << *cptr << "\n";
    cout << (void*)str << "\n";
    cout << (void*)&c << "\n";
    return 0;
}
