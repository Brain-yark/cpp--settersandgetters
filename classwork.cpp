#include<iostream>
using namespace std;
class School{
        protected:
                    int centNum;
        public:
                    void set_centNum(int n)
                    {
                            centNum=n;
                    }

                    int get_centNum()
                    {
                            return centNum;
                    }
                    virtual void School(int )
                    {

};
int main ()
{
        School b;
        b.set_centNum(12425);
        cout<<b.get_centNum()<<endl;
return 0;
}


