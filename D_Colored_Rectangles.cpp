#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int r,g,b;
    cin >> r >> g >> b;
    int ans = 0;
    int rrr[r], grr[g], brr[b];
    for(int i = 0; i<r; i++) cin >>rrr[i];
    for(int i = 0; i<g; i++) cin >>grr[i];
    for(int i = 0; i<b; i++) cin >>brr[i];
    sort(rrr,rrr+r);
    sort(grr,grr+g);
    sort(brr,brr+b);
   // cout << "chronos" << endl;

    while((r>0 && b>0) || (g>0 && b>0) || (r>0 && g>0)){
       // cout << "chronos" << endl;
        if((rrr[r-1] == grr[g-1]) && (grr[g-1] == brr[b-1])){
            if(r >= g && g >= b){
                ans += (rrr[r-1]*grr[g-1]);
                r--;
                g--;
            }
            else if(r >= b && b >= g){
                ans += (rrr[r-1]*brr[b-1]);
                r--;
                b--;
            }
            else if(g >= r && r >= b){
                ans += (rrr[r-1]*grr[g-1]);
                r--;
                g--;
            }
            else if(g >=b && b >= r){
                ans += (brr[b-1]*grr[g-1]);
                b--;
                g--;
            }
            else if(b >= r && r >= g){
                ans += (rrr[r-1]*brr[b-1]);
                r--;
                b--;
            }
            else if(b >= g && g >= r){
                ans += (brr[b-1]*grr[g-1]);
                b--;
                g--;
            }
        }
        else if((rrr[r-1] >= brr[b-1]) && (brr[b-1] >= grr[g-1]) && r>0 && b>0 && g>0){
            ans += (rrr[r-1]*brr[b-1]);
            r--;
            b--;
        }
        else if((rrr[r-1] >= grr[g-1]) && (grr[g-1] >= brr[b-1])&& r>0 && b>0 && g>0){
            ans += (rrr[r-1]*grr[g-1]);
            r--;
            g--;
        }
        else if((grr[g-1] >= rrr[r-1]) && (rrr[r-1] >= brr[b-1])&& r>0 && b>0 && g>0){
            ans += (rrr[r-1]*grr[g-1]);
            r--;
            g--;
        }
        else if((grr[g-1] >= brr[b-1]) && (brr[b-1] >= rrr[r-1])&& r>0 && b>0 && g>0){
            ans += (brr[b-1]*grr[g-1]);
            b--;
            g--;
        }
        else if((brr[b-1] >= rrr[r-1]) && (rrr[r-1] >= grr[g-1])&& r>0 && b>0 && g>0){
            ans += (rrr[r-1]*brr[b-1]);
            r--;
            b--;
        }
        else if((brr[b-1] >= grr[g-1]) && (grr[g-1] >= rrr[r-1])&& r>0 && b>0 && g>0){
            ans += (grr[g-1]*brr[b-1]);
            g--;
            b--;
        }
        else if(r==0){
            while(b>0 && g>0){
                ans += (grr[g-1]*brr[b-1]);
                g--;
                b--;
            }
        }
        else if(g==0){
            while(b>0 && r>0){
                ans += (rrr[r-1]*brr[b-1]);
                r--;
                b--;
            }
        }
        else if(b==0){
            while(r>0 && g>0){
                ans += (grr[g-1]*rrr[r-1]);
                r--;
                g--;
            }
        }

    }
    

    cout << ans << endl;

        

    
    return 0;    
}

