#include <iostream>
using namespace std;
/*Escribir una función que reciba dos argumentos enteros y devuelva true si son divisibles y false si no lo son.
*/
int argu(int x,int y);
int main(){
    int num1,num2;
    cout<<"digite dos numeros"<<endl;
    cin >> num1;
    cin >> num2;
    cout<<"el numero es:"<<argu(num1,num2)<<endl;
    
    
    return 0;
}
int argu(int x,int y){
    if(x%2==0 && y%2==0){
               return true;
               }
    else{
         return false;
         }
    
    
}
