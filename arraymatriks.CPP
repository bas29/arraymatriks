#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
cout<"BASARDO";
cout<<"TIC\n";
cout<<"0120\n";

int i,j;
int data[3][5]= {{0,1,2,3,4},{6,7,8,9,0},{0,1,9,2,5}};

cout<<"Matriks =\n";
for(i=0;i<3;i++)
	{
   for(j=0;j<5;j++)
   {
cout<<data[i][j];
cout<<"\t";
}
	cout<<"\n";
}
getch();
}
