
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n; cin>>n;int ans = 0;
    for(int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            int c = sqrt(i*i+j*j);
            if (c>n or c*c !=i*i+j*j) continue;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}