//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Formulario.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "UPedido.h"
#include "UProducto.h"
#include "UCafe.h"
#include "UCombo.h"
#include "UGaseosa.h"
#include "UMesero.h"
#include "UProductoPedido.h"
#include "Unit2.h"
TForm1 *Form1;
Cafe *c1;Mesero *m1;Gaseosa *g1; Combo *C1;Pedido *p1;ProductoPedido *pp1;int i;Producto *t1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{ c1=new Cafe();m1=new Mesero();g1=new Gaseosa();C1=new Combo();p1=new Pedido();pp1=new ProductoPedido(); t1=new Producto();
i=0;
}
//---------------------------------------------------------------------------
void TForm1::llenart(int k){

   StringGrid1->Cells[0][k]=pp1->getppr().getnombre()+" - "+pp1->getppr().gettamano();
   StringGrid1->Cells[1][k]=IntToStr(pp1->cant());
   StringGrid1->Cells[2][k]=IntToStr(pp1->cant()*pp1->getppr().getprecio());
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{ g1->setnombre("Coca Cola");g1->settamano("Grande");g1->setsabor("Coca Cola");
g1->setprecio(18);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{ g1->setnombre("Fanta");g1->settamano("Grande");g1->setsabor("Fanta");
g1->setprecio(18);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{g1->setnombre("Sprite");g1->settamano("Grande");g1->setsabor("Sprite");
g1->setprecio(18);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
 llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{g1->setnombre("Coca Cola");g1->settamano("Mediana");g1->setsabor("Coca Cola");
g1->setprecio(15);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{g1->setnombre("Fanta");g1->settamano("Mediana");g1->setsabor("Fanta");
g1->setprecio(15);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{g1->setnombre("Sprite");g1->settamano("Mediana");g1->setsabor("Sprite");
g1->setprecio(15);g1->settipo("Gaseosa");pp1->setproducto(g1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{g1->setnombre("Coca Cola");g1->settamano("Pequeña");g1->setsabor("Coca Cola");
g1->setprecio(10);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
 llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{g1->setnombre("Fanta");g1->settamano("Pequeña");g1->setsabor("Fanta");
g1->setprecio(10);g1->settipo("Gaseosa");pp1->setproducto(g1,1);
llenart(i);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button9Click(TObject *Sender)
{g1->setnombre("Sprite");g1->settamano("Pequeña");g1->setsabor("Sprite");
g1->setprecio(10);g1->settipo("Gaseosa");pp1->setproducto(g1,1); llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click4(TObject *Sender)
{c1->seting("Molinillo de cafe, azucar, agua, crema de leche");c1->setnombre("Cafe Expreso");
c1->setprecio(25);c1->settamano("Grande");c1->settipo("Cafe");pp1->setproducto(c1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
{
i++;p1->setproductop(pp1);
pp1->setcant(0);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{ c1->seting("Cafe, Leche y Canela molida");c1->setnombre("Cafe Capuccino");
c1->setprecio(35);c1->settamano("Grande");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{ c1->seting("Cafe molido,Agua,Azucar,Crema");c1->setnombre("Cafe Americano");
c1->setprecio(41);c1->settamano("Grande");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{c1->seting("Cafe molido,Leche caliente,Azucar,Crema");c1->setnombre("Cafe con Leche");
c1->setprecio(30);c1->settamano("Grande");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{ c1->seting("Cafe molido,Leche caliente,Azucar,Cocoa");c1->setnombre("Cafe Moca");
c1->setprecio(33);c1->settamano("Grande");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button34Click(TObject *Sender)
{  c1->seting("Cafe, Leche y Canela molida");c1->setnombre("Cafe Capuccino");
c1->setprecio(30);c1->settamano("Mediano");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button36Click(TObject *Sender)
{c1->seting("Cafe molido,Agua,Azucar,Crema");c1->setnombre("Cafe Americano");
c1->setprecio(35);c1->settamano("Mediano");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button38Click(TObject *Sender)
{c1->seting("Cafe molido,Leche caliente,Azucar,Crema");c1->setnombre("Cafe con Leche");
c1->setprecio(25);c1->settamano("Mediano");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button40Click(TObject *Sender)
{c1->seting("Cafe molido,Leche caliente,Azucar,Cocoa");c1->setnombre("Cafe Moca");
c1->setprecio(28);c1->settamano("Mediano");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button35Click(TObject *Sender)
{c1->seting("Cafe, Leche y Canela molida");c1->setnombre("Cafe Capuccino");
c1->setprecio(25);c1->settamano("Pequeño");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button37Click(TObject *Sender)
{ c1->seting("Cafe molido,Agua,Azucar,Crema");c1->setnombre("Cafe Americano");
c1->setprecio(30);c1->settamano("Pequeño");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button39Click(TObject *Sender)
{c1->seting("Cafe molido,Leche caliente,Azucar,Crema");c1->setnombre("Cafe con Leche");
c1->setprecio(20);c1->settamano("Pequeño");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button41Click(TObject *Sender)
{c1->seting("Cafe molido,Leche caliente,Azucar,Cocoa");c1->setnombre("Cafe Moca");
c1->setprecio(23);c1->settamano("Pequeño");c1->settipo("Cafe");pp1->setproducto(c1,1);
llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{t1->setnombre("Donut de Chocolate");t1->settipo("Donut");t1->settamano("Grande");
t1->setprecio(15);pp1->setproducto(t1,1);llenart(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{ t1->setnombre("Donut de Vainilla");t1->settipo("Donut");t1->settamano("Grande");
t1->setprecio(15);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{t1->setnombre("Donut de Mora");t1->settipo("Donut");t1->settamano("Grande");
t1->setprecio(15);pp1->setproducto(t1,1);llenart(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{t1->setnombre("Donut de Fresa");t1->settipo("Donut");t1->settamano("Grande");
t1->setprecio(15);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{t1->setnombre("Donut de Chantilli");t1->settipo("Donut");t1->settamano("Grande");
t1->setprecio(15);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button42Click(TObject *Sender)
{t1->setnombre("Donut de Chocolate");t1->settipo("Donut");t1->settamano("Mediano");
t1->setprecio(12);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button44Click(TObject *Sender)
{  t1->setnombre("Donut de Vainilla");t1->settipo("Donut");t1->settamano("Mediano");
t1->setprecio(12);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button46Click(TObject *Sender)
{t1->setnombre("Donut de Mora");t1->settipo("Donut");t1->settamano("Mediano");
t1->setprecio(12);pp1->setproducto(t1,1);llenart(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button48Click(TObject *Sender)
{ t1->setnombre("Donut de Fresa");t1->settipo("Donut");t1->settamano("Mediano");
t1->setprecio(12);pp1->setproducto(t1,1);llenart(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button50Click(TObject *Sender)
{  t1->setnombre("Donut de Chantilli");t1->settipo("Donut");t1->settamano("Mediano");
t1->setprecio(12);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button43Click(TObject *Sender)
{t1->setnombre("Donut de Chocolate");t1->settipo("Donut");t1->settamano("Pequeño");
t1->setprecio(9);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button45Click(TObject *Sender)
{
t1->setnombre("Donut de Vainilla");t1->settipo("Donut");t1->settamano("Pequeño");
t1->setprecio(9);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button47Click(TObject *Sender)
{
t1->setnombre("Donut de Mora");t1->settipo("Donut");t1->settamano("Pequeño");
t1->setprecio(9);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button49Click(TObject *Sender)
{
t1->setnombre("Donut de Fresa");t1->settipo("Donut");t1->settamano("Pequeño");
t1->setprecio(9);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button51Click(TObject *Sender)
{
t1->setnombre("Donut de Chantilli");t1->settipo("Donut");t1->settamano("Pequeño");
t1->setprecio(9);pp1->setproducto(t1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Bnm(TObject *Sender)
{
c1->seting("Molinillo de cafe, azucar, agua, crema de leche");c1->setnombre("Cafe Expreso");
c1->setprecio(20);c1->settamano("Mediano");c1->settipo("Cafe");pp1->setproducto(c1,1);llenart(i);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BTU(TObject *Sender)
{c1->seting("Molinillo de cafe, azucar, agua, crema de leche");c1->setnombre("Cafe Expreso");
c1->setprecio(15);c1->settamano("Pequeño");c1->settipo("Cafe");pp1->setproducto(c1,1);llenart(i);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button10Click(TObject *Sender)
{ Application->CreateForm(__classid(TForm2), &Form2);Form2->Show();
  if (!(Form2->Visible)) {
	  Edit1->Text=Form2->ta;
  }
}
//---------------------------------------------------------------------------

