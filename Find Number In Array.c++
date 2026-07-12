#include <iostream>
using namespace std;

int main() {
    int arr[5], target;

    for(int &x : arr)
        cin >> x;

    cin >> target;

    for(int x : arr) {
        if(x == target) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
