// 4.1 Awesome Pattern Questions -1 | Guaranteed Placement Course
#include <iostream>
#include <sstream>
using namespace std;

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

// half payramid after 180 rotation
string halfPyramid(int row=5){
  int i, j;
  string pattern="";
  for(i=1; i<=row; i++){
    for(j=1; j<=row; j++){
      if(j<=row-i){
        pattern+=" ";
      }else{
        pattern+="*";
      }
    }
    pattern+="\n";
  }
  return pattern;
}

// half pyramid using number
// 1
// 22
// 333
// 4444
// 55555
string halfPyramidUsingNumber(int row=5){
  int i,j;
  string pattern="";
  for (i=1; i<=row; i++){
    for(j=1; j<=i; j++){
      stringstream ss;
      ss << i;
      pattern+=ss.str();
    }
    pattern+="\n";
  }
  return pattern;
}

string halfPyramidUsingNumberbycount(int row=5){
  int i,j, num=0;
  string pattern="";
  for (i=1; i<=row; i++){
    for(j=1; j<=i; j++){
      num=num+1;
      stringstream ss;
      ss << num;
      pattern+=ss.str()+" ";
    }
    pattern+="\n";
  }
  return pattern;
}

// butterfly pattern for n=4

string butterflyPattern(int num=5){
  int i, j;
  string pattern="";
  for (i=1; i<=num; i++){
    for(j=1; j<=i; j++){
      pattern+="*";
    }
    int space = 2*num-2*i;
    for (int k=1; k<=space; k++){
      pattern+=" ";
    }
    for(j=1; j<=i; j++){
      pattern+="*";
    }
    pattern+="\n";
  }
    for (i=num; i>=1; i--){
    for(j=1; j<=i; j++){
      pattern+="*";
    }
    int space = 2*num-2*i;
    for (int k=1; k<=space; k++){
      pattern+=" ";
    }
    for(j=1; j<=i; j++){
      pattern+="*";
    }
    pattern+="\n";
  }
  return pattern;
}

int main() {
  cout << "Awesome Pattern Questions -1 \n";
  // cout << invertedPyramid(10);
  string data =  butterflyPattern(4);
  // halfPyramidUsingNumberbycount();
  // halfPyramidUsingNumber();
  //halfPyramid(5);//invertedPyramid(10);
  cout << data;
  return 0;
}
