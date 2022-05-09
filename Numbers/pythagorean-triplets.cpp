#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    //write your code here
    int max = a;
    if(b >= max) max = b;
    if(c >= max) max = c;

    bool flag;
    if(max == a) flag = (max*max == (b*b+c*c));
    else if(max == b) flag = (max*max == (a*a+c*c));
    else flag = (max*max == (b*b+a*a));
    
    cout << flag;
}