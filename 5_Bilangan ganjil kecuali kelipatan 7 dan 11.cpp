#include<iostream>
using namespace std;
int main() {
   int n;
   cout << "Masukkan bilangan : "; 
   cin >> n;
   cout << "Bilangan ganjil (kecuali kelipatan 7 dan 11)" << endl;
   
   for (int i=1; i < 100; i+=2) {
     if (i%3==0) { 
         continue; 
     }
       cout << i << " "; 
       }
       cout << endl;
   return 0;
}