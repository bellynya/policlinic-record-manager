//---------------------------------------------------------------------------

#ifndef FA_JobTitleH
#define FA_JobTitleH
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
class TFJobTitle : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
private:	// User declarations
public:		// User declarations
	__fastcall TFJobTitle(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFJobTitle *FJobTitle;
//---------------------------------------------------------------------------
#endif
