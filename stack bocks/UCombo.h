//---------------------------------------------------------------------------

#ifndef UComboH
#define UComboH
#include <vcl.h>
#include "UProducto.h"
//---------------------------------------------------------------------------
const int MAX=6;
class Combo:public Producto{
   private:
	 Producto P[MAX];
	 byte dim;
   public:
	 Combo();
	 Combo(String,String,String,int,Producto,Producto);
	 Combo(const Combo &);
	 void setproducto(Producto);
	 String mostrar();

};

#endif
