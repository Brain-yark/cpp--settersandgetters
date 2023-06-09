#include<iostream>
#include<cmath>
using namespace std;
class vehicles{
	protected:
	    static string owner;
	
	public:

          string name;
	  string model;
	  float price;
	  int year;

                virtual void putdata()
		{	
			
			cout<<"Name the car: "<<endl;
			cin>>name;
			cout<<"medel: "<<endl;
			cin>>model;
			cout<<"Price: "<<endl;
			cin>>price;
			cout<<"Year: "<<endl;
			cin>>year;

				
		}  

};
 
     int myn(int a, int b)
  { 
	return a*b;
  } 


int main ()
{
  vehicles car1;
  car1.putdata();

myn(60,19);
cout<<myn(60,19)<<endl;
 cin.get();

return 0;
}
