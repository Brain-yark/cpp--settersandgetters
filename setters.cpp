#include<iostream>
#include<string>
using namespace std;
class Students{
		private:
		         int age,standerd;
			 string last_name,first_name;
		public:
		         void set_age(int y){
			 age=y;
			 }
			 int get_age(){
			 return age;
			 }
			 void set_standerd(int z){
			 standerd=z;
			 }
			 int get_standerd(){
			 return standerd;
			 }
			 void set_first_name(string fname){
			 first_name=fname;
			 }
			 string get_first_name(){
				 return first_name;
			 }
                         void set_last_name(string lname){
				 last_name=lname;
			 }
string get_last_name(){
	return last_name;
}

};

					              
int main ()
{
 int age,standerd;
 string first_name,last_name;

 cout<<"Enter the students details: "<<endl;
	 cin>>first_name>>last_name>>age>>standerd;
		 


	Students student1;
	student1.set_age(age);
	student1.set_standerd(standerd);
	student1.set_first_name(first_name);
	student1.set_last_name(last_name);


	cout<<"Names: "<<student1.get_first_name()<<" "<<student1.get_last_name()<<endl;
	cout<<"Age and stds respectivly are: "<<student1.get_age()<<", "<<student1.get_standerd()<<endl;

}
