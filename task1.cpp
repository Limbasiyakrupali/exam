#include<iostream>
using namespace std;

class movie
{
	public:
		int releaseyear;
		string title,genre;
		
	setData()
	{
		cout<<"enter the moive title=";
		cin>>title;
		cout<<"enter the moive released year=";
		cin>>releaseyear;
		cout<<"enter the moive genre";
		cin>>genre;
	}	
	getData()
	{
		cout<<"title="<<title<<endl;
		cout<<"released year="<<releaseyear<<endl;
		cout<<"genre="<<genre<<endl;
	}
};


int main()
{
	int i;
	movie m[1];
	
	m[i].setData();
	m[i].getData();

}
