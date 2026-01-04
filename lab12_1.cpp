#include<iostream>
#include<ctime>
using namespace std;
long long int fibonacci(int a);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}


long long int fibonacci(int a){
    long long int f[a] = {0,1};
    int i = 2;
    if (a == 0 || a == 1) return a;
    while (i<= a){
        f[i] = f[i-1]+f[i-2];
        i++;
    }
    return f[a];
}