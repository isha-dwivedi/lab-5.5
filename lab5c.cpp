//hollow mirrored rhombus star pattern
#include<iostream>
using namespace std;
int main()
{
// declare the variables
int i,j,a=10;
//print the star pattern
for(i=0; i<a;i++)
{
for(j=a; j>a-i;j--)
{cout<<"*";
}

cout<<endl;
}
}
