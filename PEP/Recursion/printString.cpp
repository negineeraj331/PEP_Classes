// print string
#include <iostream>
#include <string>

using namespace std;

void print_rec(const string &str, int ind = 0) {
  int sz = str.size();

  if (ind < 0 || ind > (sz - 1)) {
    return;
  }

  cout << str[ind] << endl;
  print_rec(str, ind + 1);
}

int main() {
  string str;
  cin >> str;

  print_rec(str);

  return 0;
}
