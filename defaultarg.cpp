#include<iostream>
using namespace std;

int add(int x,int y,int z)
{
   return(x+y+z);
}
int add(int p,int q)
{
   return(p+q);
}
int add(int w)
{
    return(w+20);
}
int main()
{
   int r,p,q;
    int a,b,c;
 cout<<"Enter value of a"<<endl;
 cin>>a;
 cout<<"Enter value of b"<<endl;
  cin>>b;
 cout<<"Enter value of c"<<endl;
 cin>>c;
  r=add(a,b,c);
  cout<<"r:"<<r<<endl;
  p=add(b,c);
  cout<<"p:"<<p<<endl;
  q=add(a);
  cout<<"q:"<<q<<endl;
return 0;
}
