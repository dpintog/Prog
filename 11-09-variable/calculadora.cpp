#include <iostream>// uso de la biblioteca
#include <cmath>
int main (void)
{
  int val1 = 0.0;
  int val2 = 0.0;
  std::cout<< "escribe un numero entero :" << std::endl;
    std:: cin>> val1 ;
   std::cout<< "escribe otro numero entero :" << std::endl;
    std:: cin>> val2 ;

    if    ( val1<val2)
 {  
      std::cout <<"el numero mas pequeño es:"<< val1 <<  std::endl;
     std::cout << "el numero mas grande es:"<< val2 <<  std::endl;
  }
  else
  {
    std::cout <<"el numero mas pequeño es:"<< val2 <<  std::endl;
    std::cout << "el numero mas grande es:"<< val1 <<  std::endl;
     
  }
    
   
    double suma= val1 + val2;
    double resta= val1 - val2;
    double producto= val1*val2;
    double razon= val1/val2;
   
   
   
       std::cout <<"la suma de sus numeros es:"<< suma <<  std::endl;
    std::cout <<"la diferencia de sus numeros es:"<< resta <<  std::endl;
   std::cout <<"el producto de sus numeros es:"<< producto <<  std::endl;
    std::cout <<"la razon entre sus numeros es:"<< razon <<  std::endl;
  
  return 0;
}
