


#include <iostream>
#include "MapGame.h"
#include "WarriorViking.h"



int main()
{

	MapGame m(30,30);
	WarriorViking N1(m);
	WarriorViking N2(m);
	WarriorViking ob[2] = { N1, N2 };
	while (true) {
		m.MapShow();
		N1.RunOrBump(m,ob,2);
		N2.RunOrBump(m,ob,2);
		system("pause");
	}
	
	
	
	
}

