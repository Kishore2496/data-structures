//https://nados.io/question/pattern-3?zen=true

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            if(j > n-i) cout << "*\t";
            else         cout << "\t";
        }
        cout << endl;
    }
}