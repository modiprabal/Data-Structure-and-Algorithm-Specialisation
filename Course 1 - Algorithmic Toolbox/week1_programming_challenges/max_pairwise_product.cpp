#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, max1 = 0, max2 = 0, maxi = 0;
    cin>>n;
    vector<ll> vec(n,0);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
        max1 = max(vec[i], max1);
        if(max1 == vec[i])
            maxi = i;
    }

    for(int i = 0; i < n; i++)
        if(i != maxi)
            max2 = max(max2, vec[i]);

    cout << max1*max2;
}
