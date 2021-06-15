/*
 * main.cpp
 *
 *  Created on: 12 jun. 2021
 *      Author: lazlo
 */

#include <iostream>
#include <string.h>
#include "Usuario.h"
#include "Producto.h"
#include "Pedido.h"

using namespace std;


void menuInicio();
void menuPrincipal();
void menuProductos();
void menuCompra();


int main(void) {

}

void menuInicio() {
	cout << "Bienvenido" << endl;
	cout << "Seleccione una opción" << endl;

	int opcion;

	do {

		cout << "1 - Iniciar Sesión" << endl;
		cout << "2 - Registro" << endl;
		cout << "3 - Opciones Avanzadas" << endl;

		cin >> opcion;

		switch (opcion) {

			char dni[10];
			char nombreUsuario[20];
			char contrasenya[20];

			case 1:
			{
				cout << "Introduzca el nombre de usuario: " << endl;
				cin >> nombreUsuario;

				cout << "Introduzca su contraseña" << endl;
				cin >> contrasenya;

				menuPrincipal(); // TODO

			}
				break;

			case 2:
			{
				cout << "Introduzca su DNI: " << endl;
				cin >> dni;

				cout << "Introduzca el nombre de usuario: " << endl;
				cin >> nombreUsuario;

				cout << "Introduzca su contraseña" << endl;
				cin >> contrasenya;
			}
				break;

			case 3:
			{
				// Admin
			}
		}

	} while (opcion != 1 || opcion != 2 || opcion != 3);
}

void menuPrincipal() {

	cout << "1 - Productos" << endl;
	cout << "2 - Mis compras" << endl;
	cout << "3 - Salir" << endl;

	int opcion;

	do {

		switch (opcion) {
			case 1:
			{
				menuProductos();
			}
				break;
			case 2:
			{
				menuCompra();
			}
				break;
			case 3:
			{
				exit(0);
			}
		}

	} while (opcion != 1 || opcion != 2 || opcion != 3);
}

void menuProductos() {
	// Select DB mostrar categorias
}

void menuCompra() {
	// TODO mas adelante
}
