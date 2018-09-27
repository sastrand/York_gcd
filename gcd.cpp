#include <iostream>
#include <cmath>

using namespace std;

int oh_boy(int m, int n);

int main() {
    int m = 0;
    int n = 0;

    cout << "Please enter a number: ";
    cin >> m;
    cout << "And another number: ";
    cin >> n;

    int num = oh_boy(m, n);
    cout << "!" << num << endl;

    return 0;
}

int oh_boy(int m, int n) {
    if (n == 0) {
        cout << m << endl;
        return m;
    }
    else {
        int r = 0;
        r = m % n;
        m = n;
        n = r;
        return oh_boy(m, n);
    }
}
