#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan banyak bilangan dalam array: ";
    cin >> n;

    int data[n];
    cout << "Masukkan bilangan bilangan untuk disimpan ke dalam array: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int terbesar = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > data[i - 1]) {
            terbesar = data[i];
        }
    }

    cout << "bilangan yang terbesar di dalam array tersebut adalah: " << terbesar << endl;

    return 0;
}