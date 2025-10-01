#include <iostream>
using namespace std;
bool isUnique(int arr[], int n, int index) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[index])
            count++;
    }
    return count == 1;
}

void printUnique(int arr[], int n) {
    cout << "Unique elements are: ";
    for (int i = 0; i < n; i++) {
        if (isUnique(arr, n, i)) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];  

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printUnique(arr, n);

    return 0;
}