# ESP8266 Metal Touch Sensor Module Project

#### Project Overview
This project demonstrates how to use an ESP8266 microcontroller with a capacitive touch sensor module to detect the presence of metal objects. The sensor module outputs a digital signal that changes when a conductive object (metal) comes into contact with the touch sensor. This functionality can be employed in various applications requiring metal detection capabilities.

#### Components Needed
- **ESP8266 Microcontroller**
- **Capacitive Touch Sensor Module**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the Capacitive Touch Sensor Module to ESP8266:**
   - Connect the digital output pin of the touch sensor module to GPIO pin D2 on the ESP8266.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266 and the touch sensor module.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display whether a metal object is detected ("Metal Object Detected") or not ("No Metal Object Detected").
   - Bring a metal object close to the capacitive touch sensor module to observe changes in detection status.

#### Applications
- **Security Systems:** Detect metallic objects as part of security systems.
- **Interactive Installations:** Use in interactive exhibits or installations that respond to touch.
- **Smart Appliances:** Integrate into appliances to detect metal objects.

#### Notes
- **Sensor Sensitivity:** Adjust the sensitivity of the touch sensor module based on the size and material of the metal objects.
- **Digital Output:** The touch sensor module provides a digital signal (`LOW` or `HIGH`) based on whether a metal object is detected.
- **Usage Considerations:** Ensure the touch sensor is calibrated and positioned appropriately for reliable detection.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Metal Touch Sensor Module](https://projectslearner.com/learn/esp8266-metal-touch-sensor-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner