#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int size=0,max=0,element1,element2,i;
	 char newline;
  	int *array = new int[size];
    int girilendeger;
    
    
    
  while(cin>>girilendeger) {
	
	array[size] = girilendeger;
	newline = girilendeger;	
	newline = getchar();
	if (newline == '\n') {
	    break;
	}
      size++;
  }
	
	
	
	for(i=0;i<size;i++)
	{
		if(array[i]*array[i+1]>max)
		{
			max=array[i]*array[i+1];
			element1=array[i];
			element2=array[i+1];
		}
	}
	
	cout<<"Answer is "<<element1<<","<<element2;
	
	
	
}
