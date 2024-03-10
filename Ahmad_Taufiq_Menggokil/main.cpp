#include <iostream>

using namespace std;

int main() {
    int n, res = 1;

    cin >> n;

    while(true){

        if ((n & n+1) != 0) n++;
        else { break; res++; }

        res++;
    }

    cout << res;
    return 0;
}
