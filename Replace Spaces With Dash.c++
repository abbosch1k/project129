#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for(char &c : text)
        if(c == ' ')
            c = '-';

    cout << text;
    return 0;
}
