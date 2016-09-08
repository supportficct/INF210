//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{ ComboBox1->Items->Add("Pequeño");ComboBox1->Items->Add("Mediano");ComboBox1->Items->Add("Grande");
  ComboBox2->Items->Add("Chocolate");ComboBox2->Items->Add("Vainilla");ComboBox2->Items->Add("Mora");
  ComboBox2->Items->Add("Fresa");ComboBox2->Items->Add("Chantilli");ComboBox3->Items->Add("Chocolate");ComboBox3->Items->Add("Vainilla");
  ComboBox3->Items->Add("Mora");ComboBox3->Items->Add("Fresa");ComboBox3->Items->Add("Chantilli");
  ta=s1=s2="";cant=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{ ta=ComboBox1->Items->Strings[ComboBox1->ItemIndex].c_str();
  s1=ComboBox2->Items->Strings[ComboBox2->ItemIndex].c_str();
  s2=ComboBox3->Items->Strings[ComboBox3->ItemIndex].c_str();
  cant=StrToInt(Edit1->Text);

  Close();
}
//---------------------------------------------------------------------------


