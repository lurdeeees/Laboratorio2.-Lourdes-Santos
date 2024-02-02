#include<iostream>
#include<cstdlib>
//librerias que se utilizan para que pueda compilar correctamente el programa 
using namespace std;
	int menu;
	int p;
	int a;
	int z;
	int l;
	int edad;
	int nota;
	//Estas son las variables que se utilizan para desarrollar correctamente los ejercicios.
int main(){
	//Se inicia con el programa principal que es el int main

	do{
		//Se utiliza un do While para que sea un ciclo con varias opciones de ejecutar distintos programas.
		cout << "Que desea realizar? "<< endl; //Se da al usuario un menu, para que pueda escoger que programa quiera inicializar.
	
		cout << "1. Si un numero ingresado por el usuario es par [1]" << endl;
		
		cout << "2. Si un año ingresado es bisiesto o no.       [2]" << endl;
		
		cout << "3. Dos numeros y determine si son iguales.      [3] " << endl; 
		
		cout <<"4. Verifique si es mayor de edad                [4] " <<endl; 
		
		cout << "5. Si un estudiante aprobo un examen            [5] " <<endl;
	
		cin >> menu; //Se compila en esta variable llamada menu 
		system("cls"); //Este comando es para limpiar la consola al momento de escoger la opcion en el menu. 
	
	
		switch(menu) //En esta parte se inicia el switch con un parametro llamado menu
		{
			case 1: //Este case 1 se incluye el codigo del programa para los numeros pares
				cout << "Lourdes Santos" << endl;
				cout << "Verificacion si un numero ingresado por el usuario es par." << endl;
				cout << "Ingresa un numero: " <<endl;
				cin >> p; //se compila el numero ingresado en la variable p
				if(p % 2 == 0){ // Este if permite que el programa decida si el numero ingresado es verdadero se ejuta y muestra en pantalla el mensaje en consola.
					cout << "El numero que ingresaste es par \n";	
				}
				else{ //Si no se cumple en el primer if, hay otra posible respuesta que es este else que el numero ingresado no es par. 
					cout << "El numero que ingresaste no es par \n";
				}
				system("pause"); //Esta pausa es para que el programa tenga una espera el usuario y presione alguna otra tecla para continuar con el programa.
				break; //finaliza la ejecucion de la instruccion del case1 que se ejecuto
			case 2:
				cout << "Lourdes Santos" << endl;
				cout << "Determine si un año ingresado es bisiesto o no." << endl;
				cout << "Ingrese el año: " <<endl;
				cin >> a; //concatena el año en la variable a
				if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) { //En este if tiene como parametros que las variables a usando operadores logicos donde ayudan a comparar si a % de 4
				// sea igual a 0 y A dividio con 100 sea diferente a 0 o a dividido con 400 igualando a 0. Si esto llega a ser cierto con el numero que se ingreso.
					cout << "El año es bisiesto \n";	// El año es bisiesto
				}
				else{//por el contrario no sea cierto la primera condicion, el año no es bisiesto. 
					cout << "El año no es bisiesto \n";
				}
				system("pause");  //Esta pausa es para que el programa tenga una espera el usuario y presione alguna otra tecla para continuar con el programa.
				break; 
			case 3: 
				cout << "Lourdes Santos" << endl;
				cout << "Solicitar al usuario dos numeros y determine si son iguales" << endl;
				cout << "Ingrese el primer valor: " <<endl;
				cin >> z; //concatena el primer valor a la variable z
				cout << "Ingrese el segundo valor: " <<endl;
				cin >> l; //concatena el primer valor a la variable l
				
				if(z == l){ //se usa un ciclo if para comprobar si los valores ingresados sean igual con el operador de relación "=="
					cout << "Los numeros ingresados SI SON IGUALES \n";	
				}
				else{
					cout << "Los numeros ingresados NO SON IGUALES \n";
				}
				system("pause");
				break;
			case 4:
				cout << "Lourdes Santos" << endl;
				cout << "Verificacion si es mayor de edad." << endl;
				cout << "Ingresa tu edad: " <<endl;
				cin >> edad; //concatenacion en la variable edad
				if(edad >= 18){ //El ciclo if comprueba si el valor concatenado en edad es >= a 18
					cout << "Eres mayor de edad \n";	//Si es asi, es mayo de edad
				}
				else{ // si no por lo contrario
					cout << "Eres menor de edad \n"; //es menor de edad
				}
				system("pause");
				break;
			case 5: 
				cout << "Lourdes Santos" << endl;
				cout << "Evalue si un estudiante aprobo un examen, considerando que la calificacion de aprobacion es 60 o mas." << endl;
				cout << "Ingresa tu nota: " <<endl;
				cin >> nota; //Contanecacion del valor en la variable nota
				if(nota >= 60){ // si el valor de nota es mayor o igual a 60
					cout << "Aprobaste tu examen, felicidades \n";	//se cumple esta condicion 
				}
				else{
					cout << "Reprobaste tu examen, estudia mas \n"; //por lo contrario saldra esta respuesta si la anterior sea falsa.
				}
				system("pause");
				break;
					
		}
		system("cls"); //Se hace una limpieza de pantalla 
	
	}while (menu <= 5); // en esta parte del while, en su parametro se esta evaluando si la variable menu sea menor o igual a 5 
	cout << "Opcion invalida" << endl; // de lo contrario aparecera este mensaje que la opcion que se esocogio es invalida. Que no entra en los valores del menu ingresado al inicio 
		return 0; //El return 0 se usa en esta parte que significa que el programa se completó correctamente y llega a su fin.
	}
