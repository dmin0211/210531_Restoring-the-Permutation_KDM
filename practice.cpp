#include <iostream>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main() {
  FIO;
  int t;
  cin>>t;
  for (int i = 0; i < t; ++i) {
    long long n, m, x;
    cin >> n >> m >> x;
    long long index1 = (long long) x / n;
    long long offset = x % n;
    long long answer = (offset - 1) * m + index1 + 1;
    if (offset == 0) answer = (n-1)*m + index1;
    cout<<answer<<endl;
  }
}