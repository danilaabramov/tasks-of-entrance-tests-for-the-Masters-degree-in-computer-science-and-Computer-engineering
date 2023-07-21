#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, count = 0;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i) arr[i] = new int[n];
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> arr[i][j];
    for (int i = 0; i < n; ++i)
        for (int j = i + 1 > n - i ? i + 1 : n - i; j < n; ++j) {
            ++count;
            sum += arr[i][j];
        }
    cout << "Ответ: " << (double) sum / count;
}