# Peripheral-Surveillance-System

This project consists of a Peripheral Surveillance System made of:
1. Microwave sensor _(RCWL - 0516)_.
2. LIDAR _(LIDAR-Lite V3)_. 
3. PIR sensors.
4. IP camera.

The purpose of this project is to create a fully functional surveillance system that can not only check if there is an intrusion,
but also to check the velocity of the object, the distance of the object from the surveillance system and sounds alarms if there is an intrusion.
In addition there is also an WiFi Chip interfaced to an arduino to take in the intrusion data and pass on an alert to mobile devices.

The Intrusion detection is primarily done using the Microwave sensor. Once an intrusion is detected by the MW-sensor,
it measures the velocity of the moving object using **Doppler Effect**, It then passes on a command to the LIDAR via the arduino
to measure the distance at which the intrusion is at from the LIDAR. Finally the IP camera is used to take an
image of the intruder and the image can be transmitted via the WiFi Chip to any Mobile Devices or Servers using MQTT.

