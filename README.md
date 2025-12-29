# arduino-smoke-detector
Beginner Arduino smoke detector using MQ sensor, buzzer and LCD.

This project is a beginner-level Arduino-based smoke detector designed to sense smoke or gas leakage and alert users using visual and audio indicators.

The system continuously monitors the surrounding air using a gas sensor. When the smoke level crosses a predefined threshold, the Arduino triggers a buzzer and a red LED, and displays a warning message as DANGER on an LCD screen.


## 🔧 Components Used

- Arduino Uno
- MQ Smoke/Gas Sensor
- 16x2 LCD Display (I2C)
- Buzzer
- Red LED
- Resistors
- Breadboard
- Connecting Wires
- Power Supply (USB)


## ⚙️ Working Principle

1. The MQ smoke sensor detects the concentration of smoke or gas in the air.
2. The sensor outputs an analog value proportional to the smoke level.
3. Arduino continuously reads this value using its analog input pin.
4. If the value exceeds a threshold which is greater than 20:
   - The buzzer turns ON
   - The red LED glows
   - The LCD displays a warning message such as **"Smoke Detected!"**
5. If the gas level is below 20:
   - The buzzer remains OFF
   - The LED stays OFF
   - The LCD displays a safe status message


## 🧠 Key Features

- Real-time smoke detection
- Audio and visual alert system
- LCD-based status display
- Simple and beginner-friendly design
- Low-cost components


## 📌 Applications

- Home safety systems
- Kitchen smoke detection
- Laboratories
- Small offices
- Educational demonstrations
- Beginner IoT and embedded system learning


## 🚀 Future Improvements

- Add GSM/WiFi module to send alerts to mobile phones
- Integrate with a fire suppression system
- Add temperature sensing for better accuracy
- Design a PCB for compact implementation
- Convert into a complete IoT-based monitoring system


## 🛠️ Project Status

This is a **beginner project** created as part of my learning journey in Arduino and embedded systems.


## 🙋‍♀️ Author

**Anagha J**  
Electronics and Communication Engineering Student  
Exploring Embedded Systems and IoT 🌱
