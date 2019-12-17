//============================================================================
// Name        : Project2.cpp
// Author      : $(author)
// Version     :
// Copyright   : $(copyright)
// Description : Hello World in C++
//============================================================================

#include <ev3.h>
#include<iostream>
#include <string>
#include<thread>
#include"sensor.h"
#include"control.h"
#include"behavior.h"
 int goalmovecoutn = 0;

int main()
{
  InitEV3();
  std::string greeting("proj 2 started!");
  LcdPrintf(1, "%s\n", greeting.c_str());
  int initsensor = setSensor();
  std::thread colorthread(ReadColorSensor);
  std::thread lightthread(ReadLightSensor);
  std::thread frontsonarthread(ReadFrontSonar);
  std::thread rightsonarthread(ReadRightSonar);


/*
  turn_clockwise(90);
  stop();
  Wait(2000);
  turn_anticlockwise(90);
  stop();
  Wait(2000);*/


  while(true)
  {
	  //don't comment it


	  if(GoalReached ==1){
		  //blow the candle action
		  SetLedPattern(LED_GREEN_PULSE);
		  ext_fire();
		  stop();
		  break;
	  }
	  if(extLineOfsight == 1){
		  SetLedPattern(LED_RED);
		  extSightCount = 0;
		  /*
		  std::string greeting("line of sight!");
		    LcdPrintf(1, "%s\n", greeting.c_str());
		    Wait(2000);
		    */
		  extSightFlag = 0;
		  if(goalmovecoutn < 3)
		  {
			  move_forward(50,10);
			  move_backward(3,10);
			  stop();
			  Wait(2);
			  goalmovecoutn++;
		  }
		  else{
			  stop();
			  move_backward(15,20);
			  goalmovecoutn = 0;
			  turn_clockwise(30);
			  if((extLineOfsight == 1)){
				  move_backward(30,10);
				  move_forward(305*1,40);
			  }
			  else{
				  turn_anticlockwise(60);
				  move_backward(30,20);
				  move_forward(305*1,40);
			  }

			  //turn_anticlockwise(360);
		  }
		  continue;
	  }
	  if(GoalReached == 0 && extLineOfsight == 0){
		 follow_wall();
		 wander();
	  }
  	  if(!ButtonIsUp(BTNUP))
  	  {
  	  			FreeEV3();
  	  }
  }

  while(true){
	  if(GoalReached ==1){
	  		  //blow the candle action
	  		  SetLedPattern(LED_GREEN_PULSE);
	  	stop();
	 }
	if(!ButtonIsUp(BTNUP))
	{
	  	FreeEV3();
	}
  }





  colorthread.join();
  lightthread.join();
  frontsonarthread.join();
  rightsonarthread.join();



  Wait(2000);

  FreeEV3();
}
