#include <iostream>
using namespace std;
int numeridiFibonacci(int n){
    int a=0, b=1, c=0;
        cout<<b<<endl;
        while (c<n) {
         c=a+b;
         a=b;
         b=c;
         cout<<c<<endl;
        }
        return n;
}
int main() {
    float p;
    cout << "dimmi un numero:"<< endl;
    cin >> p;
    int h = numeridiFibonacci(p);
    return 0;
}
