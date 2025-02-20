
# 🌱 Soil Sensing

## 📌 Overview
This project focuses on soil sensing using temperature and moisture sensors, integrating Raspberry Pi and Arduino to monitor and analyze soil conditions. The collected data can help in agriculture, research, and automation systems.

## 📂 Repository Structure
Here's an overview of the files in this repository (https://github.com/ashwinashok/soilsensing):

| File Name                                  | Description |
|--------------------------------------------|------------|
| `Airthings_Wave_Plus_and_Raspberry_Pi5.ipynb` | Jupyter Notebook for interfacing with Airthings Wave Plus using Raspberry Pi 5. |
| `Moisture_Temperature_Combined.ino` | Arduino sketch combining soil moisture and temperature sensor readings. |
| `Soil_Moisture_Temperature_RPi.ipynb` | Jupyter Notebook for analyzing soil moisture and temperature data with Raspberry Pi. |
| `Soil_Temperature.ino` | Arduino sketch to read temperature sensor data from the soil. |
| `Soil_moisture.ino` | Arduino sketch to measure soil moisture levels. |
| `Soil_moisture_sensor_calibration.ino` | Code to calibrate the soil moisture sensor for accurate readings. |
| `Temperature_Sensor_detection.ino` | Code for detecting and processing temperature sensor data. |

## 🔧 Requirements
To run this project, you may need the following hardware and software:

### 📌 Hardware:
- Raspberry Pi 3 and higher (we have tested this on 3B+, 4 and 5 versions)
- Arduino board (tested on Arduino Uno. Should work on Mega as well. Not tested but should work on Micro and Teensy as well)
- Soil moisture sensor (https://www.amazon.com/dp/B076DDWDJK?ref=nb_sb_ss_w_as-reorder_k0_1_12&amp=&crid=9ADM09XBGN46&amp=&sprefix=soil+mositer)
- Temperature sensor (e.g., DHT11, DS18B20)
- Jumper cables
- Resistors or Potentiometer

### 📌 Software:
- Arduino IDE
- Python 3.x
- Jupyter Notebook
- Required libraries for interfacing with sensors


