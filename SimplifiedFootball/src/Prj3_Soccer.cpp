//============================================================================
// Name        : Prj3_Soccer.cpp
// Author      : $(author)
// Version     :
// Copyright   : $(copyright)
// Description : Hello World in C++
//============================================================================


#include <ev3.h>
#include <string>
#include<thread>
#include"sensor.h"
#include"control.h"
#include"behavior.h"

int main()
{
  char buffer[10];
  InitEV3();
  //Wait(50);
  setSensor();
  //Wait(50);
  //welcome message
  std::string greeting("Killer!");
  LcdPrintf(1, "%s\n", greeting.c_str());
  std::thread colorthread(ReadColorSensor);
  std::thread InfraRedthread(ReadInfraRedSensor);
  std::thread Gyrothread(ReadGyroSensor);
  std::thread Touchthread(ReadTouchSensor);
  std::thread DetectOpponentthread(OpponentDefence);
  std::thread DetectBallthread(DetectBall);

  //move_forward(50,100);
  //FreeEV3();

  //int turndirection = rand() %2;
  //Wait(2000);
  //turn_anticlockwise(245);
  //Wait(2000);
  //turn_clockwise(45);
  //PushToGoal();

  //move_forward(700,50);
  //move_backward(600,10);
 // move_forward(700,50);
/*
  if(turndirection == 0){
  	turn_anticlockwise(20);
  }
  else{
  	turn_clockwise(20);
  }
*/
  /*move_forward(500,100,0,1);
  FreeEV3();*/
  //move_backward(600,50);
  //Explore();
  //Wait(2000);stop();

  /*while(true){


	  if(!ButtonIsUp(BTNUP)){
	  		FreeEV3();
	  		break;
	  }

	  	  TurnToGoal();

	  }*/




  while(true){

  	  if(!ButtonIsUp(BTNUP)){
  	  		FreeEV3();
  	  		break;
  	  }
  	  Explore();
  	  /*
  	  if(extInraRedSensor >= 1 && extInraRedSensor <=9){
  		FollowBall();
  	  }*/

  	//Explore();
  	//move_backward(125,50);
  	//turn_anticlockwise(20);
  	 // PushGoal();
  	  //stop();


  }
  while(true){
	  if(!ButtonIsUp(BTNUP)){
	    	  		FreeEV3();
	    	  		break;
	  }

  }

  FreeEV3();
  return 0;
}
