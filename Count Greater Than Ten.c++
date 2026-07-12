#include <iostream>
using namespace std;

int main() {
    int x, count = 0;

    for(int i = 0; i < 5; i++) {
        cin >> x;
        if(x > 10)
            count++;
    }

    cout << count;
    return 0;
}
