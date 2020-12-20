#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int covid(int n, int infection[], int count, int arr[]){
    for(int j = 0; j<n; j++){
                if(infection[j] == 0) continue;
                else{
                    for(int  k = 0; k<n; k++){
                        if(j == k) continue;
                        if(infection[k] == 1) continue;
                        else{
                            if(k < j && arr[k] > arr[j]){
                                infection[k] = 1;
                                count++;
                            }
                            else{
                                if(k > j && arr[k] < arr[j]){
                                    infection[k] = 1;
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
            return count;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int infection[10] = {0};
        int mini = INT_MAX, maxi = INT_MIN;
        int count = 0;
        for(int i = 0; i<n; i++){
            count = 1;
            memset(infection, 0, sizeof(infection));
            infection[i] = 1;
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[i]){
                    if(infection[j] == 0){
                        count++;
                        infection[j] = 1;
                    }
                    for(int k = i-1; k>=0; k--){
                        if(arr[k] > arr[j] && arr[k]<=arr[i] && infection[k]==0){
                            count++;
                            infection[k] = 1;
                        }
                    }
                }
            }
            for(int j = i-1; j>=0; j--){
                if(arr[j] > arr[i]){
                    if(infection[j] == 0){
                        count++;
                        infection[j] = 1;
                    }
                    for(int k = i+1; k<n; k++){
                        if(arr[k] < arr[j] && arr[k]>=arr[i] && infection[k]==0){
                            count++;
                            infection[k] = 1;
                        }
                    }
                }
            }
            mini = min(mini, count);
            maxi = max(maxi, count);  
        } 
        cout << mini << " " << maxi << endl;
    }
    return 0;

}