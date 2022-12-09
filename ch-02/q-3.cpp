#include <iostream>

int main() {
  int rows = 8, cols = 14;
  int idx = 1;
  for (int i = 0; i < rows; i++) {
    int n_s;
    if (i >= 4) {
      n_s = i + 1 - (2 * idx);
      idx++;
    } else {
      n_s = i;
    }
    int n_h = n_s + 1;
    if (i == 3 || i == 4) {
      n_h *= 2;
    }
    // first space
    for (int a = 0; a < n_s; a++) {
      std::cout << " ";
    }
    // first hash
    for (int b = 0; b < n_h; b++) {
      std::cout << "#";
    }
    // second space
    for (int c = 0; c < (cols - ((2 * n_s) + (2 * n_h))); c++) {
      std::cout << " ";
    }
    // second hash
    if (n_h != 8) {
      for (int d = 0; d < n_h; d++) {
        std::cout << "#";
      }
    }
    
    // third space
    // technically not required
    std::cout << std::endl;
  }
}