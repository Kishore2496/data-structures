https://nados.io/question/pattern-12?zen=true

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int c = 0;
    int a = 0;
    int b = 1;
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << a << "\t";          //we print 'a' as it holds all the values of the fib series
            int c = a + b;              
            a = b;
            b = c;
        }
        cout << "\n";
    }
}