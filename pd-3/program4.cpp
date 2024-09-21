#include<iostream>
using namespace std;
main()
{
float p,i,chance;
cout<<"Enter the imposter count: ";
cin>>i;
cout<<"Enter the player count: ";
cin>>p;
chance = 100*(i/p);
cout<<"Chance of being an imposter: "<<chance<<"%";

}