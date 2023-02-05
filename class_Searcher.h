//---------------------------------------------------------------------------

#ifndef class_SearcherH
#define class_SearcherH
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------


class Searcher
{
public:
	TComponent *Owner_;

	TPanel *InfoBlock;
	TButton *Button1;
	TLabel *Label1;
	TLabel *Label2;

//-----------------------------------------------------------------

	AnsiString date_time;
	AnsiString report;
	AnsiString full_name;
	AnsiString position;

//-----------------------------------------------------------------

	int InfoBlock_leftpos = 0;
	int InfoBlock_toppos = 0;
	bool is_initialized;

//-----------------------------------------------------------------

	Searcher(TComponent* Owner)
	{
		Owner_ = Owner;
		is_initialized = false;
	}

	void Initializing(AnsiString name, AnsiString pos)
	{
		full_name = name;
		position = pos;

		InfoBlock = new TPanel(Owner_);
		InfoBlock->Parent = dynamic_cast<TWinControl*>(Owner_);
		if (!InfoBlock->Parent) {
			ShowMessage("troubles with dynamic_cast");
		}
		InfoBlock->Width = 300;
		InfoBlock->Height = 300;

		Button1 = new TButton(InfoBlock);
		Button1->Parent = InfoBlock;
		Button1->Height = 25;
		Button1->Width = 100;
		Button1->Caption = "Обрати лікаря";
		Button1->Left = 100;
		Button1->Top = 200;
		Button1->OnClick = OnClick;

		Label1 = new TLabel(InfoBlock);
		Label1->Parent = InfoBlock;
		Label1->Height = 25;
		Label1->Width = 100;
		Label1->Caption = full_name;
		Label1->Left = 75;
		Label1->Top = 50;

		Label2 = new TLabel(InfoBlock);
		Label2->Parent = InfoBlock;
		Label2->Height = 25;
		Label2->Width = 100;
		Label2->Caption = position;
		Label2->Left = 130;
		Label2->Top = 100;

		is_initialized = true;
	}


	void LeftIndent(int lvalue)
	{
		InfoBlock->Left = lvalue;
		InfoBlock->Top = InfoBlock_toppos;
	}

	void TopIndent(int tvalue)
	{
		InfoBlock_toppos += tvalue;

		InfoBlock->Left = InfoBlock_leftpos;
		InfoBlock->Top = InfoBlock_toppos;
	}

	void __fastcall OnClick(TObject *Sender)
	{
		dynamic_cast<TForm*>(Owner_)->Close();
		InfoForm *inf = new InfoForm();
		inf->Form->ShowModal();

		if (inf->Form->ModalResult == 11) {
			date_time = inf->Edit1->Text;
			report = inf->Edit2->Text;
		}

		//dynamic_cast<TCustomForm*>(Owner_)->Close();
	}

	~Searcher()
	{
		if (is_initialized) {
			delete InfoBlock;
		}
		else delete this;
	}

//private:

	class InfoForm
	{
	public:
		TForm *Form;
		TPanel *Carrier;
		TEdit* Edit1;
		TEdit* Edit2;
		TButton * Button;



		InfoForm()
		{
			Form = new TForm(Application);
			Form->Height = 300;
			Form->Width = 300;
			Form->AutoSize = true;

			Carrier = new TPanel(Form);
			Carrier->Parent = Form;
			Carrier->Width = 300;
			Carrier->Height = 300;

			Edit1 = new TEdit(Carrier);
			Edit1->Parent = Carrier;
			Edit1->Height = 25;
			Edit1->Width = 100;
			Edit1->Left = 100;
			Edit1->Top = 50;
			Edit1->TextHint = "Дата та час запису:";

			Edit2 = new TEdit(Carrier);
			Edit2->Parent = Carrier;
			Edit2->Height = 25;
			Edit2->Width = 100;
			Edit2->Left = 100;
			Edit2->Top = 150;
			Edit2->TextHint = "Опишіть скаргу:";

			Button = new TButton(Carrier);
			Button->Parent = Carrier;
			Button->Height = 25;
			Button->Width = 100;
			Button->Caption = "Готово";
			Button->Left = 100;
			Button->Top = 250;
			Button->OnClick = InfoOnClick;
		}

		void __fastcall InfoOnClick(TObject *Sender)
		{
			Form->ModalResult = 11;
		}
	};
};



#endif
