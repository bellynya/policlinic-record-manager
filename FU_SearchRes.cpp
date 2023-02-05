//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FU_SearchRes.h"
#include "class_Searcher.h"
#include "GlobalVariables.h"
#include "FU_DocSearch.h"
#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFSearchRes *FSearchRes;

AnsiString tmp_full_name;
AnsiString tmp_position;
AnsiString tmp_date_time;
AnsiString tmp_report;

//---------------------------------------------------------------------------
__fastcall TFSearchRes::TFSearchRes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFSearchRes::FormClose(TObject *Sender, TCloseAction &Action)
{

	for (auto var : srch) {
		if (!var->date_time.IsEmpty()) {
            FDocSearch->Button2->Enabled = true;
			tmp_full_name = var->full_name;
			tmp_position = var->position;
			tmp_date_time = var->date_time;
			tmp_report = var->report;

			FDocSearch->Edit2->Text = var->full_name;
			FDocSearch->Edit3->Text = var->position;
			FDocSearch->Edit4->Text = var->date_time;
			FDocSearch->Edit5->Text = var->report;
		}
	}

	for (auto var : srch) {
		var->~Searcher();
	}
	srch.clear();
	FSearchRes->Height = 375;


}
//---------------------------------------------------------------------------



