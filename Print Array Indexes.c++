#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int &x : arr)
        cin >> x;

    for(int i = 0; i < 5; i++)
        cout << i << ": " << arr[i] << endl;

    return 0;
}
