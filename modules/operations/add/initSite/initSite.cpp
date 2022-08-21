#ifndef MODULE_OPERATIONS_HEADER_IMPORT
#define MODULE_OPERATIONS_HEADER_IMPORT

#include "../../operations.h"

#endif

#include <iostream>

using namespace std;

string Modules_operations::initSite(string siteTitle, string fOutput) {
	
	//cout << "site title";
	//cout << siteTitle;
	
	siteTitle.erase(std::remove(siteTitle.begin(), siteTitle.end(), '\n'), siteTitle.cend());
	
	string cmd;
	
	cmd = "mkdir -p";
	cmd += " ";
	cmd += "\"";
	cmd += fOutput;
	cmd += "/";
	cmd += siteTitle;
	cmd += "\"";
	cmd += ";";
	
	system(cmd.c_str());
	
	string fOutputSite;
	fOutputSite = fOutput;
	fOutputSite += "/";
	fOutputSite += siteTitle;
	
	return fOutputSite;
}
