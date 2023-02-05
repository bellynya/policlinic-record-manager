//---------------------------------------------------------------------------


#pragma hdrstop

#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
__fastcall TDataModule2::TDataModule2(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDataModule2::DataModuleCreate(TObject *Sender)
{
    ADOConnection1->Connected = true;
	ADOT_Diagnosis->Open();
	ADOT_JobTitle->Open();
	ADOT_Patients->Open();
	ADOT_Staff->Open();
	ADOT_Users->Open();
	ADOT_Visits->Open();

//	ADOQuery1->ExecSQL(); // create, alter, insert, delete, update
//	ADOQuery1->Open(); // select
}
//---------------------------------------------------------------------------
