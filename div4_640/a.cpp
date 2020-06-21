// A
#include <bits/stdc++.h>
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const long double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
#define pb push_back
#define eb emplace_back
#pragma GCC optimize("Ofast")
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using P = pair<lli, lli>;
// vector<P> vp;
// vp.emplace_back(a[i], b[i]);
using vs = vector<string>;
using ll = long long;
// vector入力
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
  for (T &x : vec)
    is >> x;
  return is;
}
// vector出力
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec)
{
  // os << '{';
  for (int i = 0; i < vec.size(); i++)
  {
    os << vec[i] << (i + 1 == vec.size() ? "" : "");
  }
  // os << '}';
  return os;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, k, n, t, w, ans = 0, count = 0;
  string s;
  cin >> t;
  vlli d;
  rep(i, 0, t)
  {
    cin >> n;
    d.eb(n);
  }
  rep(i, 0, t)
  {
    vlli e;
    s = to_string(d[i]);
    rep(j, 0, s.size())
    {
      if (s[j] != '0' && j == 0)
      {
        ans = (s[j] - '0') * pow(10, (s.size() - 1));
        e.eb(ans);
      }
      else if (s[j] != '0' && j == 1)
      {
        ans = (s[j] - '0') * pow(10, (s.size() - 2));
        e.eb(ans);
      }
      else if (s[j] != '0' && j == 2)
      {
        ans = (s[j] - '0') * pow(10, (s.size() - 3));
        e.eb(ans);
      }
      else if (s[j] != '0' && j == 3)
      {
        ans = (s[j] - '0') * pow(10, (s.size() - 4));
        e.eb(ans);
      }
      else if (s[j] != '0' && j == 4)
      {
        ans = (s[j] - '0') * pow(10, (s.size() - 5));
        e.eb(ans);
      }
    }

    cout << e.size() << "\n";

    rep(l, 0, e.size())
    {
      cout << e[l] << ' ';
    }
    cout << "\n";
  }
}
