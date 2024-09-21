#include<iostream>
using namespace std;
main()
{
string name;
int weight,days;
float loss;
cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weight;
days = weight*15;
cout<<"Amir will need  days to lose 12kg of weight by following doctor's suggestions: "<<days;
}