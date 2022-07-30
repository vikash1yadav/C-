// 4.1 Awesome Pattern Questions -1 | Guaranteed Placement Course
#include <iostream>
using namespace std

// pyramid
string Pyramid(int row = 5) {
  int i, j;
  string pattern = "";
  for (i = 1; i <= row; i++) {
    for (j = 1; j<= i; j++) {
      pattern += "*";
      // cout<<"*";
    }
    pattern += "\n";
    // cout<<endl;
  }
  return pattern;
}

// inverted pyramid 
string invertedPyramid(int row = 5) {
  int i, j;
  string pattern = "";
  for (i = 1; i <= row; i++) {
    for (j = row; j >= i; j--) {
      pattern += "*";
      // cout<<"*";
    }
    pattern += "\n";
    // cout<<endl;
  }
  return pattern;
}

// butterfly pattern




int main() {
  cout << "Awesome Pattern Questions -1 \n";
  // cout << invertedPyramid(10);
  string data = Pyramid();//invertedPyramid(10);
  cout << data;
  return 0;
}
