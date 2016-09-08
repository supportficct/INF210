//---------------------------------------------------------------------------

#ifndef UProductoH
#define UProductoH
#include <vcl.h>
//---------------------------------------------------------------------------
class Producto{
   protected:
	  int precio;
	  String tamano;
	  String nombre;
	  String tipo;
	public:
	//--Constructores--//
	Producto();  //------Normal------//
	Producto(int,String,String,String); //------Parametrizado------//
	Producto(const Producto &);//------DE COPIA------//
	//--Setters--//
	void setnombre(String);
	void settipo(String);
	void settamano(String);
	void setprecio(int);
	//--Getters--//
	String getnombre();
	String gettipo();
	String gettamano();
	int getprecio();

};

#endif
