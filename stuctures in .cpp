#include<iostream>
using namespace std;
struct mix
{ 
  int a;
  float b;
  string name;
};
int main()
{
  mix valueOne;
  mix valueTwo;
  
  valueOne.a = 5;
  valueOne.b = 5.5;
  valueOne.name = "Ali";
  
  cout<<valueOne.a;
  
}
