#include<iostream>
#include<string>
using namespace std;

class func{
	string first_name,second_name;
	int age;

	public:
	     void set_first_name(string nm){

		    first_name=nm;
	     }

	     string get_first_name(){
		     return first_name;
	     }

	     void set_second_name(string sname){
		     second_name=sname;
	     }
	     string get_second_name(){
		     return second_name;
	     }
	     void set_age(int a){
		     age=a;
	     }
	     int get_age(){
		     return age;
	     }

};

int main()
{

string first_name,second_name;
int age;
cout<<"Enter the recquired data all two names and your age"<<endl;
cin>>first_name>>second_name>>age;
            func luk;
	    luk.set_first_name(first_name);
	    luk.set_second_name(second_name);
	    luk.set_age(age);
cout<<"desplay screeeeeeeeeeeeeeeeeeeeeeeeeeeeeeen"<<endl;
	    cout<<luk.get_first_name()<<endl;
            cout<<luk.get_second_name()<<endl;
	    cout<<luk.get_age()<<endl;



	return 0;
}
