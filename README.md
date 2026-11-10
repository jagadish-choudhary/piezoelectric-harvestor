# Piezoelectric Harvestor

## Overview
This project is a foundational data acquisition tool that turns the microcontroller into a digital voltmeter to measure piezoelectric sensor output. It solves the problem of visualizing invisible electrical spikes by continuously sampling raw analog pressure data and streaming it to a connected computer for real-time monitoring and analysis.

## Hardware Components (BOM)
*  Microcontroller Arduino Uno
*  Piezoelectric Sensor (Connected to analog pin A0)
*  Power Supply (USB connection for Serial data transmission)
  
## Circuit & Physical Build
![Circuit/Build Photo](assets/YOUR_BEST_PICTURE_NAME.jpg)
*Breadboard setup demonstrating the direct analog connection between the piezoelectric sensor and the microcontroller for real-time serial plotting.*

## Software & Libraries
*   **Language:** C++ (Arduino)
*   **Libraries:** No external libraries

## How It Works
1.  The system initializes a serial communication pipeline to the connected computer at a baud rate of 9600.
2.  The microcontroller continuously samples the raw analog pressure data from the piezoelectric sensor on pin A0, which returns a 10-bit integer between 0 and 1023.
3.  A mathematical conversion scales this raw ADC reading into a human-readable floating-point voltage between 0.0V and 5.0V.
4.  The calculated voltage is transmitted to the serial monitor, followed by a brief 10-millisecond delay to prevent data buffer overflow and ensure a stable telemetry stream.   
