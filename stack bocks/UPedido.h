//---------------------------------------------------------------------------

#ifndef UPedidoH
#define UPedidoH
#include <vcl.h>
#include "UProductoPedido.h"
#include "UMesero.h"
//---------------------------------------------------------------------------
const int MAX2=20;
class Pedido{
 private:
	int numero;
	int dim;
   class	Mesero *m2;
   class	ProductoPedido *p[MAX2];
 public:
	Pedido();
	Pedido(ProductoPedido*,Mesero*);
	Pedido(const Pedido &);
	void setproductop(ProductoPedido*);
	void setmesero(Mesero*);
	int getnum();
};

#endif
