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

