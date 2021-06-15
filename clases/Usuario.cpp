/*
 * Usuario.cpp
 *
 *  Created on: 14 jun. 2021
 *      Author: lazlo
 */

#include <string.h>
#include "Usuario.h"
#include "Producto.h"
#include "Pedido.h"

Usuario::Usuario(char *dni, char *nombreUsuario, char *contrasenya) {
	this->dni = new char[strlen(dni) + 1];
	strcpy(this->dni, dni);

	this->nombreUsuario = new char[strlen(nombreUsuario) + 1];
	strcpy(this->nombreUsuario, nombreUsuario);

	this->contrasenya = new char[strlen(contrasenya) + 1];
	strcpy(this->contrasenya, contrasenya);
}

Usuario::Usuario(const Usuario &u) {
	this->dni = new char[strlen(dni) + 1];
	strcpy(this->dni, dni);

	this->nombreUsuario = new char[strlen(nombreUsuario) + 1];
	strcpy(this->nombreUsuario, nombreUsuario);

	this->contrasenya = new char[strlen(contrasenya) + 1];
	strcpy(this->contrasenya, contrasenya);
}

Usuario::Usuario() {
	dni = new char[10];
	dni[0] = '\0';

	nombreUsuario = new char[20];
	nombreUsuario[0] = '\0';

	contrasenya = new char[20];
	contrasenya[0] = '\0';
}

Usuario::~Usuario() {
	delete[] dni;
	delete[] nombreUsuario;
	delete[] contrasenya;
}

