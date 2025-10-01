#include<iostream>
using namespace std;

int fibonacci_at_index(int index) {
    int a = 0, b = 1, c;

    cout << "Fibonacci Series up to index " << index << ": ";
    for (int i = 0; i <= index; i++) {
        if (i == 0) {
            cout << a << " ";
            continue;
        }
        if (i == 1) {
            cout << b << " ";
            continue;
        }
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;

    return index == 0 ? 0 : b;
}

int main() {
    int index;
    cout << "Enter the index of the Fibonacci number you want: ";
    cin >> index;

    int result = fibonacci_at_index(index);
    cout << "Fibonacci number at index " << index << " is: " << result << endl;

    return 0;
}
