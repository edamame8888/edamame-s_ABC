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
  string s,ans = "";
  cin >> s;
  for(int i = 0; i < s.length(); i++){
    if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e'&& s[i] != 'o') ans += s[i];
  }
  cout << ans << endl;
  return 0;
}
