#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

bool primo(int numero);

int main () {

int i=0,j=0;						//Declaracion de variables enteras
 string caracter, cadena;			//Declaración de cadenas
 int num, vect[6400],vect2[6400]; 	//Declaracion de vectores
 stringstream geek(cadena);
fstream f("D:/Código C++/80x80_matrix.txt");	//Abrir archivo de texto con numeros primos

 if ( f.is_open()) {
 while( !f.eof()) {

caracter=f.get();
//cout << cadena << "\n";
if(caracter!=",")
{
	cadena=cadena+caracter; 		//Tomar cada conjunto de numeros
	
}
else{
	stringstream geek(cadena);
	geek >> num;
	vect[i]=num;					//Almacenar los numeros en un vector
	cadena="";
	i=i+1;
}
}
stringstream geek(cadena);
geek >> num;
vect[i]=num;
for(j=0;j<=i;j++){
	
		vect2[j]=0;			// Vaciar vector 
}
for(j=0;j<=i;j++){
	if(primo(vect[j]))		// llama funcion que comprueba si un numero es primo
	{
		vect2[j]=1;			// poner un 1 en las posiciones del vector donde se encuentre un numero primo
	}
}
for(j=0;j<=i;j++){
	
	
	cout<< vect[j]<<" - "<<vect2[j]<<"\n";	
}
f.close();
}
 return 0;
 }
 
 
 bool primo(int numero)
 {
 	int x;
 	if(numero==0||numero==1||numero==4){ 	// un numero no es primo si es 0,1 o 4
 	return false;
 }
 for(x=2;x<=numero/2;x++){					// divide el numero dado desde 2 hasta la mitad de dicho numero
 	if(numero%x==0){						// comprueba si el residuo de  todas las divisiones es 0, en numero no es primo
	 return false;
	 }
 }
 return true;								// si ninguna division tiene residuo 0, el numero es primo
}
 
