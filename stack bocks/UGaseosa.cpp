//---------------------------------------------------------------------------

#pragma hdrstop

#include "UGaseosa.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
 Gaseosa::Gaseosa(){
	sabor=tamano=tipo="";precio=0;
 }
 Gaseosa::Gaseosa(String n,String t,String ta,int p,String s){
	nombre=n;sabor=s;tamano=ta;tipo=t;precio=p;sabor=s;
 }
 Gaseosa::Gaseosa(const Gaseosa &g){
	sabor=g.sabor;nombre=g.nombre;tipo=g.tipo;tamano=g.tamano;precio=g.precio;
 }
 void Gaseosa::setsabor(String s){
	sabor=s;
 }
 String Gaseosa::getsabor(){
	return sabor;
 }
