#include <iostream>
using namespace std;

int main() {
    int pilih;

    while (true) {
        cout << "Halo ababil ngeselin!" << endl;
        cout << "Kamu memilih nomor berapa? 1/2/3?" << endl;
        cin >> pilih;

        if (pilih == 1) {
            cout << "Wkwk, kenapa milih nomor 1? Pilih yang lain aja." << endl;
        } else if (pilih == 2) {
            cout << "Love youuuuu, hehe" << endl;
            cout<<" "<<endl;
        } else if (pilih == 3) {
            cout << "Kamu kok ngangenin?" << endl;
             cout<<" "<<endl;
        } else {
            cout << "Yang bener dong milih angkanya!!" <<endl;
            cout<<" "<<endl;
            continue; // Mengulang input jika tidak valid
        }
    }

    cout << "jan lupa makan sayangg" << endl;

    return 0;
}

