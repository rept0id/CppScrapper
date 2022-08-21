#include <string.h>
#include "../../include/nlohmann/json.hpp"

using namespace std;
using json = nlohmann::json;

class Modules_operations
{
	public:
		string getSiteTitle();
		string getSiteURL();
		int catSite(string Site);
		string initSite(string siteTitle, string fOutput);
		int fetchURL(string siteURL, string fOutputSite);
};
