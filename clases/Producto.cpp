/*
 * Producto.cpp
 *
 *  Created on: 14 jun. 2021
 *      Author: lazlo
 */

#include <iostream>
#include <string.h>
#include "Producto.h"
#include "Usuario.h"
#include "Pedido.h"

using namespace std;

Producto::Producto(int id, char *nombre, float precio, char *categoria) {
	this->id = id;
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);

	this->precio = precio;
	this->categoria = new char[strlen(categoria) + 1];
	strcpy(this->nombre, nombre);

}

Producto::Producto(const Producto &pr) {
	this->id = id;
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);

	this->precio = precio;
	this->categoria = new char[strlen(categoria) + 1];
	strcpy(this->nombre, nombre);
}

Producto::Producto() {
	id = 0;
	nombre = new char[20];
	nombre[0] = '\0';
	categoria = new char[20];
	categoria[0] = '\0';
}

Producto::~Producto() {
	delete[] nombre;
	delete[] categoria;
}

void Producto::imprimir() {
	cout << id << " - " << nombre << " - " << precio << endl;
}

char* Producto::getNombre() {
	return nombre;
}
