// 1. Buatlah program untuk menghitung luas segitiga
// 2. Buatlah program untuk mencari nilai maksimum dari 3 buah bilangan
// 3. Buatlah program untuk mencari jumlah dari sejumlah bilangan yang dimasukkan oleh pengguna
// 4. Buatlah program untuk mencetak pola segitiga siku-siku
// 5. Buatlah program untuk menghitung luas lingkaran

#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

void luassegitiga(int *p, int a, int b);
void nilaimaksimum(int *p, int a, int b, int c);
void jumlahbilangan(int *p, int a);
void polasegitiga(int *p, int a);
void luaslingkaran(int *p, int a);

int main()
{
    int pilihan;
    cout << "Pilih program yang ingin dijalankan" << endl;
    cout << "1. Luas Segitiga" << endl;
    cout << "2. Nilai Maksimum" << endl;
    cout << "3. Jumlah Bilangan" << endl;
    cout << "4. Pola Segitiga" << endl;
    cout << "5. Luas Lingkaran" << endl;
    cout << "Pilihan : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        int alas, tinggi, luas;
        cout << "Masukkan alas : ";
        cin >> alas;
        cout << "Masukkan tinggi : ";
        cin >> tinggi;
        luassegitiga(&luas, alas, tinggi);
        cout << "Luas segitiga adalah " << luas << endl;
        break;
    case 2:
        int bil1, bil2, bil3, maksimum;
        cout << "Masukkan bilangan pertama : ";
        cin >> bil1;
        cout << "Masukkan bilangan kedua : ";
        cin >> bil2;
        cout << "Masukkan bilangan ketiga : ";
        cin >> bil3;
        nilaimaksimum(&maksimum, bil1, bil2, bil3);
        cout << "Nilai maksimum adalah " << maksimum << endl;
        break;
    case 3:
        int jumlah, banyakbilangan;
        cout << "Masukkan banyak bilangan : ";
        cin >> banyakbilangan;
        jumlahbilangan(&jumlah, banyakbilangan);
        cout << "Jumlah bilangan adalah " << jumlah << endl;
        break;
    case 4:
        int tinggipola;
        cout << "Masukkan tinggi pola : ";
        cin >> tinggipola;
        polasegitiga(&tinggipola, tinggipola);
        break;
    case 5:
        int jarijari, luaslingkaran2;
        cout << "Masukkan jari-jari : ";
        cin >> jarijari;
        luaslingkaran(&luaslingkaran2, jarijari);
        cout << "Luas lingkaran adalah " << luaslingkaran << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
    return 0;
}

void luassegitiga(int *p, int a, int b)
{
    *p = (a * b) / 2;
}

void nilaimaksimum(int *p, int a, int b, int c)
{
    *p = max(max(a, b), c);
}

void jumlahbilangan(int *p, int a)
{
    *p = 0;
    for (int i = 0; i < a; i++)
    {
        int x;
        cout << "Masukkan bilangan ke-" << i + 1 << " : ";
        cin >> x;
        *p += x;
    }
}

void polasegitiga(int *p, int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void luaslingkaran(int *p, int a)
{
    *p = PI * a * a;
}
