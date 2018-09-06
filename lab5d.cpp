//hollow square star pattern
#include<iostream>
using namespace std;
int main()
{
// declare the variables
int i,j,a=10;
//print the star pattern
for(i=1; i<=a;i++){

for(j=1; j<=a;j++)
{ if(j==1 || j==a || i==1 || i==a)
cout<<"*";
else
cout<<" ";

}

cout<<endl;
}
}
