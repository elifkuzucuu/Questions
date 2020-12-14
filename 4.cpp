#include <iostream>
using namespace std;
int main()
{
	int day,month,year,total;
	char a;
	cout<<"Please enter your birthday"<<endl;
	cin>>day>>a>>month>>a>>year;
	
	
	//all months are based on 30 days
	total=((2019-year)*8640)+(11-month)*30+(30-day)+14;
	cout<<total;
	
	
	
	
	
	
}
