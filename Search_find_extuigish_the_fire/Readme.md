Search, find and extuigish the fire
This project is design to explore the unknown territory and perform the desire task using autonomous robot. 
Robot will start any of the room which is not know to it before time. It have to explore all map find out the fire source( candle light) 
and extuigish it to remove fire hazard. 

We divided this project into three different module.

  1) Sensor Module
  2) Control Module
  3) Bhavior Module
  
  **Sensor Module**
Choice of sensor two Ladar sensor, one color sensor, one light sensor. We read all sensor in real time using multi threading programming for real time sensor update.

  1) One Ladar sensor is responsible to detect the front of robot. Once wall is detected front of robot, it stop it's forward movement to 
  avoid collision from wall

  2) Second Ladar was responsible to detect wall from at right side of robot. It reading will use to change the room in wall follow module
  and keep robot near the wall in wall follow.

  3) Color sensor is reasonsible to read color of ground fire are is marked with red color. With color reading robot will recognise the if
  it reached near the fire to start extuiguish mechanism.

  4) Fire sensor is resonsible to look for fire near the robot
