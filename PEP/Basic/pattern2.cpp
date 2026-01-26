// while loop implementation
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
