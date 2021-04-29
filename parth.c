#include<stdio.h>
#define N 1000000007;

int* bsort(int array[],int n){  
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(array[i]<array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array;
}
int main(){
    int bowls=0,days=0,total=0;
    scanf("%d %d",&bowls,&days);
    int chocolates[bowls],q;
    for(int i=0; i<bowls; i++) scanf("%d",&chocolates[i]);
    if(bowls==1){
        for(int i=0; i<days-1; i++){
            q = chocolates[0]/3;
            total = (total + 3*q)%N;
            chocolates[0] = q + chocolates[0]%3;
        }
        total = total + chocolates[0];
    }
    else{
        for(int i=0; i<days; i++){
            bsort(chocolates,bowls);
            total = (total + chocolates[0])%N;
            chocolates[0]=(chocolates[0]/3 );  
        }
    }
    printf("%d\n",total);
    return 0;
}
