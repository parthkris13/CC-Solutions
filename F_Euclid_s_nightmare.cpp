#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int M =1e9+7;

int arr[500069];
int ans[500069];    
int parth[500069];

int search(int x){
  if(parth[x]==x) return x;
  else return parth[x]=search(parth[x]);
}
int32_t main(){
    IOS;
    int n,m;
    cin >> n >> m;
    int total=0;
    int pks=1;
    //coxt << "pks" << endl;
    for(int i=1;i<=m;i++) parth[i]=i;
    for(int i=1;i<=n;i++){
        int o;
        cin >> o;
        if(o==1){
            int x;
            cin >> x;
            x = search(x);
            if(arr[x]) continue;
            else{
                arr[x]=1;
                pks =(pks*2%M);
                ans[++total]=i;
            }
        }
        else{
            int a,b;
            cin >> a >> b;
            int x,y;
            x = search(a);
            y = search(b);
            if(x==y) continue;
            else{
                if(arr[x]==1 && arr[y]==1)continue;
                else{
                    if(arr[x]==0&&arr[y]==0) parth[x]=y;
                    else{
                        parth[x]=y;
                        arr[y]=1;
                    }
                    pks = (pks*2%M);
                    total++;
                    ans[total]=i;
                }
            }
        }
    }
    int answer = total;
    cout << pks << " " << answer << endl;
    for(int i=1;i<=answer;i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}