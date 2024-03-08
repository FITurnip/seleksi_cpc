#include <iostream>
using namespace std;
int main() {
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int n;
    cin >> n;
    n = (n + 6) % 7;
    cout << hari[n] << endl;
    return 0;
}