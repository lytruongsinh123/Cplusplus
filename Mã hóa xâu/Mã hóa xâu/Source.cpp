#include<iostream>
#include<vector>
#define ll long long
#define de double
#define o  10005

using namespace std;

string S, T; // S là xâu nhập, T là xâu in ra
int sz_S;
void inp()
{
    cin >> S;
    sz_S = S.size();
    reverse(S.begin(), S.end());
}

vector<int>g[26];
int s[o][26];   //ttt
void calc_s()
{
    for (int i = 0; i < sz_S; i++)
        for (char j = 'a'; j <= 'z'; j++)
            s[i + 1][j - 'a'] = s[i][j - 'a'] + (S[i] == j);
}
int cnt[26];
bool check(int id)
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (s[sz_S][i - 'a'] / 2 == 0)continue;
        int sl = s[sz_S][i - 'a'] - s[id][i - 'a'];
        if (cnt[i - 'a'] == s[sz_S][i - 'a'] / 2 && S[id] == i)return 0;
        if (sl + cnt[i - 'a'] < s[sz_S][i - 'a'] / 2)return 0;
    }
    return 1;
} 


// check phần còn lại có đủ ký tự tạo ra xâu không
void calc_g()
{
    for (int i = sz_S - 1; i >= 0; i--)
        g[S[i] - 'a'].push_back(i);
}
void build()
{
    while (1)
    {
        int sz_T = T.size();
        if (sz_T == sz_S / 2)break;
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (g[i - 'a'].empty())continue;
            int id = g[i - 'a'].back();
            if (check(id))
            {
                cnt[i - 'a']++;
                T = T + i;

                for (int j = 'a'; j <= 'z'; j++)
                    while (!g[j - 'a'].empty() && g[j - 'a'].back() <= id)g[j - 'a'].pop_back();
                break;
            }
        }
    }
    cout << T;
}
void oup()
{
    calc_s();
    calc_g();
    build();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    inp();
    oup();
}