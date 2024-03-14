#include <iostream>
using namespace std;
int arr[20];                // Membuat Array dengan panjang data 20
int n;                      // Membuat Variabel inputan n

void input() {                                                              // Procedure Input
    while (true)
    {
        cout << "Masukkan jumlah data array : ";                            // Membuat Inputan jumlah elemen Array
        cin >> n;                                                           // Memanggil Variabel inputan n

        if (n <= 20) {                                                      // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n";     // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                                           // Membuat jarak per baris program
    cout << "=====================" << endl;                                // Membuat tampilan susunan data elemen Array
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)                                             // Menggunakan perulangan for untuk menyimpan data pada Array
    {
        cout << "Data ke-" << (i + 1) << ": ";                              // Memasukan atau menampilkan nilai data n
        cin >> arr[i];                                                      // Menyimpan nilai data n ke dalam Array arr
    }
}

int main()
{
    
}