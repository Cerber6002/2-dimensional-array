#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int counter = 1;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; ++j) {
                cout << counter << " ";
                counter++;
            }
        } else {
            for (int j = N; j > 0; --j) {
                cout << counter + N - j << " ";
                counter++;
            }
        }
        cout << endl;
    }

    return 0;
}

