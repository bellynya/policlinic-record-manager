//---------------------------------------------------------------------------

#ifndef FA_DiagnosisH
#define FA_DiagnosisH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFDiagnosis : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
private:	// User declarations
public:		// User declarations
	__fastcall TFDiagnosis(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFDiagnosis *FDiagnosis;
//---------------------------------------------------------------------------
#endif
