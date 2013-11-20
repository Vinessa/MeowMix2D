//////////////////////////////////////////////////////////////////////////
#include "AIE.h"
#include <string>
#include <cmath>
#include <time.h>
#include <assert.h>
#include <crtdbg.h>
#include <iostream>
#include "PlayerCat.h"
#include "Background.h"



int main( int argc, char* argv[] )
{
	Initialise(1024, 768, false );
		Background Forest("./images/Forestlong.PNG", 5120, 768, 512, 384, 0, 0, 0);
		Forest.Move();

		PlayerCat Gypsy("./images/CatPlaceholder.png", 186, 104, 412, 650, 0, 0, 3);

		Sprite WhiteKitten("./images/WhiteKitten.png", 68, 46, 412, 684, 0,0);
		Sprite GreyKitten("./images/GreyKitten.png", 68, 46, 380, 684, 0,0);
		Sprite OrangeKitten("./images/OrangeKitten.png", 68, 46, 300, 684, 0,0);

		Gypsy.Move();

		WhiteKitten.Move();
		GreyKitten.Move();
		OrangeKitten.Move();
		
	do
	{
		//Gypsy.DeltaTime();
		//Gypsy.Update();
		//Gypsy.UpdateCat();
		//Gypsy.CheckforJump();
		Forest.Update();
		Forest.CheckForMovement();
		Forest.Draw();
		Gypsy.Draw();
		WhiteKitten.Draw();
		GreyKitten.Draw();
		OrangeKitten.Draw();
	}
	
	while(FrameworkUpdate() == false);
		Shutdown();
		return 0;
}

