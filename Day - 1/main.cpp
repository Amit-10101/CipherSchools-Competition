#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Length of array of line height: ";
    cin >> n;

    int arr[n], myArr[n][2];
    cout << "Array of line height: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        myArr[i][0] = i + 1;
        myArr[i][1] = arr[i];
    }

    int mul = INT_MIN;
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            int num1, num2, cross;
            num1 = myArr[j][0] - myArr[k][0];
            if (myArr[j][1] <= myArr[k][1]) {
                num2 = myArr[j][1];
            } else {
                num2 = myArr[k][1];
            }
            cross = num1 * num2;

            if (cross > mul) {
                mul = cross;
            }
        }
    }

    cout << "Maximum amount of water that can be stored: " << mul << endl;
    return 0;
}
