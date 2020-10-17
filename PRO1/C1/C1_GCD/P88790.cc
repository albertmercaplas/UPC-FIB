#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;
    
    if (a==0) return b;
    else if (b==0) return a;
    else{
        if (b>a) {
            r = a;
            a = b;
            b = r;
        }
        r = 1;
        while(r!=0) {
            r = a%b;
            a = b;
            b = r;
        }
        return a;
    }
}

int main() {
    int a,b;
    
    cin >> a >> b;
    
    cout << gcd(a,b) <<  endl;
}