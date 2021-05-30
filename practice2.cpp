#include <iostream>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using namespace std;

int k, n;

int main() {
  int t;
  cin>>t;
  for (int i = 0; i < t; ++i) {
    string str;
    cin >> n >> k;
    cin >> str;
    bool flag_s = false;
    int pointer1 = 0;
    int last_index;
    for (int j = 0; j < n; ++j) {
      if (str[j] == '*') {
        last_index = j;
        if (!flag_s) {
          pointer1 = j;
          str[j]='X';
          flag_s = true;
        }
      }
      if (j - pointer1 > k) {
        for (int l = j - 1; l >= pointer1; --l) {
          if (str[l] == '*') {
            pointer1 = l;
            str[l] = 'X';
            break;
          }
        }
      }
    }
    str[last_index] = 'X';
    int answer = 0;
    for (int l = 0; l < str.size(); ++l) {
      if (str[l]=='X') answer++;
    }
    cout<<answer<<endl;
  }
}