#include "dotH/globals.h"
#include "dotH/includes.h"
#include "dotH/prototypes.h"
#include "dotH/headers.h"

void dieStructure()
{
	switch (sideTotal)
	{
		case 6:
			SixSide();
			break;

		case 20:
			twentySideMake(1,(sqrt(5)-1)/2.0 , 0);

		default:
			
			break;


	}
}
