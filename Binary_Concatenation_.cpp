#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t,n;
int arr[100007];
int len(int x){
	int cnt=0;
	while(x!=0){
		x/=10;
		cnt++;
	}
	return cnt;
}

bitset <60> concat( const bitset <30> & b1, const bitset <30> & b2 ) {
    string s1 = b1.to_string();
    string s2 = b2.to_string();
    return bitset <60>( s1 + s2 );
}

int BinConcat(int x,int y){
    int Xlen = len(binX);
	int Ylen = len(binY);
	bitset<30> binX(x); //cout<<binX<<endl;
	bitset<30> binY(y); //cout<<binY<<endl;
   cout << binX << "**" << binY << endl;
	bitset<60> binXpY = concat(binX, binY);
  // cout << binXpY << endl;
	bitset<60>  binYpX = concat(binY, binX);
  // cout << binYpX << endl;
   
	int ans = binXpY.to_ullong() - binYpX.to_ullong();
   // cout << convertBinaryToDecimal(binXpY) << " " << convertBinaryToDecimal(binYpX) << endl;
	//cout<<ans<<" ";
	return ans;
}

int32_t main(){
    IOS;
   	cin>>t;
   	while(t--){
   		cin>>n;
   		arr[n];
   		int val=0,max=-99999;
   		for(int i=0; i<n; i++){
   			cin>>arr[i];
   		}

   		if(n==1){
   			cout<<0<<endl;
   			continue;
   		}
   		else{
   			for(int i=0; i<n; i++){
   				for(int j=0; j<n; j++){
   					val = BinConcat(arr[i],arr[j]);
   					if(val>max){
   						max=val;
   					}
   				}
   			}
   		}
   		//BinConcat(5,9);
   		cout<<max<<endl;
   	}
    return 0;
}