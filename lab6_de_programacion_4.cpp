#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
/*Escribir una función que reciba un carácter como argumento y retorne true si es vocal y false en caso contrarios.
*/
char caracter(char vocal);
int main(){
	char vocal;
    
    cout<<"digite un numero"<<endl;
    cin >> vocal ;
    cout<<"la letra ingresada es una:"<< caracter(vocal)<<endl;
    
    
    
    
    
    return 0;
}
char caracter(char vocal){
    if(vocal== 'a' || vocal== 'A' ){
	return true;
	}
 else if(vocal== 'e' || vocal== 'E'){
	return true;
}
else if(vocal== 'i'  || vocal== 'I' ){
	return true;
}
else if(vocal== 'o' || vocal=='O' ){
	return true;
}
else if(vocal== 'u'  || vocal== 'U' ){
	return true;
	}
else{
     return false;
    }

}
     
