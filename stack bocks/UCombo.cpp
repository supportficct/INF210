//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCombo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
 Combo::Combo(){
	dim=0;
 }
 Combo::Combo(String n,String t,String ta,int p,Producto a1,Producto a2){
	nombre=n;tipo=t;tamano=ta;precio=p;
	P[0]=a1;P[1]=a2;dim=2;
 }
 Combo::Combo(const Combo &c){
	dim=c.dim ; nombre=c.nombre;tamano=c.tamano;tipo=c.tipo;
	for (int i = 0; i < dim; i++) {
		P[i]=c.P[i];
	}
 }
 void Combo::setproducto(Producto A){
	if (dim<=MAX) {
	   P[dim]=A;dim++;
	}else{
		ShowMessage("Error");
	}
 }
 String Combo::mostrar(){
	String s="";
	for (int i = 0; i <= dim; i++) {
	   Producto h=P[i];
	   s=h.getnombre()+" ;"+"\n";
	}
	return s;
 }