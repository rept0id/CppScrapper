#ifndef MODULE_OPERATIONS_HEADER_IMPORT
#define MODULE_OPERATIONS_HEADER_IMPORT

#include "../../operations.h"

#endif

using namespace std;

string Modules_operations::getSiteTitle() {
	string cmd;
	string cmdResStr;
	
	cmd = "zenity --entry --title='CppScrapper' --text='Provide a title:'";
	
	char cmdRes[CHAR_MAX];
	FILE *f = popen(cmd.c_str(), "r");
	fgets(cmdRes, CHAR_MAX, f);
	
	cmdResStr = cmdRes;
	
	return cmdResStr;
}

string Modules_operations::getSiteURL() {
	string cmd;
	string cmdResStr;
	
	cmd = "zenity --entry --title='CppScrapper' --text='Provide a URL:'";
	
	char cmdRes[CHAR_MAX];
	FILE *f = popen(cmd.c_str(), "r");
	fgets(cmdRes, CHAR_MAX, f);
	
	cmdResStr = cmdRes;
	
	return cmdResStr;
}
