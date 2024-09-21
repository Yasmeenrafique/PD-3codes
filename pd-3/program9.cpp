#include<iostream>
using namespace std;
main()
{
int number,sum;
cout<<"Enter any four digit number : ";
cin>>number;
int digit1 = number%10;
number = number/10;
int digit2 = number%10;
number=number/10;
int digit3 = number%10;
number = number/10;
int digit4 = number%10;
number = number/10;
sum = digit1 + digit2 + digit3 + digit4;
cout<<"Sum of individual digits: "<<sum;
}