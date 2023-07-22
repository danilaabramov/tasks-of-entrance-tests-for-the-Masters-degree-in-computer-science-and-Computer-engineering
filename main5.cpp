#include <iostream>

using namespace std;

int main() {
    int n, ans, max_range;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i - 1] == arr[i]) ++count;
        if (arr[i - 1] != arr[i] || i + 1 == n) {
            if ((!max_range || max_range < count) && count > 1) {
                max_range = count;
                ans = i - count + 1;
            }
            count = 1;
        }
    }
    if (max_range) cout << "Ответ: " << ans;
    else cout << "Что-то пошло не так";
}