//---------------------------------------------------------------------------

#pragma hdrstop

#include "DB_Manager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void DBManager::Connect()
{
	ADOConnection0->Connected = true;
}
