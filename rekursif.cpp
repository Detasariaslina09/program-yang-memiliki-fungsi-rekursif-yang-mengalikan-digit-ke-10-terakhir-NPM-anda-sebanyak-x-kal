//deta sari aslina
//2217051117
#include <iostream>
#include <string>
using namespace std;

int getDigit9(string npm) {     // Mengambil digit ke-9 dari NPM
    return npm[8] - '0';
}
int getDigit10(string npm) {    // Mengambil digit ke-10 dari NPM
    return npm[9] - '0';
}
int multiplyDigit10(int x, int digit10) {     // Fungsi rekursif untuk mengalikan digit ke-10 sebanyak x kali
    if (x == 1) {
        return digit10;
    } else {
        return digit10 * multiplyDigit10(x-1, digit10);
    }
}
int main() {
    string npm;
    int digit9, digit10, result;
    
     // untuk Meminta input NPM dan mengambil digit ke-9 dan ke-10
    cout << "Masukkan NPM Anda: ";   
    cin >> npm;
    digit9 = getDigit9(npm);
    digit10 = getDigit10(npm);

     // untuk Mengalikan digit ke-10 sebanyak digit ke-9 kali dengan fungsi rekursif
    result = multiplyDigit10(digit9, digit10);    
    cout << "Hasil perkalian digit ke-10 sebanyak " << digit9 << " kali adalah: " << result << endl;
    return 0;
}
