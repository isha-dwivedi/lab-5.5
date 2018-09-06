//HOLLOW RIGHT TRIANGLE STAR PATTERN
#include<iostream>
using namespace std;
int main()
{
	// declare the variables
	int i,j,a=10;
	//print the star pattern
	for(i=1; i<=a;i++)
		{
		// IF 1ST ROW PRINT 1 star
		if ( i == 1)
			cout << "*";
		// IF LAST ROW PRINT a STARS 
		else if (i == a){
			for(int j=1; j<=a;j++)
				cout << "*";
		}
		// Rest PRINT STAR SOME SPACE STAR
		else{
			//PRINT STAR
			cout << "*";
			//print SOME SPACE 
			for(int j=1; j<=i-2;j++)
				cout << " ";
			// print STAR
			cout << "*";
		    }
		
		
	

	cout<<endl;
	}
}
