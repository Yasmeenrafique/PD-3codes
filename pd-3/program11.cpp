#include<iostream>
using namespace std;
main()
{
int age,average,moves;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moves: ";
cin>>moves;
average = age/(moves+1);
cout<<"Average number of years lived  in the same house: "<<average;
}