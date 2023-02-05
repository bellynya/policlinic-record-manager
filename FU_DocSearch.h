//---------------------------------------------------------------------------

#ifndef FU_DocSearchH
#define FU_DocSearchH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.CheckLst.hpp>
//---------------------------------------------------------------------------
class TFDocSearch : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TPanel *Panel1;
	TEdit *Edit1;
	TPanel *Panel2;
	TButton *Button1;
	TRadioGroup *RadioGroup1;
	TButton *Button2;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit5;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall RadioGroup1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFDocSearch(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFDocSearch *FDocSearch;
//---------------------------------------------------------------------------
#endif
