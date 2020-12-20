#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=0,b=0,scorea=0,scoreb=0,p,q,temp=0;
        while(n--){
            cin >> p >> q;
            a = 0;
            b=0;
                while(p>0){
                    temp = p%10;    
                    a += temp;    
                    p /= 10;  
                }
                while(q>0){
                    temp = q%10;    
                    b += temp;    
                    q /= 10;  
                }
         //   cout << a <<" " << b << endl;
            if(a>b) scorea++;
            else if(b>a) scoreb++;
            else{
                scorea++;
                scoreb++;
            }
        }
        if(scoreb > scorea) cout << "1" << " " << scoreb << endl;
        else if(scoreb < scorea) cout << "0" << " " << scorea << endl;
        else cout << "2" << " " << scorea << endl; 
    }
    return 0;
}

