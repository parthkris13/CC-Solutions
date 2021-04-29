
#include <iostream> 
#include<bits/stdc++.h>
using namespace std; 

 
void FindAllElements(int n, int k) 
{ 
	
	int sum = k; 

	
	int A[k]; 
	fill(A, A + k, 1); 

	for (int i = k - 1; i >= 0; --i) { 
		while (sum + A[i] <= n) { 
			sum += A[i]; 
			A[i] *= 2; 
		} 
	} 

	if (sum != n) cout << "-1"<<endl;
	else{ 
        string s;
		for (int i = 0; i < k; ++i) s+=('a'+ log2(A[i]));
        cout << s << endl; 
	} 
} 
int main() 
{ 
	int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
	    FindAllElements(k,n);

    }

	return 0; 
} 
