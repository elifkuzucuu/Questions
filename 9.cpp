#include <bits/stdc++.h> 
using namespace std; 



void permute(int *a, int l, int r) 
{ 
    int size = 0;
	
	if (l == r) {
	   while(size<=r) {
		cout<<a[size]<<" "; 
		size++;   
		}
		cout<<endl; }
	else
	{ 
		
		for (int i = l; i <= r; i++) 
		{ 

		
			swap(a[l], a[i]); 

			
			permute(a, l+1, r); 

			
			swap(a[l], a[i]); 
		} 
	} 
} 


int main() 
{   
    int size = 0;
	int *arr = new int[size];
    int girilendeger;
	char newline;
	
	 while(cin>>girilendeger) {
	
	arr[size] = girilendeger;
	newline = girilendeger;	
	newline = getchar();
	if (newline == '\n') {
	    break;
	}
      size++;
  }
	permute(arr, 0, size); 
	return 0; 
}
