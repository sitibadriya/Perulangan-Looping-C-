#include <iostream>
using namespace std;

int main() {
    int n;
    long faktorial = 1.0;

    cout << "Masukkkan bilangan bulat positif: ";
    cin >> n;

    if (n < 0)
        cout << "Error, Faktorial dari bilangan negatif tidak ada.";
    else {
        for(int i = 1; i <= n; ++i) {
            faktorial *= i;
        }
        cout << "Faktorial dari " << n << " = " << faktorial;    
    }

    return 0;
}
