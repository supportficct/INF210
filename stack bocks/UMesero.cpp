//---------------------------------------------------------------------------

#pragma hdrstop

#include "UMesero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

 Mesero::Mesero(){
	nombre=direccion=CI="";
 }
 Mesero::Mesero(String n,String d,String c){
	nombre=n;direccion=d;CI=c;
 }
 Mesero::Mesero(const Mesero &M){
	nombre=M.nombre;direccion=M.direccion;CI=M.CI;
 }
 void Mesero::setnombre(String n){
	 nombre=n;
 }
 void Mesero::setdireccion(String d){
	 direccion=d;
 }
 void Mesero::setci(String c){
	 CI=c;
 }
 String Mesero::getnombre(){
	 return nombre;
 }
 String Mesero::getdireccion(){
	 return direccion;
 }
 String Mesero::getci(){
	 return CI;
 }
 void Mesero::asignarpedido(Pedido *q){
	 p=q;numero=p->getnum();
 }