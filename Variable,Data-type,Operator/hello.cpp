// simple way
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];
    int t;
    cin >> t;
    while(t--){
        cin >> str;
        for(int i = 0; i<strlen(str); i++){
            cout << int(str[i]);
        }
        cout << endl;
    }
    return 0;
}