//---------------------------------------------------------------------------

#ifndef UProductoPedidoH
#define UProductoPedidoH
#include <vcl.h>
#include "UProducto.h"
#include <stdio.h>
//---------------------------------------------------------------------------

class ProductoPedido{
  private:
	 int cantidad;
	 Producto *p;
  public:
	 ProductoPedido();
	 ProductoPedido(Producto*,int);
	 ProductoPedido(const ProductoPedido &);
	 void setproducto(Producto*,int);
	 int cant();
	 Producto getppr();
     void setcant(int);

};


#endif
