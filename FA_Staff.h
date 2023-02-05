//---------------------------------------------------------------------------

#ifndef FA_StaffH
#define FA_StaffH
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
class TFStaff : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TDBGrid *DBGrid1;
private:	// User declarations
public:		// User declarations
	__fastcall TFStaff(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFStaff *FStaff;
//---------------------------------------------------------------------------
#endif
