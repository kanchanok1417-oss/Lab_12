#include<iostream>
using namespace std;
int fibonacci(int a);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(int a){
    int f[a] = {0,1};
    int i = 2;
    if (a == 0 || a == 1) return a;
    while (i<= a){
        f[i] = f[i-1]+f[i-2];
        i++;
    }
    return f[a];
}