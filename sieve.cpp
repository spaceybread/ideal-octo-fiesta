#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 1;
  int c = 0;

  int n = 0;

  while (n < 10) {
    c = a + b;
    cout << c << '\n'; 
    a = b;
    b = c;
    c = 0;
    n = n + 1;
  }

  return 0;
}
