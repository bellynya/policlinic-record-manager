//---------------------------------------------------------------------------

#ifndef FU_SearchResH
#define FU_SearchResH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFSearchRes : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFSearchRes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFSearchRes *FSearchRes;
//---------------------------------------------------------------------------
#endif
