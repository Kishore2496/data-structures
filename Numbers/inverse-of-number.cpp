//Question Link : https://nados.io/question/inverse-of-a-number?zen=true

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int dig = 1;
    int newNum = 0;

    //write your code here
    while(n > 0) {
        newNum += dig * pow(10, (n%10)-1);
        dig++;
        n = n / 10; 
    }
    cout << newNum;
}