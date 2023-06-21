Project title

Don’t Burn Me Detector: A Smart Solution for the Visually Impaired.

Description

The use of this system is to guide users with visual impairment to properly target the containers such as a cup or mug before the liquid is poured, without using a finger to detect where the mug is or where the liquid line is and to avoid possible burning issues. Don’t Burn Me Detector: A Smart Solution for the Visually Impaired is a sensor that can 1) indicate when the object, the bottle is approaching the cup glass so that the user can know when it is safe to pour, 2)indicate when the liquid has reached the level that has to be stopped or it will spill or overflow.

Software

The inputs are a distance detector and a liquid-level detector. I started with defining pins for trig
and echo at pins 2 and 3 for the distance detector and initialized pin 7 for the liquid level detector. I then initialized the pins for the outputs, a buzzer pin 13, and a vibrator, pin 9. Then, I set up inputs and outputs with pinMode in the loop void setup().In the loop of void loop(), I used digitalRead to read the value of pin 7, the liquid level sensor, if the value is low, meaning the liquid is not detected, the buzzer will not buzz. If the value is not low, the buzzer will buzz for the frequency of 0.5 Hz. And then, I wanted to know the distance between the object and the sensor, so I triggered the sensor by setting the trigPin high for 10 microseconds and used pulseIn() to read the echoPin on HIGH and know the duration in between them. I calculated the distance in centimeters with duration*0.0343/2. Lately, if the distance is less than 20 centimeters, meaning it is safe to pour the liquid, the vibrator will vibrate, or else it won’t vibrate.

Successes
The vibrator disk came with two thin wires and could not be stuck into the breadboard. After the soldering and extensions of the wires into larger wires and sheathed into a singular head (to avoid damage), it can now stand on the breadboard and function well.

Challenges
The main challenge of this design is the ultrasonic distance detector—the one provided in class, whose shape is hard to attach to the bottle. The four pins of it need to be inserted on a breadboard or soldered to be lengthened to insert. The shape, two circular structures on a rectangular board, and the size of it are hard to make it tied to my bottle with water in it, so I purchased another liquid detector for easier design. However, this distance detector cannot detect the range below 20 centimeters. The working distance of pouring water is not a big range. 19 is quite suitable for pouring it. While I can limit the system to not vibrate beyond 20, the distance within 20 is hard to detect. Sometimes I can imagine the need to pour within 20 centimeters. The future direction of this design is to find a distance detector that is workable with a distance range shorter than 20 centimeters.
