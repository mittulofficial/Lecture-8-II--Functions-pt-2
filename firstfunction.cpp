#include <iostream>
using namespace std;

//void printstuff() //there are no parameter
//{
 //   cout<<"writting my first function";
//}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,add_sum;
    a=3;b=5;
   add_sum = sum(a,b);
    cout<<add_sum;
    return 0;
}
