/*
 * Producto.h
 *
 *  Created on: 14 jun. 2021
 *      Author: lazlo
 */

#ifndef CLASES_PRODUCTO_H_
#define CLASES_PRODUCTO_H_

class Producto {

	int id;
	char *nombre;
	float precio;

	char *categoria;

public:
	Producto(int id, char *nombre, float precio, char *categoria);
	Producto(const Producto&);
	Producto();
	virtual ~Producto();

	void imprimir();
	char* getNombre();
};

#endif /* CLASES_PRODUCTO_H_ */
