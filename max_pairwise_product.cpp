#include <iostream>
using namespace std;

long long max_pairwise_product(int A[],int n){
    if(n<2){
        return 0;
    }
    int max1=A[0],l=0;
    for(int i=0;i<n;i++){
        if(A[i]>max1){
            max1=A[i];
            l=i;
        }
    }
    int max2=A[0];
    if(l==0){
        max2=A[1];
    }
    for(int i=0;i<n;i++){
        if(A[i]>max2 && i!=l){
            max2=A[i];
        }
    }
    long long product=(long long)max1*max2;
    return product;
}

int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<max_pairwise_product(A,n);
	
	return 0;
}
