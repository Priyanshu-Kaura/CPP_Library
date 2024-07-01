#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

vector<int> get_digits(int n) {
    vector<int> result;
    while (n > 0) {
        if(n%10 != 0)result.push_back(n % 10);
        n /= 10;
    }
    return result;
}

int f(int n){
    if(n == 0) return 0;
    if(n <= 9) return 1;

    vector<int> digits = get_digits(n);

    int result = INT_MAX;
    for(int i=0 ; i < digits.size() ; i++){
        result = min(result , f(n - digits[i]));
    }

    return result + 1;
}

int ftb(int n , vector<int>& dp){
    if(n == 0) return 0;
    if(n <= 9) return 1;
    if(dp[n] != -1) return dp[n];
    vector<int> digits = get_digits(n);

    int result = INT_MAX;
    for(int i=0 ; i < digits.size() ; i++){
        result = min(result , ftb(n - digits[i] , dp));
    }

    dp[n] = result + 1;
    return dp[n];
}

int fbu(int n , vector<int>& dp){
    dp[0] = 0;
    for(int i = 1 ; i<=9 ; i++) dp[i] = 1;
 
    for(int i = 10 ; i <= n ; i++){
        vector<int> digits = get_digits(i);
        int result = INT_MAX;
        for(int j = 0 ; j < digits.size() ; j++){
            result = min(result , dp[i - digits[j]]);
        }
        dp[i] = 1 + result;
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1 , -1);
    cout<<fbu(n , dp);
}