#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, h;
    cout << "\n";
    cout << "only for odd number";
    cout << "\n";
    cout << "Enter value: ";
    cin >> h;
    cout << "\n";

    if ((h % 2) == 0) {
        n = h + 1; 
        cout << "canter point banane ke liye apki valu ko odd number me badla hai => " << n << endl;

    } else {
        n = h;
    }
    
    k = (n + 1) / 2;
    cout << "\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 && j >= 1 ) || (j == n && i >= 2 && i <= n - 1)) {
                cout << " $";
            } else if (i == k && j == k) {
                cout << " #";
            } else if ((j == 1 && i >= 2 && i <= n - 1) || (i == n && j >= 1   )) {
                cout << " *";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    
    
}
