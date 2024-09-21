#include<iostream>
using namespace std;
main()
{
string movie_name;
int adult_ticket,child_ticket,a_ticket_sold,c_ticket_sold,charity;
int tot_sale_tic,don,after_don,a,b;
cout<<"Enter the movie name: "<<endl;
cin>>movie_name;
cout<<"Enter the adult ticket price: "<<endl<<"$";
cin>>adult_ticket;
cout<<"Enter the child ticket price: "<<endl<<"$";
cin>>child_ticket;
cout<<"Enter the number of adult ticket sold: ";
cin>>a_ticket_sold;
cout<<"Enter the number of child ticket sold: ";
cin>>c_ticket_sold;
cout<<"Enter the percentage of the amount to be donated to charity: "<<endl;
cin>>charity;
 a = adult_ticket*a_ticket_sold;
 b = child_ticket*c_ticket_sold;
 tot_sale_tic = a+b;
 don = tot_sale_tic*0.10;
 after_don = tot_sale_tic - don;
 cout<<"Movie: "<<movie_name<<endl;
 cout<<"Total amount generated from ticket sales: "<<tot_sale_tic<<"$"<<endl;
 cout<<"Donation to charity: "<<don<<"$"<<endl;
 cout<<"Remaining amount after donation: "<<after_don<<"$";
}