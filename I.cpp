#include <iostream>
using namespace std;

int main() {
    int na, ma, nb, mb;
    cin >> na >> ma; 
    int A[100][100];

    // Input matrix A
    for (int i = 0; i < na; ++i) {
        for (int j = 0; j < ma; ++j) {
            cin >> A[i][j];
        }
    }

    cin >> nb >> mb; 
    int B[100][100];

    // Input matrix B
    for (int i = 0; i < nb; ++i) {
        for (int j = 0; j < mb; ++j) {
            cin >> B[i][j];
        }
    }

    if (ma != nb) {
        cout << "-1" << endl; 
        return 0;
    }

    int C[100][100];
    for (int i = 0; i < na; ++i) {
        for (int j = 0; j < mb; ++j) {
            int sum = 0;
            for (int k = 0; k < ma; ++k) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    cout << na << " " << mb << endl; 

    // Output matrix C
    for (int i = 0; i < na; ++i) {
        for (int j = 0; j < mb; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
