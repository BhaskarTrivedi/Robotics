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

We divided this project into three different module.
 1) Sensor Module
 2) Control Module
 3) Bhavior Module
 
**Sensor Module**<br/>
Choice of sensor two IR sensor, one color sensor, one gyro sensor. We read all sensor in real time using multi threading programming for real time sensor update.

 1) One IR sensor is responsible to detect the ball. Once ball is detected by IR sensor one robot switched to fallow the ball behavior

 2) Second IR was also responsible to detect the ball but we design the second IR sensor such that it detect the ball with reading 4,5 or 6
only when ball is in front of robot. Once IR ball is detected by second sensor robot immediatly switched to push the ball behavior to push 
the ball in opponent area.

 3) Color sensor is reasonsible to read color of field and once it detect opponent area retreat behavior get fired whose job to come
 back from opponent area. 
 4) Gyro sensor: Robot always start facing opponent area so gyro sensor is used to keep track of opponent goal direction.

**Behavior Module**<br/>
We divided behavior in different task which robot need to perform to win the match.
 1) Explore: Robot always start with explore mode Its main job to scan the area as fast as possible to detect the IR ball
 2) Follow the ball: Once IR ball is detected we switched our robot into follow the ball mode. Depending upon the IR sensor reading
 robot move forward toward ball or move forward with clockwise or anti clockwise curve toward the ball.
 3) Push the ball: Once robot reach near the ball robot behavior change to push the ball. With help of gyro reading robot move clockwise or anticlockwise toward opponent defense. Once robot turn towards opponent it pushes the ball towards opponent defence to score the goal.
 
 **Control Module**<br/>
   Control Module was responsible for low level handing of robot and deal with motor rotation to achive required functinality.
   1) Move forward: Responsible to move robot in forward direction with specified distance with given speed.
   2) Move backward: Responsible to move robot in backward direction with specified distance with given speed.
   3) Turn Clockwise: Responsible to turn robot in clockwise direction with specified angle
   4) Turn Anticlockwise: Responsible to turn robot in anticlockwise direction with specified angle
   5) MoveTowardsBall : Responsible to handle control of robot to achieve Follow the ball behavior
   6) PushToGoal : Responsible to handle control of robot to score goal in opponent area.
   7) ExecuteRetreat : Responsible to handle control of robot to for explore behavior.



