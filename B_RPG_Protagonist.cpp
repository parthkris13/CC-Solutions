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
        int p,f;
        cin >> p >> f;
        //int p = p+f;
        int ans1=0, ans2=0;
        int cnts, cntw, s, w;
        cin >> cnts >> cntw;
        cin >> s >> w;
        int cs = cnts, cw = cntw;
        int a1=0, a2=0;
        int max = 0;
        int x,y;
        int p1=0,p2=0;
        int wastage = INT_MAX;
        while(cs>0){
           // cout << cs << endl;
           if(s*cs > p){
                cs--;
                continue;
            }
            int balance = p - (s*cs);
            int p11=cs, p22;
            int wa;
            a1+=cs;
            if(balance/w <= cntw) {
                a1+= balance/w;
                wa = balance - w*(balance/w);
                p22 = balance/w; 
            }
            else{
                a1+=cntw;
                wa = balance - w*cntw;
                p22 = cntw;
            }
            if(a1>max){
                max = a1;
                p1 = p11;
                p2 = p22;
            }
            else if(a1 == max){
                if(wa < wastage){
                    p1 = p11;
                    p2 = p22;
                }
            }
            a1 = 0;
            cs--;
            //cout << cs << " " << p1 << " " << p2 << endl; 
        }
        //cout << p1 << " " << p2 << endl;
        max = 0;
        int p3=0, p4 = 0;
        wastage = INT_MAX;
        cs = cnts - p1;
        cw = cntw - p2;
         while(cw>0){
           // cout << cs << endl;
           if(w*cw > f){
                cw--;
                continue;
            }
            int balance = f - (w*cw);
            int p11=cw, p22;
            int wa;
            //cout << balance << endl;
            a1+=cw;
            if(balance/s <= cs) {
                a1+= balance/s;
                wa = balance - s*(balance/s);
                p22 = balance/s; 
            }
            else{
                a1+=cs;
                wa = balance - s*cs;
                p22 = cs;
            }
            if(a1>max){
                max = a1;
                p3 = p11;
                p4 = p22;
            }
            else if(a1 == max){
                if(wa < wastage){
                    p3 = p11;
                    p4 = p22;
                }
            }
            a1 = 0;
            cw--;
            //cout << cw << " " << p3 << " " << p4 << endl; 
        }
        //cout << p1 <<" "<< p2 <<" "<< p3 <<" " << p4 << endl;
        cout << p1+p2+p3+p4 << endl;        
    }
    return 0;
}

