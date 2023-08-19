#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the operation / + - * trigo exp\n";
    cin>>a;
    if(a=="trigo")
    {
       double ans;
       string t;
       double d;
       cout<<"Enter the value in degrees\n";
       cin>>d;
       double c=d*0.01745;
       cout<<"Enter tan sin cos \n";
       cin>> t;
       if(t=="sin")
       {
        ans=d-(c*c*c)/(3*2)+(c*c*c*c*c)/(5*4*3*2)-(c*c*c*c*c*c*c)/(7*6*5*4*3*2);
        cout<<"The sin value is "<<ans;
       }
       else if(t=="cos")
       {
        ans=1-(c*c/2)+(c*c*c*c/4*3*2)-(c*c*c*c*c*c/6*5*4*3*2);
        cout<<"\nThe cos value is "<<ans;
       }
       else if(t=="tan")
       {
        ans=c+(c*c*c/3)+(c*c*c*c*c*c*c/7.50);
        cout<<"\nThe tan value is "<<ans;
       }
       else
       cout<<"\nInvalid trigo fn";
    }
    else
    {
        double n1,n2,r;
        cout<<"\nEnter number 1 \n";
        cin>>n1;
        cout<<"\nEnter number 2 \n";
        cin>>n2;
        if(a=="+")
        {
          r=n1+n2;
          cout<<"The sum is\n"<<r;
        }
        else if(a=="-")
        { 
            if(n1>=n2)
            r=n1-n2;
            else
            r=n2-n1;
            cout<<"The magnitude of difference is\n"<<r;
        }
        else if(a=="*")
        {
            r=n1*n2;
            cout<<"The product is\n"<<r;
        }
        else if(a=="/")
        { 
            if(n2==0)
            cout<<"Invalid \n";
            else
            {
                r=n1/n2;
                cout<<"The Quotient is \n"<<r;
            }
        }
        else if(a=="exp")
        {
            int y=1;
            for(int i=1;i<=n2;i++)
            {
                
                y=y*n1;
            }
            cout<<"The answer is\n"<<y;
        }
        else
        cout<<"Invalid sign";
    }
    return 0;
}
