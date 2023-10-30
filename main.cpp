#include <iostream>

using namespace std;

int main() {

    int x,y,z;

    cout<< "Masukkan Angka kesatu:"; //masukan atau input data
    cin>>x;

    cout<< "Masukkan Angka kedua:";
    cin>>y;

    cout<< "Masukkan Angka ketiga:";
    cin>>z;

int max; //buat variabel untuk menyimpan nilai terbesar/

if (x>=y && x>=z){
    max = x;
}
else if (y>=x && y>=z) {
    max = y;
}
else if (z>=x && z>=y) {
    max = z;
}
cout<< "Angka terbesar adalah:"<<max;

return 0;
}
