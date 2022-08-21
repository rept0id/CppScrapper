#ifndef MODULE_MAIN_HEADER_IMPORT
#define MODULE_MAIN_HEADER_IMPORT

#include "../main.h"

#endif

#ifndef MODULE_MAIN_RUNOPERATION

#include "../../operations/add/getSite/getSite.cpp"
#include "../../operations/add/catSite/catSite.cpp"
#include "../../operations/add/initSite/initSite.cpp"
#include "../../operations/add/fetchURL/fetchURL.cpp"

#define MODULE_MAIN_RUNOPERATION

#endif

using namespace std;

int Modules_main::runOperation(int operation, string fOutput) {	
	//Modules_operations mOperations;
	
	string siteTitle;
	string siteURL;
	string fOutputSite;
	
	Modules_operations mOperations;
	
	switch(operation) {
		case 1:
			//add
			
			siteTitle = mOperations.getSiteTitle();
			siteURL = mOperations.getSiteURL();
			//mOperations.catSite(Site);
			
			fOutputSite = mOperations.initSite(siteTitle, fOutput);
			
			//if url
			mOperations.fetchURL(siteURL, fOutputSite);
			
			break;
		case 2:
			//list
			cout << "list selected";		  
			break;
		case 3:
			//settings
			cout << "settings selected";
			break;
	}
	
	return 0;
}
