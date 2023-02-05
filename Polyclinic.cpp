//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("F_Login.cpp", Form2);
USEFORM("FU_SearchRes.cpp", FSearchRes);
USEFORM("FU_DocSearch.cpp", FDocSearch);
USEFORM("Main.cpp", Form1);
USEFORM("FA_Diagnosis.cpp", FDiagnosis);
USEFORM("DM.cpp", DataModule2); /* TDataModule: File Type */
USEFORM("FA_Patients.cpp", FPatients);
USEFORM("FA_Visits.cpp", FVisits);
USEFORM("FA_Users.cpp", FUsers);
USEFORM("FA_Staff.cpp", FStaff);
USEFORM("FA_JobTitle.cpp", FJobTitle);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TDataModule2), &DataModule2);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TFPatients), &FPatients);
		Application->CreateForm(__classid(TFStaff), &FStaff);
		Application->CreateForm(__classid(TFDiagnosis), &FDiagnosis);
		Application->CreateForm(__classid(TFUsers), &FUsers);
		Application->CreateForm(__classid(TFVisits), &FVisits);
		Application->CreateForm(__classid(TFDocSearch), &FDocSearch);
		Application->CreateForm(__classid(TFSearchRes), &FSearchRes);
		Application->CreateForm(__classid(TFJobTitle), &FJobTitle);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
