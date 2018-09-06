//right triangle star pattern
#include<iostream>
using namespace std;
int main()
{
//print the stars
for(int i=0; i<10;i++)
{
for(int j=0; j<10-i; j++)
{cout<<"*";
}
cout<<endl;
}
}


