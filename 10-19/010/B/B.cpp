#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

int main(){
  int n,a,ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
     cin >> a;
     while(a % 2 == 0 || a % 3 == 2){
      ans++;
      a--;
     }
  }

  cout << ans << endl;

  return 0;
}
