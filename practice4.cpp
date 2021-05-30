#include <iostream>
#include <map>
#include <queue>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using namespace std;

int t;

int main() {
  FIO;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, temp;
    map<int, int> m;
    cin >> n;
    for (int j = 0; j < n; ++j) {
      cin >> temp;
      m[temp]++;
    }
    priority_queue<int> q;
    for (auto iter = m.begin(); iter != m.end(); iter++) {
      q.push((*iter).second);
    }
    int cnt = 0;
    while (q.size() > 1) {
      int s1 = q.top();
      q.pop();
      int s2 = q.top();
      q.pop();
      cnt++;
      if (s1 - 1 != 0) q.push(s1 - 1);
      if (s2 - 1 != 0) q.push(s2 - 1);
    }
    cout<<n-2*cnt<<endl;
  }
}