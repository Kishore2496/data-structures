//Q.Link : https://nados.io/question/the-curious-case-of-benjamin-bulbs?zen=true

#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin>>n;
    
    //write your code here
    for(int i = 1; i*i <= n; i++)
        cout << i * i << endl;
    
    return 0;
}