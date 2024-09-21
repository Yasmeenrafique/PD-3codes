#include<iostream>
using namespace std;
main()
{
float veg_price,fruit_price;
int tot_veg,  tot_fruit,  tot_veg_price,  tot_fruit_price,  total, tot_earning;
cout<<"Enter vegetable price per kilogram(in coins): ";
cin>>veg_price;
cout<<"Enter fruit price per kilogram(in coins): ";
cin>>fruit_price;
cout<<"Enter total  kilograms of vegetables: ";
cin>>tot_veg;
cout<<"Enter total kilograms of fruits: ";
cin>>tot_fruit;
tot_veg_price = tot_veg*veg_price;
tot_fruit_price = tot_fruit*fruit_price;
total = tot_veg_price + tot_fruit_price;
tot_earning = total/1.94;
cout<<"Total earnings in rupees(Rps): "<<tot_earning;
}