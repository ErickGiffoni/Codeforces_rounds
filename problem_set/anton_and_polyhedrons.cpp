// problem link: https://codeforces.com/problemset/problem/785/A
// code author: Erick Giffoni - https://github.com/ErickGiffoni/Codeforces_rounds

#include <iostream>
#include <list>
using namespace std;

int main(){

  string tetrahedron = "Tetrahedron", cube = "Cube",
         octahedron = "Octahedron", dodecahedron = "Dodecahedron",
         icosahedron = "Icosahedron";
  int n;
  cin >> n;
  string polyhedron;
  int number_of_faces = 0;
  while (n>0){
    cin >> polyhedron;
    if(polyhedron.compare(tetrahedron) == 0) number_of_faces += 4;
    else if(polyhedron.compare(cube) == 0) number_of_faces += 6;
    else if(polyhedron.compare(octahedron) == 0) number_of_faces += 8;
    else if(polyhedron.compare(dodecahedron) == 0) number_of_faces += 12;
    else if(polyhedron.compare(icosahedron) == 0) number_of_faces += 20;
    polyhedron.erase();
    n--;
  }
  cout << number_of_faces << "\n";

  return 0;
}
