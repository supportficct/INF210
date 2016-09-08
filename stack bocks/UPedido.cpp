//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPedido.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Pedido::Pedido(){
   numero=0;dim=0;
}
Pedido::Pedido(ProductoPedido *q,Mesero *m1){
	m2=m1;p[0]=q;dim=1;numero=1;
}
Pedido::Pedido(const Pedido &q){
   m2=q.m2;dim=q.dim;numero=q.numero;
   for (int i = 0; i <= dim; i++) {
	   p[i]=q.p[i];
   }
}
void Pedido::setproductop(ProductoPedido *q){
   p[dim]=q;dim++;
}
void Pedido::setmesero(Mesero *m1){
   m2=m1;numero++;
}
int Pedido::getnum(){
  return numero;
}

