#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n < 1)
        return n;
    return n * fact(n - 1);
}
int main(){
    int n;
    cin >> n;
    cout << "The Factorial of " << n << " is : " << fact(n);
    return 0;
}
