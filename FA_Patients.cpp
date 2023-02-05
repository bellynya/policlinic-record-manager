//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FA_Patients.h"
#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFPatients *FPatients;
//---------------------------------------------------------------------------
__fastcall TFPatients::TFPatients(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
