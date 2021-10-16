#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    int b,ts,allow;
    double hr,da,pf;
    char ch;
    cin>>b>>ch;
    hr=0.2*b;
    da=0.5*b;
    pf=0.11*b;
    if(ch=='A')
        allow=1700;
    else if(ch=='B')
        allow=1500;
    else
        allow=1300;
    ts=round(b+hr+da-pf+allow);
    cout<<ts;
        return 0;
	
}
