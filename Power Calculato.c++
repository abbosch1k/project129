#include <iostream>
using namespace std;

int main() {
    int number, power;
    long long result = 1;

    cin >> number >> power;

    for(int i = 0; i < power; i++)
        result *= number;

    cout << result;
    return 0;
}
