//Menggunakan metode if-else
#include <iostream>
using namespace std;

int main(){

    int x, y;

    cout << "Nama : Annisa Permata Bunda" <<endl;
    cout << "NIM : 22343037" <<endl;
    cout << "========================" <<endl;
    cout << "Masukkan nilai titik x : " <<endl;
    cin >> x;
    cout << "Masukkan nilai titik y : " <<endl;
    cin >> y;

    if (x>0 && y>0){
        cout << "Titik (x,y) ada di kuadran satu" ;
    }
    else if (x<0 && y>0){
        cout << "Titik (x,y) ada di kuadran Dua" ;
    }
    else if (x<0 && y<0){
        cout << "Titik (x,y) ada di kuadran Tiga" ;
    }
    else if (x>0 && y<0){
        cout << "Titik (x,y) ada di kuadran Empat" ;
    }



return 0;
}
