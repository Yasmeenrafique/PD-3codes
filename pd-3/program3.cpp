#include<iostream>
using namespace std;
main()
{
int vi,vf,t,a;
cout<<"Enter the initial velocity:"<<endl;
cin>>vi;
cout<<"Enter the time:"<<endl;
cin>>t;
cout<<"Enter the acceleration:"<<endl;
cin>>a;
vf=a*t+vi;
cout<<"Final velocity:"<<vf;
}