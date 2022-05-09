#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    //Divide n continuosly by numbers from n to root(n), and print if remainder is 0
    for(int div = 2; div * div <= n; div++) {
        while(n % div == 0) {
            n = n / div;
            cout << div << " ";
        }

    //SPECIAL CASE : if the remainder is prime, then thats the number 
    //EX: 46 = 2 * 23, so 23 will be remainder from above step and this will the PF too
    if(n!=1) {
        cout << n;
    }
    }
}