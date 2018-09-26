#include <iostream>
#include <cmath>

using namespace std;

void oh_boy(int m, int n);

int main() {
    int m = 0;
    int n = 0;

    cout << "Please enter a number: ";
    cin >> m;
    cout << "And another number: ";
    cin >> n;

    oh_boy(m, n);
    return 0;
}

void oh_boy(int m, int n) {
    if (n == 0) {
        cout << m << endl;
        return;
    }
    else {
        int r = 0;
        r = m % n;
        m = n;
        n = r;
        oh_boy(m, n);
    }
}
