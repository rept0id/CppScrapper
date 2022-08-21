#ifndef MODULE_OPERATIONS_HEADER_IMPORT
#define MODULE_OPERATIONS_HEADER_IMPORT

#include "../../operations.h"

#endif

using namespace std;

int Modules_operations::fetchURL(string siteURL, string fOutputSite) {
	
	siteURL.erase(std::remove(siteURL.begin(), siteURL.end(), '\n'), siteURL.cend());
	
	string cmd;
	
	cmd = "cd";
	cmd += " ";
	cmd += "\"";
	cmd += fOutputSite;
	cmd += "\"";
	cmd += " ";
	cmd += "&&";
	cmd += " ";
	cmd += "wget -E -H -k -K -p";
	cmd += " ";
	cmd += "'";
	cmd += siteURL;
	cmd += "'";
	
	//cmdRes = system(cmd.c_str());
	
	char cmdRes[CHAR_MAX];
	FILE *f = popen(cmd.c_str(), "r");
	fgets(cmdRes, CHAR_MAX, f);
	
	return 0;
}
