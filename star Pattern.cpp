#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"*";
        for(int k=1;k<=i-1;k++)
            cout<<"*";
        cout<<"\n";
    }
  return 0;
}
