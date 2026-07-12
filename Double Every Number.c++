#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int &x : arr)
        cin >> x;

    for(int x : arr)
        cout << x * 2 << " ";

    return 0;
}
