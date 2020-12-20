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
        int n,m;
        cin >> n >> m;
        int ans[n][m];
        int arr[n][m];
        for(int i=0; i<n; i++) for(int j = 0; j<m; j++) cin >> arr[i][j];
        int brr[m][n];
        for(int i=0; i<m; i++) for(int j = 0; j<n; j++) cin >> brr[i][j];
        
        if(n==1){
            for(int i = 0; i<m; i++) cout << arr[0][i] << " ";
            cout << endl;
            continue; 
        }
        if(m==1){
            for(int i = 0; i<n; i++) cout << brr[0][i] << endl;
            continue;
        }
    
            int crr[n][m];
            for(int i=0; i<n; i++){
                for(int j = 0; j<m; j++){
                    crr[i][j] = brr[j][i];
                    //cout << crr[i][j] <<" ";
                }
                //cout << endl;
            }
            int col = 0;
            for(int i = 0; i<m; i++){
                int p = arr[0][i];
                //cout <<"pks " <<p << endl;
                int flag = 0;
                int g;
                for(int j = 0; j<n; j++){
                    for(int k = 0; k<m; k++){
                        if(crr[j][k] == p){
                            //cout << "trans " << crr[j][k] << endl;
                            
                            g = k;
                            //cout << g << endl;
                            flag = 1;
                            break;
                        }
                    }
                    if(flag) break;
                }
                for(int l = 0; l<n; l++) ans[l][col] = crr[l][g];
                col++;
            }
            for(int i=0; i<n; i++){
                for(int j = 0; j<m; j++){
                    cout << ans[i][j] <<" ";
                }
                cout << endl;
            }
        
        // else{
        //     int crr[n][m];
        //     for(int i=0; i<n; i++){
        //         for(int j = 0; j<m; j++){
        //             crr[i][j] = brr[j][i];
        //             //cout << crr[i][j] <<" ";
        //         }
        //         //cout << endl;
        //     }
        //     int col = 0;
        //     for(int i = 0; i<m; i++){
        //         int p = arr[0][i];
        //         //cout <<"pks " <<p << endl;
        //         int flag = 0;
        //         int g;
        //         for(int j = 0; j<n; j++){
        //             for(int k = 0; k<m; k++){
        //                 if(crr[j][k] == p){
        //                     //cout << "trans " << crr[j][k] << endl;
                            
        //                     g = k;
        //                     //cout << g << endl;
        //                     flag = 1;
        //                     break;
        //                 }
        //             }
        //             if(flag) break;
        //         }
        //         for(int l = 0; l<m; l++) ans[l][col] = crr[l][g];
        //         col++;
        //     }
        //     for(int i=0; i<n; i++){
        //         for(int j = 0; j<m; j++){
        //             cout << ans[i][j] <<" ";
        //         }
        //         cout << endl;
        //     }

        





    }
    return 0;
}