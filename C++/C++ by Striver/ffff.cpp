#include<iostream>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int i;
  string s;
  getline(cin, s);
  for( i = 1; i<= 100000; i++ ) {
    cout << s << "\n" ;
  }
  cout << "The End" << ", Total printed :" << i-1 << " times !!";
}