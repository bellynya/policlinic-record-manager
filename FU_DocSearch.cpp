//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FU_DocSearch.h"
#include "DM.h"
#include "GlobalVariables.h"
#include "class_Searcher.h"
#include "FU_SearchRes.h"
#include <vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFDocSearch *FDocSearch;
std::vector<Searcher*> srch;
const int MAX_IN_LINE = 3;
//---------------------------------------------------------------------------
__fastcall TFDocSearch::TFDocSearch(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFDocSearch::FormShow(TObject *Sender)
{
	FDocSearch->Caption = name;
}
//---------------------------------------------------------------------------



void __fastcall TFDocSearch::RadioGroup1Click(TObject *Sender)
{
	Edit1->TextHint = RadioGroup1->Items->Strings[RadioGroup1->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall TFDocSearch::Button1Click(TObject *Sender)
{
	int top_indent = 10;
	AnsiString full_name;
	if (RadioGroup1->ItemIndex == 0)
	{
		try
		{
			DataModule2->ADOQuery1->SQL->Clear();
			DataModule2->ADOQuery1->SQL->Add("select concat(surname, ' ',  name_, ' ',  second_name) as full_name, position from staff where surname = '" + Edit1->Text + "'");
			DataModule2->ADOQuery1->Open();

			DataModule2->ADOQuery1->First();
			TStringList* s = new TStringList();
			DataModule2->ADOQuery1->Fields->GetFieldNames(s);

			for (int i = 0; i < DataModule2->ADOQuery1->RecordCount; i++) {
				full_name = "";
				srch.push_back(new Searcher(FSearchRes));
				srch[i]->Initializing(DataModule2->ADOQuery1->FieldByName(s->Strings[DataModule2->ADOQuery1->FieldCount-2])->AsString,
					VarToStr(DataModule2->ADOT_JobTitle->Lookup("job_id", DataModule2->ADOQuery1->FieldByName(s->Strings[DataModule2->ADOQuery1->FieldCount-1])->AsString, "caption"))); // initiallizing searcher obj with fullname and staff_poisition

				int indent_calculation = srch.size() % MAX_IN_LINE;
					if (indent_calculation == 1) {      // counts indent, that we need for
														// placing searcher objects on FU_SearchRes form
						srch[i]->TopIndent(top_indent); // making three-wide matrix
						srch[i]->LeftIndent(20);
					}
					else if (indent_calculation == 2) {
						srch[i]->TopIndent(top_indent);
						srch[i]->LeftIndent(350);
					}
					else if (indent_calculation == 0) {
						srch[i]->TopIndent(top_indent);
						srch[i]->LeftIndent(680);
						top_indent += 310;
						FSearchRes->Height += 310;
					}

				DataModule2->ADOQuery1->Next();
			}
			FSearchRes->ShowModal();
		}
		catch (...)
		{
			ShowMessage("Error in SelectFunc");
		}
	}
	else
	{
		try
		{
			DataModule2->ADOQuery1->SQL->Clear();
			Variant res = DataModule2->ADOT_JobTitle->Lookup("caption", Edit1->Text, "job_id");
			DataModule2->ADOQuery1->SQL->Add("select concat(surname, ' ',  name_, ' ',  second_name) as full_name, position from staff where position = " + VarToStr(res));
			DataModule2->ADOQuery1->Open();

			DataModule2->ADOQuery1->First();
			TStringList* s = new TStringList();
			DataModule2->ADOQuery1->Fields->GetFieldNames(s);

			for (int i = 0; i < DataModule2->ADOQuery1->RecordCount; i++) {
				full_name = "";
				srch.push_back(new Searcher(FSearchRes));
				srch[i]->Initializing(DataModule2->ADOQuery1->FieldByName(s->Strings[DataModule2->ADOQuery1->FieldCount-2])->AsString,
					VarToStr(DataModule2->ADOT_JobTitle->Lookup("job_id", DataModule2->ADOQuery1->FieldByName(s->Strings[DataModule2->ADOQuery1->FieldCount-1])->AsString, "caption"))); // initiallizing searcher obj with fullname and staff_poisition

				int indent_calculation = srch.size() % MAX_IN_LINE;
					if (indent_calculation == 1) {      // counts indent, that we need for
														// placing searcher objects on FU_SearchRes form
						srch[i]->TopIndent(top_indent); // making three-wide matrix
						srch[i]->LeftIndent(20);
					}
					else if (indent_calculation == 2) {
						srch[i]->TopIndent(top_indent);
						srch[i]->LeftIndent(350);
					}
					else if (indent_calculation == 0) {
						srch[i]->TopIndent(top_indent);
						srch[i]->LeftIndent(680);
						top_indent += 310;
						FSearchRes->Height += 310;
					}

				DataModule2->ADOQuery1->Next();
			}
			FSearchRes->ShowModal();
		}
		catch (...)
		{
			ShowMessage("Error in SelectFunc");
		}

	}


}
//---------------------------------------------------------------------------



void __fastcall TFDocSearch::Button2Click(TObject *Sender)
{
	try {
		DataModule2->ADOQuery1->SQL->Clear();
		Variant id = DataModule2->ADOT_Users->Lookup("login", name, "id");
		DataModule2->ADOQuery1->SQL->Add("select staff.staff_id from staff, (select concat(surname, ' ',  name_, ' ',  second_name) as full_name, staff_id from staff) as t1 where t1.full_name = '" + tmp_full_name + "' and t1.staff_id = staff.staff_id");
		DataModule2->ADOQuery1->Open();
		DataModule2->ADOQuery1->First();
        TStringList* s = new TStringList();
		DataModule2->ADOQuery1->Fields->GetFieldNames(s);
		AnsiString doc_name = DataModule2->ADOQuery1->FieldByName(s->Strings[DataModule2->ADOQuery1->FieldCount-1])->AsString;
		DataModule2->ADOQuery1->SQL->Clear();

		DataModule2->ADOQuery1->SQL->Add("insert into visits values( " + VarToStr(id) + ", " + doc_name + ", '" + tmp_date_time + "', '" + tmp_report + "', null)");
		DataModule2->ADOQuery1->ExecSQL();
	} catch (...) {
		ShowMessage("Error in InsertFunc");
	}

}
//---------------------------------------------------------------------------

