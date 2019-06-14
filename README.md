# Peripheral-Surveillance-System

This project consists of a Peripheral Surveillance System made of:
1. Microwave sensor _(RCWL - 0516/HB100)_.
2. Ultrasonic Sensor _(HC-SR04)_.
2. LIDAR _(LIDAR-Lite V3)_. 
4. IP camera.(Optional)

The purpose of this project is to create a fully functional surveillance system that can not only check if there is an intrusion,
but also to check the velocity of the object, the distance of the object from the surveillance system and sounds alarms if there is an intrusion.

The Intrusion detection is primarily done using the Microwave sensor or the Ultrasonic Sensor. 
1. __If Microwave Sensor is used__:
Once an intrusion is detected by the MW-sensor, it measures the velocity of the moving object using **Doppler Effect**, It then passes on a command to the LIDAR via the arduino to measure the distance at which the intrusion is at from the LIDAR. Finally an IP camera can be used to take an image of the intruder and the image can be transmitted via a WiFi Chip to any Mobile Devices or Servers using MQTT.

2. __If Ultrasonic Sensor is used__:
Once an intrusion is detected by the Ultrasonic sensor it returns the Velocity and Distance of the object.The distance values are averaged with the LIDAR distance values to minimize errors. The rest of the system works as in Case I.

