#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    a=a%b;
    gcd(b,a);
}
long long lcm(int a,int b){
    long long l=((long long)a*b)/gcd(a,b);
    return l;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,b);
	return 0;
}
