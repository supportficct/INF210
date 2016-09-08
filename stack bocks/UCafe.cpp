//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCafe.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
 Cafe::Cafe(){
	nombre=tamano=tipo=ingredientes="";precio=0;
 }
 Cafe::Cafe(String n,String t,String ta,int p,String i){
	nombre=n;tamano=ta;tipo=t;precio=p;ingredientes=i;
 }
 Cafe::Cafe(const Cafe &c){
	nombre=c.nombre;tamano=c.tamano;tipo=c.tipo;precio=c.precio;ingredientes=c.ingredientes;
 }
 void Cafe::seting(String i){
	ingredientes = i;
 }
 String Cafe::geting(){
	return ingredientes;
 }

