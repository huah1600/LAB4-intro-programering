
#include <iostream>
using namespace std;

int main()
{
	enum Nail { RED, GREEN, BLUES };
	enum Toothbrush { EXCITED, MOODY, BLUE };
	Nail yourNail=RED;
	Toothbrush myToothbrush=EXCITED;

	if (yourNail == myToothbrush)
		cout << "Yes that's like that." << endl;
	else
		cout << "Noway, they aren't the same." << endl;

	return 0;
}

PRINTAR UT//cout << "Yes that's like that." << endl; //VARFÖR// JO ,PÅGRUND AV POSITIONEN, EXCITED=0 OCH  RED=0 ,DÄR PRINTAR DET UT SÅ
