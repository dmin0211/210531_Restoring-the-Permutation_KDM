#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    string str1, str2;
    cin >> str1 >> str2;
    int max_cnt = 0;
    for (int j = 0; j < str1.size(); ++j) {
      int cnt = 0;
      for (int k = 0; k < str2.size(); ++k) {
        if (str1[j] == str2[k]) {
          cnt = 1;
          for (int l = 1; l < str2.size() - k; ++l) {
            if (str1[j + l] == str2[k + l]) cnt++;
            else {
              if (max_cnt < cnt) max_cnt = cnt;
              break;
            }
          }
          if (max_cnt < cnt) max_cnt = cnt;
        }
      }
    }
    cout << str1.size() + str2.size() - 2*max_cnt << endl;
  }
}