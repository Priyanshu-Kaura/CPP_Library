#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>

using namespace std;

int f(int n , vector<int> & dp){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n] != -1) return dp[n];
    return 1 + min(f(n - 1, dp), min((n % 2 == 0 ? f(n / 2, dp) : INT_MAX), (n % 3 == 0 ? f(n / 3, dp) : INT_MAX)));
}

int fbu(vector<int> & dp){
    int n = dp.size();

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4 ; i < n ; i++){
         dp[i] = 1 + min(dp[i - 1], min((i % 2 == 0 ? dp[i / 2] : INT_MAX), (i % 3 == 0 ? dp[i / 3] : INT_MAX)));
    }
    return dp[n - 1];
}

int main(){
    int n; 
    cout<<"Enter n : ";
    cin >> n;
    vector<int> dp(n+1 , -1);
    cout <<"By DP : " << f(n , dp) <<"\nBy Tabulation : " << fbu(dp);
}
