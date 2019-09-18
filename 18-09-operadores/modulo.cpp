#include <iostream>
using namespace std ;
int main(void)
{  
  int a= 3,2 ;
  
  cout <<"escriba un numero"<< endl;
  cin >> a;
  
  if (a%3==0)
    {
      cout << a  << " es divisible entre 3"<< endl;      
    }
  else
    {
      cout << a  << " no es divisible entre 3" << endl; 
    }
  
  return 0;
}
