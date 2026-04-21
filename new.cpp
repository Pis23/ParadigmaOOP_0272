#include <iostream>
using namespace std;

class barang{
    public :
        string nama;
        int jumlah;
        string kategori;
        string tanggal;

        void printdata(){
            cout << "nama : " << nama << endl;
            cout << "jumlah brang : " << jumlah << endl;
            cout << "kategori : " << kategori << endl;
            cout << "tanggal produksi : " << tanggal << endl;
        }
};

int main(){
    barang elektronik;
    barang nonelektronik;

    elektronik.nama = "laptop";
    elektronik.jumlah = 1;
    elektronik.kategori ="elektronik";
    elektronik.tanggal = "1945-08-17";

    nonelektronik.nama = "supersemar";
    nonelektronik.jumlah = 1;
    nonelektronik.kategori = "non elektronik";
    nonelektronik.tanggal = "1945-03-11";

    elektronik.printdata();
    nonelektronik.printdata();

}
