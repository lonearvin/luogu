# B3941 [GESP样题 五级] 小杨的锻炼
这个值得学习

最小公倍数(LCM)可以通过最小公约数GCD来计算。
$$
\mathrm{LCM}(a,b)=\frac{a\times b}{\mathrm{GCD}(a,b)}
$$

多个数的最小公倍数可以使用循环来做，这一题十分经典；
```cpp
#include <iostream>
#include <vector>
#include <numeric> // For std::gcd
using namespace std;

// Function to calculate LCM of two numbers
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

// Function to calculate LCM of an array
long long lcm_of_array(const vector<int>& arr) {
    long long result = 1;
    for (int num : arr) {
        result = lcm(result, num);
        // If the result exceeds a reasonable limit, handle overflow
        if (result > 1e18) {
            return -1; // Indicating that the LCM is too large
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans = lcm_of_array(a);
    if (ans == -1) {
        cout << "LCM too large" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}

```

