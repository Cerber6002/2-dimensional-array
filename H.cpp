#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c; 
    cin >> d >> e >> f; 

    int det = a * e - b * d;

    if (det != 0) {
        double x = (c * e - b * f) / static_cast<double>(det);
        double y = (a * f - c * d) / static_cast<double>(det);

        cout << fixed;
        cout.precision(3);
        cout << x << endl << y << endl;
    } else {
        cout  << endl;
    }

    return 0;
}
