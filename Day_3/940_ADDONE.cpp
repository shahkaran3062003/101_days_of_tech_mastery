// https://www.codechef.com/practice/course/strings/STRINGS/problems/ADDONE

#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector < pair<int, pii>
#define mii map<int, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) (int() x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define LOOP(n) for (int i = 0; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define but(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << ':' << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

const int N = 200005;

void reverseStr(string &str)
{
    int i = 0, j = str.length() - 1;
    char temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int toNumber(char ch)
{
    return ch - '0';
}

char toChar(int num)
{
    return num + '0';
}

void solve()
{
    string num;
    cin >> num;

    reverseStr(num);

    int n1 = toNumber(num[0]);
    int rem = 0;
    n1++;

    if (n1 == 10)
    {
        num[0] = toChar(0);
        rem = 1;
        int i = 1;
        while (rem && i < num.size())
        {
            n1 = toNumber(num[i]);
            n1++;
            if (n1 == 10)
            {
                num[i] = toChar(0);
            }
            else
            {
                rem = 0;
                num[i] = toChar(n1);
            }
            i++;
        }
        if (rem)
        {
            num += '1';
        }
    }
    else
    {
        num[0] = toChar(n1);
    }

    reverseStr(num);
    cout << num << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}