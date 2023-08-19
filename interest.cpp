#include<iostream>
using namespace std;
int main()
{
 double p,t,r;
 cout<<"Enter principal \n";
 cin>>p;
 cout<<"Enter Rate of interest in percent \n";
 cin>>r;
 cout<<"Enter time in years \n";
 cin>>t;
 double i=p*r*t/100.00;
 cout<<"The interest calculated is \n"<<i;
 return 0;

}