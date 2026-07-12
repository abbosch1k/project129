#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for(int i = 0; i < text.size(); i += 2)
        cout << text[i];

    return 0;
}
