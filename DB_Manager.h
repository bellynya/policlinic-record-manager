//---------------------------------------------------------------------------

#ifndef DB_ManagerH
#define DB_ManagerH
//---------------------------------------------------------------------------

#include <Data.Win.ADODB.hpp>

class DBManager
{
public:
	TADOConnection *ADOConnection0;
	TADOQuery *ADOQuery0;
	DBManager(TForm  *owner)
	{
		ADOConnection0 = new TADOConnection(owner);
		ADOQuery0 = new TADOQuery(owner);

		ADOConnection0->ConnectionString = "Provider=MSDASQL.1;Persist Security Info=False;Data Source=test_server1;Initial Catalog=cursova";
		ADOConnection0->Provider = "MSDASQL.1";
		ADOQuery0->Connection = ADOConnection0;
	}

	void Connect();

};

#endif
