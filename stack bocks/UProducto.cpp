//---------------------------------------------------------------------------

#pragma hdrstop

#include "UProducto.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
Producto::Producto(){
	 nombre=tipo=tamano="";
	 precio=0;
}
Producto::Producto(int p,String t,String n,String ta){
	 nombre=n;tipo=t;tamano=ta;precio=p;
}
Producto::Producto(const Producto &P){
	 nombre=P.nombre;tipo=P.tipo;tamano=P.tamano;precio=P.precio;
}
void Producto::setnombre(String n){
	 nombre=n;
}
void Producto::setprecio(int p){
	 precio=p;
}
void Producto::settamano(String ta){
	 tamano=ta;
}
void Producto::settipo(String t){
	 tipo=t;
}
String Producto::getnombre(){
	 return nombre;
}
int Producto::getprecio(){
	 return precio;
}
String Producto::gettamano(){
	 return tamano;
}
String Producto::gettipo(){
	 return tipo;
}

