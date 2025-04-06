
#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int number2(int i){
    int res = 0;
    while (i)
    {
        if (i%10 == 2) res++;
        i /= 10;
    }
    return res;
}

int main(){
    int l, r; cin>>l>>r;
    int ans = 0;
    for(int i=l;i<=r;i++){
        ans+= number2(i);
    }
    cout<<ans<<endl;
    return 0;
}
// 21 32 43
// 21 52 73
// 31 
