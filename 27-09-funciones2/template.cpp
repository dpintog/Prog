//ESTA ES UNA PLANTILLA//

#include <iostream>
template <typename T, typename S> //puede ser double o int, solo uno de los dos

T max(T a, S b)
{
  T result =0;
  
  if (a>=b)
    {
      result =a;// tambien se puede poner directamente return a o return b
    }
  else
    {
      result =b;
    }
  return result;
}



int main(void)
{
  std:: cout << max (-3,12) << "\n";
  std:: cout << max (2,-5) << "\n";
  std:: cout << max (1.1,-7) << "\n";// no se puede haceeeeeeer pero ahora si
  /*
    pusimos s y ahora si se podria, pero retorna en el primer tipo de dato
  */
  std:: cout << max (-7,1.1) << "\n";// en este caso retorna 1 porque T es int
   
return 0;
}
