# arduino-lcd-shield

## Overview
The **arduino-lcd-shield** is a custom-designed Arduino Uno shield featuring a 16×2 character LCD and a potentiometer for contrast adjustment. The project demonstrates fundamental circuit design, custom PCB layout, and simple Arduino programming.

---

## Project Media
<p align="center">
  <img src="media/pcb_assembled_working.png" height="300" />
  <img src="media/pcb_front_unassembled.png" height="300" />
</p>

---

## Project Description
This shield plugs directly into an Arduino Uno and displays text on a 16×2 LCD. A potentiometer connected to the LCD’s **V0 (contrast)** pin allows manual contrast adjustment. The project was designed as a straightforward and educational build, emphasizing correct datasheet usage, proper PCB layout, and clean soldering practices.

---

## Features
- 16×2 character LCD display
- Adjustable LCD contrast via potentiometer
- Arduino Uno shield form factor
- Plug-and-play compatibility with Arduino Uno

---

## Hardware Components
- Arduino Uno
- 16×2 LCD 
- Potentiometer 
- Custom Arduino Uno shield PCB
- Header pins (shield and LCD mounting)

---

## PCB Design
- Custom PCB designed using **Autodesk Eagle**
- Arduino Uno **shield-style layout**
- Uses Eagle’s official Arduino Uno footprint for precise alignment
- **Double-layer PCB** with traces on both top and bottom layers
- Fully **through-hole components**
- LCD mounted using header pins
- Designed for clean routing and easy assembly

---

## Power & Interface
- Powered directly from the Arduino Uno
- LCD uses a **parallel interface**
- Potentiometer connected to LCD **V0** pin for contrast adjustment
- No external power supply required

---

## Software & Tools
- Arduino IDE
- `LiquidCrystal` library
- Autodesk Eagle (PCB design)
- Breadboard prototyping for early testing

---

## Development & Testing
- The circuit was first built and tested on a **breadboard** using the Arduino Uno, LCD, and potentiometer.
- The LCD datasheet was used to identify pin functions and wiring requirements.
- After validation, the schematic was transferred to Eagle for PCB design.
- The final PCB was assembled, soldered, and tested with no functional issues.

---

## Skills Demonstrated
- Arduino programming
- Custom PCB design (Arduino shield)
- Through-hole soldering
- Breadboard prototyping and testing
