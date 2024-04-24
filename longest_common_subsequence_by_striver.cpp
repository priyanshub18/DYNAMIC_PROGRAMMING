#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
string a;
string b;
vector<vector<int> > dp;
int f(int i , int j){
    if(i < 0 or j < 0 ) return 0;
    int ans = 0;

    if(dp[i][j] != -1) return  dp[i][j];
    if(a[i] == b[j]){
        ans=  1 + f(i-1 , j-1);
    }

    else{
        ans = max(f(i-1, j) , f(i , j -1 ));
    }

    return dp[i][j] = ans;
}                      
int main(){
    a = "abcde", b = "abcs";
    int i = a.size();
    int j = b.size();

    dp.resize(i , vector<int>(j , -1));
    cout<<f(i-1,j-1);
    return 0;
}