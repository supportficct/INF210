//---------------------------------------------------------------------------

#ifndef UMeseroH
#define UMeseroH
#include <vcl.h>
#include "UPedido.h"
//---------------------------------------------------------------------------
class Mesero{
   private:
	   String nombre;
	   String direccion;
	   String CI;
	   int numero;
	   class Pedido *p;
   public:
	   //--Constructores--//
	   Mesero();
	   Mesero(String,String,String);
	   Mesero(const Mesero &);
	   //--Setters--//
	   void setnombre(String);
	   void setdireccion(String);
	   void setci(String);
	   //--Getters--//
	   String getnombre();
	   String getdireccion();
	   String getci();
	   //---------------------------------//
	   void asignarpedido(Pedido*);
};
#endif
