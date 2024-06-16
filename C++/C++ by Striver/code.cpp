#include<iostream>
using namespace std;

int main() {
  int i;
  string s;
  getline(cin, s);
  for( i = 0; i<= 100000; i++ ) {
    cout << s <<  i << "\n" ;
  }
  cout << "\n";
}