#include<iostream>
using namespace std;
int main() {
 int i, N, s=0;
 cin>>N;
    for(i=1;i<=N;i++)
    {
        if(i%2==0){
        s=s+i; 
        }
    }cout<<s;
 return 0;
}
