/*
 * Pedido.cpp
 *
 *  Created on: 14 jun. 2021
 *      Author: lazlo
 */

#include "Pedido.h"
#include "Producto.h"
#include "Usuario.h"
#include <iostream>
#include <string.h>

using namespace std;

Pedido::Pedido(int id, Producto *listaProductos, Usuario *comprador) {
	this->id = id;
	this->listaProductos = new Producto();
	this->comprador = new Usuario();
}

Pedido::Pedido(const Pedido &pd) {
	this->id = id;
	this->listaProductos = new Producto();
	this->comprador = new Usuario();
}

Pedido::~Pedido() {
	delete[] listaProductos;
	delete[] comprador;
}

void Pedido::imprimir() {
	cout << id << " - " << comprador << ":" << endl;
}
