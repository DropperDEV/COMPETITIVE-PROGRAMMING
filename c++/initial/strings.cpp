#include <bits/stdc++.h>

using namespace std;

int main()
{
    string palavra{"blabla"}, palavra2{" aaa"};
    string uniao{palavra + palavra2};
    getline(cin, palavra);
    cout << palavra << ':' << ' ' << palavra.size() << '\n'
         << uniao << ": " << uniao.size() << '\n';
    return 0;
}