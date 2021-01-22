#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int opcion=0;
	while(opcion!=3){
		cout<<"MENU\n";
		cout<<"1) Ejercicio 1\n2) Ejercicio 2\n3) Salir"<<endl;
		cout<<"Ingrese la opcion que desea realizar: ";
		cin>>opcion;
		
		switch(opcion){
			
			case 1:{
				int n,sum=0;
				cout<<"Ingrese el valor de n: ";
				cin>>n;
				
				//validacion para negativos
				while(n<=0){
					cout<<"Asegurese de ingresar un numero mayor de 0"<<endl;
					cout<<"Ingrese el valor de n: ";
					cin>>n;
				}
				
				//comienzo de procedimiento de la sumatoria
				for(int i=0; i <=n; i++){
					sum+=i*pow((i+1),2);
				}
				cout<<"total: "<<sum<<endl;
				break;
			}
			//fin del case 1
			
			case 2:{
				double x,total;
				cout<<"Ingrese el valor de x: ";
				cin>>x;
				total= 1 / (1+exp(x));
				cout<<"Total: "<<total<<endl;
				break;
			}
			//fin del case 2
			
			case 3:{
				cout<<"Adios, tenga buen dia"<<endl;
				break;
			}
			default:
				cout<<"Asegurese de ingresar uno de los numeros del menu"<<endl;
			
		}//fin del switch
		
	}//fin del while principal
	return 0;
}
