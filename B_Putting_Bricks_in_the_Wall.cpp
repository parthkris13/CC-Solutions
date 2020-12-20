#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str[n];
        for(int i = 0;i < n; i++) cin >> str[i];
        int a = str[0][1]-'0',b = str[1][0]-'0',c = str[n-2][n-1]-'0',d = str[n-1][n-2]-'0';
        //cout << a << " " << b << " " << c <<  " " << d << endl;
        if( a==b && c==d ){
            if(a==c){
                cout << 2 << endl;
                cout << 1 << " " << 2 << endl;
                cout << 2 << " " << 1 << endl;
            }
            else cout << 0 << endl;
        }
        else{
            if(a==b && c!=d){
                if(a==0){
                    if(c!=0){
                        cout << 1 << endl;
                        cout << n << " " << n-1 << endl;
                    }
                    else{
                        cout << 1 << endl;
                        cout << n-1 << " " << n << endl;
                    }
                }
                else{
                    if(c==1){
                        cout << 1 << endl;
                        cout << n-1 << " " << n << endl;
                    }
                    else{
                        cout << 1 << endl;
                        cout << n << " " << n-1 << endl;
                    }
                }   
            }
            else if(c==d && a!=b){
                if(c==0){
                    if(a!=0){
                        cout << 1 << endl;
                        cout << 2 << " " << 1 << endl;
                    }
                    else{
                        cout << 1 << endl;
                        cout << 1 << " " << 2 << endl;
                    }
                }
                else{
                    if(a!=1){
                        cout << 1 << endl;
                        cout << 2 << " " << 1 << endl;
                    }
                    else{
                        cout << 1 << endl;
                        cout << 1 << " " << 2 << endl;
                    }
                }
            }
            else{
                cout << 2 << endl;
                if(a!=c){
                    cout << 1 << " " << 2 << endl;
                    cout << n << " " << n-1 << endl;
                }
                else{
                    cout << 2 << " " << 1 << endl;
                    cout << n-1 << " " << n << endl;
                }
            }    
        }
    }
    return 0;
}