#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  a=0;
  b=1;
  cout<<a<<" "<<b<<" ";
  int i=1;
  float gr;
  while (i<=10){
      c=a+b;
  cout<<c<<" ";
  gr=(float)(a+b)/b;
  cout<<gr;
  a=b;
  b=c;
  i++;
  }
    return 0;
}
