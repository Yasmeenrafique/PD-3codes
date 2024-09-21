#include<iostream>
using namespace std;
main()
{
int size,cost,cost_per_pound,cost_per_squarefoot;
float area;
cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of bag : "<<"$";
cin>>cost;
cout<<"Enter the area of bag in square feet that can be covered by bag : ";
cin>>area;
cost_per_pound = cost/size; 
cost_per_squarefoot = size*area; 
cout<<"Cost of fertilizer per pound: "<<cost_per_pound<<"$"<<endl;
cout<<"Cost of fertilizing per square foot: "<<cost_per_squarefoot<<"$";

}