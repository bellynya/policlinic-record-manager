//---------------------------------------------------------------------------

#ifndef FA_VisitsH
#define FA_VisitsH
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
class TFVisits : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TDBGrid *DBGrid1;
private:	// User declarations
public:		// User declarations
	__fastcall TFVisits(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFVisits *FVisits;
//---------------------------------------------------------------------------
#endif
