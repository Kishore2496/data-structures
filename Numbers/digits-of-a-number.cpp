#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    stack<int> v;

    while(n > 0) {
        v.push(n % 10);
        n = n / 10;
    }

    while (!v.empty()){
        cout << v.top() << endl;
        v.pop();
    }
    
    return 0;

}