#include <iostream>
using namespace std;

int square(int a)
{
	int sq;
	sq=a*a;
	return sq;
}

int main()
{
	int size=0,total=0;
	char input;
	int a,i;
 	char newline;
 	int *numbers = new int[size];
    int girilendeger;
    
    
    
  while(cin>>girilendeger) 
  {
		numbers[size] = girilendeger;
		total+=numbers[size];
		newline = girilendeger;	
		newline = getchar();
		if (newline == '\n')
		{
	    	break;
		}
        size++;
  }
	for(i=0;i<size+1;i++)
	{
		numbers[i]=square(numbers[i]);
			
	}
	for(i=0;i<size+1;i++)
	{
		cout<<numbers[i]<<" ";
			
	}
}
