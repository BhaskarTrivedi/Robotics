Search, find and extuigish the fire
This project is design to explore the unknown territory and perform the desire task using autonomous robot. 
Robot will start any of the room which is not know to it before time. It have to explore all map find out the fire source( candle light) 
and extuigish it to remove fire hazard. 

We divided this project into three different module.

  1) Sensor Module
  2) Control Module
  3) Bhavior Module
  
  **Sensor Module**<br/>
Choice of sensor two Sonar sensor, one color sensor, one light sensor. We read all sensor in real time using multi threading programming for real time sensor update.

  Sensor Choice: 
  1.	Color sensor: Color sensor is to detect the color of title. Once color sensor detects goal (Red color tile), it interrupts and stop 
  the current task and initialize the extinguish the fire behavior.
  2.	Light sensor: Light sensor is used Light sensor search for light intensity. After observing the threshold light reading light sensor 
  trigger the follow the light source to reach near the fire (Above the red title).
  3.	Front Sonar: Front sonar the mounted to look the obstacle at from of robot. After detecting the obstacle at the front, it interrupts 
  the robot move forward functionality, stop it from further forward movement until obstacle get clear or robot change its direction toward 
  obstacle free direction.
  4.	Right side Sonar: Right side sonar is used to maintain safe distance from right side of wall, keep robot near the wall in wall 
  Following behavior with safe distance from wall. It also looks for right side door opening and turn the robot toward it right and certain 
  number of left turns to avoid closed loop behavior and getting stuck in one room forever.
  
  **Behavior Module**<br/>
  
  1.	Wall following: Wall following behavior is implemented to move robot from one room to another. Robot by default take left turn (anti 
  clock 90-degree rotation) after reaching the end of wall if it make sufficient left turn then there can be possibility, robot is got 
  stuck in one room, to break the loop after certain number of left turn we are switching to right turn(clock 90-degree rotation).
  2.	Wonder: In wonder behavior robot randomly turn left or right direction, move forward in one tile length and look for fire near its 
  proximity.
  3.	Fire Detection: Robot looks in 360 direction from its current location for find the fire. Once it defects the fire it interrupts 
  the current task and call for respective task (in this case reach toward fire and initiate extinguish the fire).
  4.	Extinguish the Fire: After reaching the goal robot call the extinguish the fire routine and perform the fire extinguish.
  
  **Control Module**<br/>
  
   1) move_forward: Responsible to handle low level control of robot to keep it moving in forward direction of the given length and 
   speed
   2) move_backward: Responsible to handle low level control of robot to keep it moving in backward direction of the given length and 
   speed
   3) turn_clockwise: Handle the control level command to make robot turn in clockwise direction with specified angle
   4) turn_anticlockwise: Handle the control level command to make robot turn in anticlockwise direction with specified angle
   5) RotateFan : HAndle control level command to start fan to extuiguish the fire
   6)MoveAwayFromRightWall : Handle control level command to maintain safe distance from right side wall
   
<br/>Click on below image to watch video
[![Watch Video here](https://github.com/BhaskarTrivedi/Robotics/blob/master/Search_find_extuigish_the_fire/Image/IMG_20191125_133910.jpg)](https://youtu.be/9mtCbAwiF3U)


![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/Search_find_extuigish_the_fire/Image/IMG_20191125_133919.jpg)

![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/Search_find_extuigish_the_fire/Image/IMG_20191125_133930.jpg)

![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/Search_find_extuigish_the_fire/Image/IMG_20191125_133945.jpg)


