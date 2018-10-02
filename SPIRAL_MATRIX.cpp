//Program to print a 2D matrix in spiral form
#include<iostream>
using namespace std;

//function to print the spiral taking the dimension and matrix as parameters
void spiral(int n,int a[40][40])
{
	/*i denotes iterator
	  rowmin : minimum index of the row from which elements should be printed
	  colmin : minimum index of the column from which elements should be printed
	  n : maximum index for column and row*/
	  int i,rowmin=0,colmin=0;
	  int m=n;
	  while(rowmin<m && colmin<n)
	  {
	  	//printing the first row of remaining spiral
	  	for(i=colmin;i<n;i++)
	  	  cout<<a[rowmin][i];
	  	rowmin++;
	  	//printing the  column of the remaining spiral(downward)
	  	for(i=rowmin;i<n;i++)
	  	  cout<<a[i][n-1];
	  	n--;
	  	//printing the last row of the remaining spiral
	  	if(rowmin<n)
	  	{
	  		for(i=n-1;i>=colmin;i--)
	  		   cout<<a[m-1][i];
	  		m--;
		  }
		if(colmin<n)
		{
			//printinf the column of the remaining spiral(upward)
			for(i=m-1;i>=rowmin;i--)
			  cout<<a[i][colmin];
			colmin++;
		}
		
	  }
}

int main()
{
	int n,a[40][40],i,j;
	cout<<"ENTER dimension:";
	cin>>n;
	cout<<"Enter the matrix:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	spiral(n,a);
	return 0;
}
