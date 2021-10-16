#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    // C = (5/9)*(F-32);
    
    int S,E,W,i,c;
        cin>>S>>E>>W;
    for(i=S;i<=E;i+=W)
    {
    c=(5.0/9.0)*(i-32);
        cout<<i<<"\t"<<c<<endl;
        }
    return 0;
