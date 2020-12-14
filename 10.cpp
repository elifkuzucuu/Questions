#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i,j,counter=0,max=0,temp;
int size =0;

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

	//sort
	for(j=0;j<size+1;j++)
	{
		for(i=0;i<size;i++)
		{
			if(array[i+1]<array[i])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		
		}
	}


	for(i=0;i<size+1;i++)
	{
		if(array[i]+1==array[i+1])
		{
		
			
			counter+=1;
			
		}
		else
		{
			if(max<counter)
			max=counter;
			else
			max=max;
			counter=0;
		}
	}
	
	cout<<max+1;

}
