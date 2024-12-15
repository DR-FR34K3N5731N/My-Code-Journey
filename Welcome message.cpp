#include <iostream>
// std::getline may be found in <string>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "May I know your name?" << endl;
	//getline used for long names, for example: John Brown
	getline(cin,str);
	//if it's a short name: cin>>str is more preferable
	cout << "Welcome Mr./Miss " << str << endl;
	return 0;
}
