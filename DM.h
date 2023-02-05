//---------------------------------------------------------------------------

#ifndef DMH
#define DMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TADOTable *ADOT_Diagnosis;
	TADOTable *ADOT_JobTitle;
	TADOTable *ADOT_Patients;
	TADOTable *ADOT_Staff;
	TADOTable *ADOT_Users;
	TADOTable *ADOT_Visits;
	TDataSource *DS_Diagnosis;
	TDataSource *DS_Patients;
	TDataSource *DS_Users;
	TDataSource *DS_JobTitle;
	TDataSource *DS_Staff;
	TDataSource *DS_Visits;
	TAutoIncField *ADOT_Patientspatient_id;
	TStringField *ADOT_Patientssurname;
	TStringField *ADOT_Patientsname_;
	TStringField *ADOT_Patientssecond_name;
	TIntegerField *ADOT_Patientsto_staff;
	TStringField *ADOT_Patientssex;
	TIntegerField *ADOT_Visitsid_patient;
	TIntegerField *ADOT_Visitsid_staff;
	TStringField *ADOT_Visitsdate_n_time;
	TStringField *ADOT_Visitsreport;
	TIntegerField *ADOT_Visitsdiagnosis;
	TStringField *ADOT_Visitsstaff_name;
	void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
