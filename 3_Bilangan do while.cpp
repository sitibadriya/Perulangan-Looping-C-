#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int counter = 1;
    int total = 0;
    int bilangan;
    
while(ulangi == 'y'){
cout << "Masukkan bilangan ke- " << counter << " : ";
cin >> bilangan;
total += bilangan;

cout << "Mau memasukkan data lagi (y/t)? ";
cin >> ulangi;
counter ++;
}
cout << "\nTotal bilangan = " << total << endl;
    return 0;
}