//---------------------------------------------------------------------------

#ifndef FA_PatientsH
#define FA_PatientsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFPatients : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
private:	// User declarations
public:		// User declarations
	__fastcall TFPatients(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFPatients *FPatients;
//---------------------------------------------------------------------------
#endif
