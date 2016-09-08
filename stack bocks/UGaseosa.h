//---------------------------------------------------------------------------

#ifndef UGaseosaH
#define UGaseosaH
#include <vcl.h>
#include "UProducto.h"
//---------------------------------------------------------------------------
class Gaseosa:public Producto{
 private:
	String sabor;
 public:
	Gaseosa();
	Gaseosa(String,String,String,int,String);
	Gaseosa(const Gaseosa &);
	void setsabor(String);
	String getsabor();

};
#endif
