#include <iostream>
using namespace std;

int main()
{
	int temp,i,j,size=0;
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

	
	for(j=0;j<size+1;j++)
	{
		for(i=0;i<size+1;i++)
		{
			if((array[i]<10 & array[i+1]<10) || (array[i]>10 & array[i+1]>10))
			{
				if(array[i]<array[i+1])
				{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
				}
			}
			if(array[i] <10 & array[i+1]>10)
			{
				temp = array[i+1]/10;
				if( temp > array[i])
				{
					temp=array[i];
					array[i]=array[i+1];
					array[i+1]=temp;
				}
			}
			if(array[i] >10 & array[i+1]<10)
			{
				temp = array[i]/10;
				if( temp < array[i+1])
				{
					temp=array[i];
					array[i]=array[i+1];
					array[i+1]=temp;
				}
			}
		}
	}
	
	for(i=0;i<size+1;i++)
	cout<<array[i];
	
}
