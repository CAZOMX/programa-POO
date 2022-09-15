#pragma once

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<set>
#include<string.h>
#include<math.h>
#include"Circulo.h"
#include"Cuadrado.h"
#include"Triangulo.h"

class Programa
{
public:
	void menu() {
		int repetir = 0;

		do {
			int tipo=1;
			int figura;
			int radio, altura, dimencion, posicion_y=24, posicion_x=24;

			Cuadrado cuadro;
			Triangulo triangulo;
			Circulo circulo;
			
			
			cout << "------MENU-------" << endl;
			cout << "selecciona la figura deseada" << endl;
			cout << "\n\t1 -> Cuadrado\n" << endl;
			cout << "\n\t2 -> Triangulo\n" << endl;
			cout << "\n\t3 -> Circulo"<< endl;
			cout << "Zuniga Ojeda Carlos Andres 22110091" << endl;
			cin >> figura;



			switch (figura) {
			case 1:

				cout << "Ingresa la dimencion del cuadrado: " << endl;
				cin >> dimencion;
				cuadro.setDimencion(dimencion);
				cout << endl;

				cuadro.getDimenciones();
				cuadro.setY(posicion_y);
				cuadro.setX(posicion_x);



				if (tipo == 1) {

					cuadro.mover_lleno();
					cout << "\n\nsalir -> 1";
					cin >> repetir;
					if (repetir = 1) { system("cls"); }
				}
				else {
					if (tipo == 2) {

						cuadro.mover_vacio();
						cout << "\n\nsalir -> 1";
						cin >> repetir;
						if (repetir = 1) { system("cls"); }
					}
					else {
						cout << "El tipo ingresado no esta dentor de las opciones" << endl;
					}
				}

				break;

			case 2:

				cout << "Ingrese la altura del triangulo: " << endl;
				cin >> altura;
				triangulo.setAltura(altura);
				cout << endl;

				triangulo.getAltura();
 
				posicion_y=0;
				triangulo.setY(posicion_y);

				posicion_x=0;
				triangulo.setX(posicion_x);

				triangulo.mover_triangulo();
				cout << "\n\salir -> 1";
				cin >> repetir;
				if (repetir = 1) { system("cls"); }

				break;

			case 3:

				cout << "Introduce el radio del circulo: " << endl;
				cin >> radio;
				circulo.setRadio(radio);
				cout << endl;

				circulo.getRadio();
				circulo.setY(posicion_y);
				circulo.setX(posicion_x);


				circulo.mover_circulo();

				cout << "\nSalir -> 1";
				cin >> repetir;
				if (repetir = 1) { system("cls"); }

				break;

			default:
				cout << "\n\nOpcion no valida\n" << endl;
				break;
			}
		} while (repetir != 0);
	}

	void correr_programa() {
		menu();
	}
};
