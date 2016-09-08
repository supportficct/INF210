//---------------------------------------------------------------------------

#ifndef UCafeH
#define UCafeH
#include <vcl.h>
#include "UProducto.h"
//---------------------------------------------------------------------------
class Cafe:public Producto{
  private:
	 String ingredientes;
  public:
	 Cafe();
	 Cafe(String,String,String,int,String);
	 Cafe(const Cafe &);
	 void seting(String);
	 String geting();

};
#endif
