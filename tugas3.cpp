#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //? case 1
    cout << "=======" << endl;
    cout << "case 1" << endl;
    int a = 8, b = 10, aK, bK;
    float c;

    cout << "dik: a = 8, b = 10\ndit = c?" << endl;
    cout << "rumus Pythagoras a² + b² = c²" << endl;
    cout << "c = " << a << "²"
         << " + " << b << "²" << endl;
    aK = a * a;
    bK = b * b;
    cout << "c = " << aK << " + " << bK << endl;
    cout << "c = √" << aK + bK << endl;
    c = sqrt(aK + bK);
    cout << c << endl
         << endl;

    //? case 2
    cout << "=======" << endl;
    cout << "case 2" << endl;

    float praktikum, uts, uas, total;
    cout << "Praktikum 20%\nUTS 30%\nUAS 50%" << endl
         << endl;
    cout << "Nilai Mahasiswa\npraktikum = 75, UTS = 70, UAS = 88" << endl
         << endl;

    praktikum = 75 * 0.50;
    uts = 70 * 0.30;
    uas = 88 * 0.20;

    total = praktikum + uts + uas;
    cout << "Nilai Akhir Mahasiswa Tersebut Adalah " << total << endl
         << endl;

    //? case 3
    cout << "=======" << endl;
    cout << "case 3" << endl
         << endl;

    float I, V, R;
    float rI, rV, rR;

    cout << "Rumus\nI = V / R\nV = I * R\nR = V / I" << endl
         << endl;

    cout << "Masukkan Arus(I) : ";
    cin >> I;
    cout << "Masukkan Tegangan(V) : ";
    cin >> V;
    cout << "Masukkan Hambatan(R) : ";
    cin >> R;

    rI = V / R;
    rV = I * R;
    rR = V / I;

    cout << endl;
    cout << "Nilai Arus(I) : " << rI << endl;
    cout << "Nilai Tegangan(V) : " << rV << endl;
    cout << "Nilai Hambatan(R) : " << rR << endl
         << endl;

    //? case 4
    cout << "=======" << endl;
    cout << "case 4" << endl
         << endl;

    // b4 & c4 itu variable b & c yang di case ke 4, supaya ga ketuker sama yang case 1

    float Y, bx;
    float b4 = 25, x = 15, c4 = 20;

    bx = b4 * x;
    cout << "Y = bx² + 0,5x - c" << endl;
    Y = (bx * bx) + 0.5 * x - c4;
    cout << "Hasil : " << Y << endl;
}