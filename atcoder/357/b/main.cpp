#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;
  for (int i = 0; i < (int)s.size(); ++i) {
    char ch = s[i];
    if (ch >= 'a' && ch <= 'z') {
      count++;
    }
  }

  bool isLower = count > (int)s.size() / 2;

  for (int i = 0; i < (int)s.size(); ++i) {
    char ch = s[i];
    if (ch >= 'a' && ch <= 'z') {
      count++;
    }
  }

  if (isLower) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }

  cout << s << endl;
}
