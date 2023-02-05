//---------------------------------------------------------------------------

#ifndef GlobalVariablesH
#define GlobalVariablesH
#include <System.Classes.hpp>
#include <vector>
#include "class_Searcher.h"
//---------------------------------------------------------------------------
extern AnsiString name;   // hold actual username
extern std::vector<Searcher*> srch; // vactor of search results, need to expose finded doctors

extern AnsiString tmp_full_name;
extern AnsiString tmp_position;
extern AnsiString tmp_date_time;
extern AnsiString tmp_report;
#endif
