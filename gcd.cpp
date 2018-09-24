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

}

int oh_boy(int m, int n) {
    cout << m << endl << n << endl;
    if (n == 0) {
        cout << "!!" << m << " " << n << endl;
        return m;
    }
    else {
        int r = 0;
        r = m % n;
        m = n;
        n = r;
        oh_boy(m, n);
    }
}
