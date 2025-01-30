#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, angkaselanjutnya = 0;

    cout << "Masukkan jumlah suku : ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
       
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        angkaselanjutnya = t1 + t2;
        t1 = t2;
        t2 = angkaselanjutnya;
        
        cout << angkaselanjutnya << ", ";
    }
    return 0;
}
