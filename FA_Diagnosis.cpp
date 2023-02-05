//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FA_Diagnosis.h"
#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFDiagnosis *FDiagnosis;
//---------------------------------------------------------------------------
__fastcall TFDiagnosis::TFDiagnosis(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
