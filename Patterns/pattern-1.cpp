//https://nados.io/question/pattern-1?zen=true

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
   //write your code here
   for(int i = 1; i <=n ;i++) {
       for(int j = 1; j <= i; j++) {
           cout << "*\t";
       }
       cout << endl;
   }
}