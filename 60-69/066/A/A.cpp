#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int maxNum = max(max(a,b),c);
  cout << a + b + c - maxNum << endl;
}
