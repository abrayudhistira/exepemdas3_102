#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { //constructor
        x = 0;
    }

    virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x

    virtual float Luas(int a)
    { return 0; } //fungsi untuk menghitung luas

    virtual float Keliling(int a) 
    { return 0; } //fungsi untuk menghitung keliling

    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran :public bidangDatar {
public:
    void input() {
        int jejariLingkaran;
        cout << "Masukkan jejari = ";
        cin >> jejariLingkaran;
    }
    float Keliling(int jejariLingkaran) {
        2 * 3.14 * jejariLingkaran;
    }
    float Luas(int jejariLingkaran) {
        3.14 * jejariLingkaran * jejariLingkaran;
};

class Bujursangkar :public bidangDatar {
public:
    void input() {
        int sisiBujur;
        cout << "Masukkan sisi = ";
        cin >> sisiBujur;
    }
    float Keliling(int sisiBujur) {
        2 * 3.14 * sisiBujur;
    }
    float Luas(int sisiBujur) {
        3.14 * sisiBujur * sisiBujur;
};

int main() {
    bidangDatar* obyek;
    Lingkaran a;
    Bujursangkar b;

    obyek = &a;
    obyek->input();
    obyek = &b;
    obyek->input();

    return 0;
};