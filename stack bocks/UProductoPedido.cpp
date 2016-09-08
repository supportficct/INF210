//---------------------------------------------------------------------------

#pragma hdrstop

#include "UProductoPedido.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
ProductoPedido::ProductoPedido(){
  cantidad=0;
}
ProductoPedido::ProductoPedido(Producto *q,int cant){
   cantidad=cant;
   p=q;
}
ProductoPedido::ProductoPedido(const ProductoPedido &q){
   cantidad=q.cantidad;p=q.p;
}
void ProductoPedido::setproducto(Producto *q,int cant){
  cantidad=cantidad+cant;p=q;
}
int ProductoPedido::cant(){
   return cantidad;
}
Producto ProductoPedido::getppr(){
   return *p;
}
void ProductoPedido::setcant(int i){
  cantidad=i;
}
