#include<iostream>
#include<vector>
#include<string>
using namespace std;
class person {
	protected:
	vector<string>name;
	int age;
};
int main ()
{ 
/*
vector<int>n;

n.assign(9,1);
for(int i=0;i<n.size();i++){
	cout<<n[i]<<endl;
}
n.push_back(5);
int num=n.size();
cout<<n[num-1]<<endl;
n.pop_back();
for(int i=0;i<n.size();i++){
       cout<<n[i]<<endl;
}
n.insert(n.begin(),70);
cout<<n[0]<<endl;
*/


vector<int>num;
for(int i=1;i<=5;i++)
{
	num.push_back(i);
}
while(auto int a=num.begin();a!=num.end();a++)

	cout<<*a<<endl;


  return 0;
}
	           
