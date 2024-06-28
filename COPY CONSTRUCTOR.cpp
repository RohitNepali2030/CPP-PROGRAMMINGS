#include<iostream>

using namespace std;

class demo
{
	private: 
		int num;
		
		public:
			demo()
			{
				num = 0;
				
			}
			demo(int num)
			{
				this -> num=num;
			}
			demo(demo & d)
			{
				num=d.num;
				
			}
			void showData()
			{
				cout<<"Value = "<<num<<endl;
			}
			
				
				
};

int main()
{
	demo d1(5);
	d1.showData();
	
	demo d2 = d1;
	
	d2.showData();
	
	demo d3(d1);
	
	d3.showData();
	
	demo d5;
	d5 = d2;
	
	d5.showData() ;
return 0;
}
