#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter index of Fibonachi: ";
    cin >> n;

    cout << "Fibonachi for index :  " << n << ": " << fibonacci(n) << endl;

    return 0;
}