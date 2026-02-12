//factorial using recursion
#include <iostream>
using namespace std;
class Solution {
public:
  int factorial(int n) {
    if (n < 3)
      return n;

    return n * factorial(n - 1);
  }
};
int main() {
    int n = 5;
    Solution solution;
    int result = solution.factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}