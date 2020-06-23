#include <iostream>
using namespace std;

int Fibonacci(int n){
    if(n<=1){
        return n;
    }
    int f0=0,f1=1;
    int f=0;
    for(int i=2;i<=n;i++){
        f=f0+f1;
        f0=f1;
        f1=f;
    }
    return f;
}

int main() {
	int n;
	cin>>n;
	cout<<Fibonacci(n);
	return 0;
}
