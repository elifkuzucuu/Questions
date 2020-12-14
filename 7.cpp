#include <iostream>
#include <stdlib.h>
using namespace std;
  
int main()
{
	cout<<"Enter the first array"<<endl;
	int size1=0,size2=0,a,k=0,i,j;
	char input;
	int *combine;
	int *array1 = new int[size1];
	int *array2 = new int[size2]; 
 	char newline;
  
    int girilendeger;
    
    
    
  	while(cin>>girilendeger) 
	{
	
	array1[size1] = girilendeger;
	newline = girilendeger;	
	newline = getchar();
	if (newline == '\n') {
	    break;
	}
      size1++;
   }
   cout<<"Enter the second array"<<endl;
   while(cin>>girilendeger) 
	{
	
	array2[size2] = girilendeger;
	newline = girilendeger;	
	newline = getchar();
	if (newline == '\n') {
	    break;
	}
      size2++;
   }
   	combine = (int*)malloc(size1+size2);
	for(i=0;i<size1+1;i++)
	combine[i]=array1[i];
	for(j=i;j<size1+size2+2;j++)
	{
	combine[j]=array2[k];
	k++;
    }
    
    for(i=0;i<size1+size2+2;i++)
    cout<<combine[i]<<" ";
    
}
