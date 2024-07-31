#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
/*2. Escriba una función que reciba dos números reales positivos como parámetros y
devuelva el máximo de los dos valores.
*/
float num_max(float x,float y);
int main(){
    float num1,num2;
    cout<<"digite dos numeros"<<endl;
    cin >> num1;
    cin >> num2;
    cout<<"el numero mayor es: "<<num_max(num1,num2)<<endl;
    
    
    
    return 0;
    getch();
    }
float num_max(float x,float y){
      float num_max;
      if(x>y){
              num_max=x;              
      }
      else{
           num_max=y;
           
           }
           return num_max;
      }
