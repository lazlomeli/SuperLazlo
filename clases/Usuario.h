/*
 * Usuario.h
 *
 *  Created on: 14 jun. 2021
 *      Author: lazlo
 */

#ifndef CLASES_USUARIO_H_
#define CLASES_USUARIO_H_

class Usuario {

	char *dni;
	char *nombreUsuario;
	char *contrasenya;

public:
	Usuario(char *dni, char *nombreUsuario, char *contrasenya);
	Usuario(const Usuario&);
	Usuario();
	virtual ~Usuario();
};

#endif /* CLASES_USUARIO_H_ */
