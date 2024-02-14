#include<iostream>


using namespace std;

class Bankaccount{
	private:
		int a;
		
	public:
		void setData(int i)
		{
			this->a=i;
		}
		Bankaccount operator+(Bankaccount num)
		{
			Bankaccount total;
			
			total.a=this->a+num.a;
			
			return total;
		}
		getData()
		{
			cout<<"the addition is="<<this->a;
		}
};
int main()
{
	Bankaccount b1,b2,b3;
	
	b1.setData(100);
	b2.setData(200);
	
	b3=b1+b2;
	
	b3.getData();
	
}
