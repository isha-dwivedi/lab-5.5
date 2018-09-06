//hollow rhombus star pattern
#include<iostream>
using namespace std;
int main()
{
// declare the variables
int i,j,a=10;
//print the star pattern
for(i=1; i<=a;i++)
{
//print the spaces
for(j=1; j<=a-i;j++)
{
cout<<" ";
}
//print stars with hollow condition
for(j=1; j<=a;j++)
{ if(j==1 || j==a || i==1 || i==a)
cout<<"*";
else
cout<<" ";

}

cout<<endl;
}
}
