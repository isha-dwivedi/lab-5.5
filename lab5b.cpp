//mirrored rhombus star pattern
#include<iostream>
using namespace std;
int main()
{
// declare the variables
int i,j,a=5;
//print the star pattern
for(i=0; i<a;i++)
{
for(j=0; j<a-i;j++)
{cout<<" ";}
for(j=0;j<a; j++)
{cout<<"*";
}
cout<<endl;
}
}
