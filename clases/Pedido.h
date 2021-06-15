/*
 * Pedido.h
 *
 *  Created on: 14 jun. 2021
 *      Author: lazlo
 */
#include "Producto.h"
#include "Usuario.h"

#ifndef CLASES_PEDIDO_H_
#define CLASES_PEDIDO_H_

class Pedido {

	int id;
	Producto *listaProductos;
	Usuario *comprador;

public:
	Pedido(int id, Producto *listaProductos, Usuario *comprador);
	Pedido(const Pedido&);
	void imprimir();
	virtual ~Pedido();
};

#endif /* CLASES_PEDIDO_H_ */
