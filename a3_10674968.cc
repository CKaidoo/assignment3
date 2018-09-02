#include <iostream>
using namespace std;

int main()
{
 int i;

 cout<<"input score";
 cin>> i;


if(i>80 && i<100)
{
 cout<<"Your Grade is A";
}
if(i>75 && i<79)
{ 
 cout<<"Your Grade is B+";
}
if(i>70 && i<74)
{
 cout<<"Your Grade is a B ";
}
if(i>65 && i<69)
{
 cout<<"Your Grade is a C+ ";
} 
if(i>60 && i>64)
{
cout<<"Your Grade is a C ";
}
if(i>55 && i<59)
{
cout<<"Your Grade is a D+ ";
}
if(i>50 && i>54)
{
cout<<"Your Grade is a D ";
}
if(i>0 && i<49)
{
cout<<"Your Grade is an F";
}
return 0;
}

