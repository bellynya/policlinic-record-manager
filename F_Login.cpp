//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "F_Login.h"
#include "DB_Manager.h"
#include "DM.h"
#include "GlobalVariables.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
AnsiString name;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner, String* user_name)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
	TLocateOptions Options;
	Variant locvalues[2];
	locvalues[0] = Variant(Edit1->Text);
	locvalues[1] = Variant(Edit2->Text);

	Variant res = DataModule2->ADOT_Users->Lookup("login;password_", VarArrayOf(locvalues, 1), "access_lvl");
	if (res.IsNull()) {
		ModalResult = -1;
	}
	else
	{
		ModalResult = res;
		name = Edit1->Text;
	}
}

//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	Edit1->Text = "";
    Edit2->Text = "";
}
//---------------------------------------------------------------------------

