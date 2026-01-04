#include<iostream>
using namespace std;
int gcd(int a, int b);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
int gcd(int a, int b){
    if (a > b){
        for(int i = b ; i > 1; i--){
            if( a%i == 0 && b%i == 0 ) return i;
        }
    }else{
        for(int i = a ; i > 1; i--){
            if( a%i == 0 && b%i == 0 ) return i;
    }
} return 1;
}