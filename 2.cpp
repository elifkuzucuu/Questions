#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int size = 0,counter=0,first=0,last,i=0;
	char input;
	char *word = new char[size];
	
	while((input = getchar())!='\n')
	{
		word[size]=input;
		size++;
	}
	
	last=size-1;
	while(counter<(size+1)/2)
	{
		if(word[i]==word[last])
		{
			counter++;
			i++;
			last--;
		}
		else
		break;
	}
	
	if(counter==(size+1)/2)
		cout<<"Your word is palindrome";
	else
		cout<<"Your word is not palindrome";
}
