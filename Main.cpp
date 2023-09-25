/*
 * Vector.cpp
 *
 *  Created on: 23 sep. 2023
 *      Author: gonzalo
 */

#include <iostream>
#include <stdexcept>
/*#include "Vector.h"
#include "Pago.h"*/
#include "Deuda.h"

int main()
{
	/*Vector<int *> *vectorDeEnteros = nullptr;
	vectorDeEnteros = new Vector<int *>(5);


	vectorDeEnteros->setDato(1, new int);
	vectorDeEnteros->setDato(2, new int);
	int *valor = new int;
	*valor = 5;
	vectorDeEnteros->setDato(3, valor);
	vectorDeEnteros->setDato(4, new int);
	vectorDeEnteros->setDato(5, new int);

	std::cout << "Valor: " << *valor << std::endl;

	for(unsigned int i = 1; i <= vectorDeEnteros->getLongitud(); i++)
	{
		*(vectorDeEnteros->getDato(i)) = i;
		std::cout << *(vectorDeEnteros->getDato(i)) << std::endl;
	}

	delete vectorDeEnteros;

	Vector<Pago *> *vectorDePagos = nullptr;
	vectorDePagos = new Vector<Pago *>(5);

	//vectorDePagos->setDato(1, new Pago(110));
	//vectorDePagos->getDato(2)->setMonto(200);
	//vectorDePagos->getDato(3)->setMonto(300);

	for(unsigned int i = 1; i <= vectorDePagos->getLongitud(); i++)
	{
		vectorDePagos->setDato(i, new Pago(0));
	}

	for(unsigned int i = 1; i <= vectorDePagos->getLongitud(); i++)
	{
		vectorDePagos->getDato(i)->setMonto(i * 100);
	}

	for(unsigned int i = 1; i <= vectorDePagos->getLongitud(); i++)
	{
		std::cout << "Monto: " << vectorDePagos->getDato(i)->getMonto() << std::endl;
	}
	//double monto = vectorDePagos->getDato(1)->getMonto();
	//std::cout << "Monto 1: " << std::endl;

	Pago *pagoTotal = new Pago(0);
	for(unsigned int i = 1; i <= vectorDePagos->getLongitud(); i++)
	{
		pagoTotal->sumar(vectorDePagos->getDato(i));
	}
	std::cout << "Monto total: " << pagoTotal->getMonto() << std::endl;

	std::cout << "Promedio: " << pagoTotal->getPromedio() << std::endl;

	return 0;*/

	try
	{
		double importe = 1000;
		unsigned int cantidadMaximaDePagos = 5;

		Deuda *deuda = nullptr;
		deuda = new Deuda(importe, cantidadMaximaDePagos);

		//Realiar pagos forma 1
		for(unsigned int i = 1; i <= deuda->getCantidadMaximaDePagos(); i++)
		{
			deuda->pagar(i, i * 100);
		}

		//Realizar pagos forma 2
		/*deuda->pagar(1, 200);
		deuda->pagar(2, 300);
		deuda->pagar(3, 100);
		deuda->pagar(4, 100);
		deuda->pagar(5, 100);*/

		Pago *pagoTotal = new Pago(0);

		std::cout << "Deuda inicial: " << deuda->getImporte() << std::endl;

		std::cout << "Saldo: " << deuda->obtenerSaldo(pagoTotal) << std::endl;

		std::cout << "Cantidad de pagos efectivos: " << deuda->cantidadDePagos() << std::endl;

		std::cout << "Promedio de los pagos: " << deuda->promedioPagos(pagoTotal) << std::endl;

		delete pagoTotal;

		delete deuda;
	} catch(const std::invalid_argument& e)
	{
		std::cout << "Datos mal cargados" << std::endl;
	} catch(const std::invalid_argument& e)
	{
		std::cout << "Datos mal cargados" << std::endl;
	} catch(const std::invalid_argument& e)
	{
		std::cout << "Pago total mayor a deuda" << std::endl;
	}



	return 0;
}

