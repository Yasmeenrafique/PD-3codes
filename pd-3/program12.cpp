#include<iostream>
using namespace std;
main()
{
int no_sq_meter, width, height, area, no_of_wall;
cout<<"Number of square meter you can paint:";
cin>>no_sq_meter;
cout<<"Width of the single wall:";
cin>>width;
cout<<"Height of the single wall:";
cin>>height;
area = width*height;
no_of_wall = no_sq_meter/area;
cout<<"Number of walls you can paint:"<<no_of_wall;
}