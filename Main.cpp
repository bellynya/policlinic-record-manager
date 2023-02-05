//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "F_Login.h"
#include "FA_Patients.h"
#include "FA_Staff.h"
#include "FA_Visits.h"
#include "FA_Users.h"
#include "FA_JobTitle.h"
#include "FA_Diagnosis.h"
#include "FU_DocSearch.h"


#include "FU_SearchRes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

void TForm1::MainMenuSetting()
{
	Login1->Visible = false;
	Logout1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Login1Click(TObject *Sender)
{
	Form2->ShowModal();
	if (Form2->ModalResult == 102)
	{
		AdminPanel->Visible = true;
		MainMenuSetting();
	}
	else if (Form2->ModalResult == 101)
	{
		UserPanel->Visible = true;
        MainMenuSetting();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    FPatients->ShowModal();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
	FStaff->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	FDiagnosis->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    FVisits->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
    FUsers->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Logout1Click(TObject *Sender)
{
	AdminPanel->Visible = false;
	UserPanel->Visible = false;
	Login1->Visible = true;
	Logout1->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	FDocSearch->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
    FJobTitle->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	UserPanel->Visible = true;
	AdminPanel->Visible = true;
}
//---------------------------------------------------------------------------

