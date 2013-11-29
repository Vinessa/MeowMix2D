//////////////////////////////////////////////////////////////////////////
#include "AIE.h"
#include <string>
#include <cmath>
#include <time.h>
#include <assert.h>
#include <crtdbg.h>
#include <iostream>
#include "PlayerCat.h"



int main( int argc, char* argv[] )
{
	Initialise(1024, 768, false );
		Sprite Background("./images/OldForest.PNG", 1024, 768, 512, 384, 0, 0);
		Background.Move();
		PlayerCat Gypsy("./images/CatPlaceholder.png", 186, 104, 412, 598, 0, 0, 3);
		Gypsy.Move();
	do
	{
		
		Background.Draw();
		Gypsy.Draw();
	}
	
	while(FrameworkUpdate() == false);
		Shutdown();
		return 0;
}

