#include <iostream>
using namespace std;

int main()
{
	int size =0,counter=0,i;
	float av,total=0;

  char newline;
  int *array = new int[size];
    int girilendeger;
    
    
    
  while(cin>>girilendeger) 
  {
		array[size] = girilendeger;
		total+=array[size];
		newline = girilendeger;	
		newline = getchar();
		if (newline == '\n')
		{
	    	break;
		}
        size++;
  }
		
		av=total/(size+1);
	
	for(i=0;i<size+1;i++)
	{
		if(array[i]<av)
		counter++;
	}
	
	cout<<"The average in this array: "<<av<<endl;
	cout<<counter<<" elements in the array are below the average.";
	
	
	
	
}
