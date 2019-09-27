#include <iostream>

int max(int a, int b);
double  max(double a, double b);

int main(void)
{
  std:: cout << max (-3,2) << "\n";
  std:: cout << max (2,-5) << "\n";
  //std:: cout << max (1.1,-7) << "\n"} // no hay funcion que pueda hacer eso
  
  return 0;
}
int max(int a, int b)
{
  int result =0;
  
  if (a>=b)
    {
      result =a;// tambien se puede poner directamente return a o return b
    }
  else
    {
      result =b;
    }
  return result;// entonces este no tendrias que ponerlo y tampoco el int result=0
}
int max(int a, int b)


double  max(double a, double b)
{
  double  result =0;
  
  if (a>=b)
    {
      result =a;// tambien se puede poner directamente return a o return b
    }
  else
    {
      result =b;
    }
  return result;// entonces este no tendrias que ponerlo
}
*/
