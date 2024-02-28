#include <iostream>
#include <stdlib.h>

using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constrictor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: "; // new ¿¬»êÀÚ
	Simple* sp1 = new Simple;

	cout << "case 2 : "; // malloc ¿¬»êÀÚ
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	
	delete sp1; // new ¼Ò¸ê
	free(sp2); // malloc ¼Ò¸ê

	return 0;
}