#include<iostream>
using namespace std;

class addnum
{
    public:
    void add(int a, int b) 
    {
        int r;
        r=a+b;
        cout<<"\n resutl="<<r;
    }
    void add(int a, int b, int c )
    {
        int r;
        r=a+b+c;
        cout<<"\n resutl="<<r;
    }
    void add(int a, int b,int c, int d)
    {
        int r;
        r=a+b+c+d;
        cout<<"\n resutl="<<r;
    }
    void add(int a, int b,int c, int d, int e)
    {
        int r;
        r=a+b+c+d+e;
        cout<<"\n resutl="<<r;
    }
}
int main()
{
    addnum an;
    an.add(10,20);
    an.add(10,20,30);
    an.add(10,20,30,40);
    an.add(10,20,30,40,50);
    return 0;
}
