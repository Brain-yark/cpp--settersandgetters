#include<iostream>
#include <cmath>
using namespace std;
class School{
        int centerNum;
        public:
              void set_centerNum(int n)
              {
                      centerNum=n;
              }
              int get_centerNum()
              {
                      return centerNum;
              }
};
int main ()
{ 
        School b;
        b.set_centerNum(900);
        cout<<b.get_centerNum();
        return 0;
}
