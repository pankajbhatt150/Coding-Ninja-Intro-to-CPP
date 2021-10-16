#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,sum_e=0,sum_o=0,x;
    cin>>n;
    for(n=n;n>0;n/=10)
    {
        x=n%10;
        if(x%2==0)
            sum_e=sum_e+x;
        else
            sum_o=sum_o+x;
    }
    cout<<sum_e<<" "<<sum_o;
}
