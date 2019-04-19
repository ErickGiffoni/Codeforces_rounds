// problem link: https://codeforces.com/problemset/problem/791/A
// code author: Erick Giffoni - https://github.com/ErickGiffoni/Codeforces_rounds

#include <iostream>
using namespace std;

int main(){

  int a, b, counter = 0;
  cin >> a >> b;
  while(a<=b){
    a *= 3; b *= 2;
    counter++;
  }
  cout << counter << "\n";

  return 0;
}
