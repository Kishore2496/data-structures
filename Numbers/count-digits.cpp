#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 0;
    int count = 0;
    
    while(num > 0) {
        num = num / 10;
        count++;
    }
    
    cout << "Digits : " << count << endl;
    return 0;
}