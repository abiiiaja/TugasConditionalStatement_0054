#include <iostream>
using namespace std;

float weight, height, bmii;

void input(){
    cout << endl;
    cout << "--- Selamat Datang Mahasiswa Kelas B 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> weight;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> height;
    cout << endl; 
}

float calculatorBMI(float b, float t){
    return b/(t*t);
}