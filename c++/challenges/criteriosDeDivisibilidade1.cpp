#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    bool div2 = false;
    bool div3 = false;
    bool div5 = false;

    if ( n % 2 == 0)
    {
        div2 = true;
    }
      if ( n % 3 == 0)
    {
        div3 = true;
    }  if ( n % 5 == 0)
    {
        div5 = true;
    }
    
    if(div2){
    cout << 'S' << '\n';

    }
    if(!div2){
    cout << 'N' << '\n';

    }
    if(div3){
    cout << 'S' << '\n';

    }
    if(!div3){
    cout << 'N' << '\n';

    }
    if(div5){
    cout << 'S' << '\n';

    }
    if(!div5){
    cout << 'N' << '\n';

    }

    return 0;
}