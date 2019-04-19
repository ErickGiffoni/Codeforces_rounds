// problem link: https://codeforces.com/problemset/problem/705/A
// code author: Erick Giffoni - https://github.com/ErickGiffoni/Codeforces_rounds

#include <iostream>
using namespace std;

int main(){

string hate = "I hate";
string love = "I love";
string feeling = hate;
int n, counter = 1;
cin >> n;
while (counter < n){
  feeling.append(" that ");
  if (counter%2 == 0) feeling.append(hate);
  else feeling.append(love);
  counter++;
}
cout << feeling << " it" << "\n";

return 0;
}
