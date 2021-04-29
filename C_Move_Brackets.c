#include<stdio.h>
#include<string.h>
char str[51];
char stack[51];
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    scanf("%s",str);
    int len = strlen(str),k =-1, count=0;
    for(int i=0;i<len;i++){
        if(str[i]=='(') stack[++k]=str[i];
        else{
            if(k<0) count++;
            else{
                if(str[i]==')'&&stack[k]=='(') k--;
                else count++;
            }
        }
    }
    cout << count << endl;
    }
}