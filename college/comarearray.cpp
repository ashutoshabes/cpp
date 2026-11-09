#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < M; i++) {
        int count = 0;

        for (int j = 0; j < N; j++) {
            if (A[j] > B[i]) {
                count++;
            }
        }

        cout << count << " ";
    }

    return 0;
}