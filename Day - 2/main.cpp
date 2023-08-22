#include <iostream>
using namespace std;

int tripletPresent(const int arr[], int n) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            for (int z = 0; z < n; z++) {
                int sum = arr[x] + arr[y] + arr[z];
                if (sum == 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    int arr[n];
    cout << "arr[] = ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = tripletPresent(arr, n);
    cout << result << endl;

    return 0;
}
