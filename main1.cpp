#include <iostream>

using namespace std;

int main() {
    int n, ans, min_range;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i - 1] == arr[i]) ++count;
        if (arr[i - 1] != arr[i] || i + 1 == n) {
            if ((!min_range || min_range > count) && count > 1) {
                min_range = count;
                ans = i - count + 1;
            }
            count = 1;
        }
    }
    if (min_range) cout << "Ответ: " << ans;
    else cout << "Что-то пошло не так";
}