#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
    void input( int a, int b, int c);
    void output(void);
    void operator-();
};
void space :: input( int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
    
}
void space :: output(void)
{ cout <<" x =" <<x<< " ";
  cout << " y = " <<y<< " ";
  cout << " z = " <<z<< "\n";
}
void space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space s;
    s.input ( 0, 1, 2);
    s.output();
    -s;
    s.output();
}