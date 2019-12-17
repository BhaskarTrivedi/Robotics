In this project two team compete each other in simplefied version of football match.
Field is divided into three areas. Each team has their own defence area where other team can't come and middle area is as free space.
Football match is played by using IR ball and each team is provided IR sensor to detect the ball. Teams are free to use their choice
of sensor. 
Each team compete each other in free space that is middle area of field and try to push IR ball to opponent area such that ball should hit 
opponet wall. 
![Image of field divided into three areas](https://github.com/BhaskarTrivedi/Robotics/blob/master/SimplifiedFootball/Image/IMG_20191212_171113.jpg)

![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/SimplifiedFootball/Image/IMG_20191212_170534.jpg)

![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/SimplifiedFootball/Image/IMG_20191212_170600.jpg)

![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/SimplifiedFootball/Image/IMG_20191212_170606.jpg)

![Robot design](https://github.com/BhaskarTrivedi/Robotics/blob/master/SimplifiedFootball/Image/IMG_20191212_170613.jpg)

We divided this project into three different.
 1) Sensor Module
 2) Control Module
 3) Bhavior Module
 
Sensor Module
Choice of sensor two IR sensor, one color sensor, one gyro sensor. We read all sensor in real time using multi threading programming for real time sensor update.

One IR sensor is responsible to detect the ball. Once ball is detected by IR sensor one robot switched to fallow the ball behavior

Second IR was also responsible to detect the ball but we design the second IR sensor such that it detect the ball with reading 4,5 or 6
only when ball is in front of robot. Once IR ball is detected by second sensor robot immediatly switched to push the ball behavior to push 
the ball in opponent area.

Color sensor is reasonsible to read color of field and once it detect opponent area retreat behavior get fired whose job to come back from opponent area. 

Robot always start facing opponent area so gyro sensor is used to keep track of opponent goal direction.

Behavior Module

