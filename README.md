# DHT11 Temperature & Humidity Monitoring with LED Indicator

This project reads temperature and humidity data from a **DHT11** sensor using an **ESP32**. If the temperature exceeds a set threshold, an LED is turned on as an indicator.

## Features
- Reads **temperature** (Celsius & Fahrenheit) and **humidity** from the DHT11 sensor.
- Computes **heat index** for better thermal comfort measurement.
- Turns on an **LED** if the temperature exceeds **26°C**.
- Displays sensor readings on the **Serial Monitor**.

## Components Used
- **ESP32**
- **DHT11 Temperature & Humidity Sensor**
- **LED** (connected to GPIO 33)
- **Resistor** (if required for LED)

## Circuit Connections
| Component | ESP32 Pin |
|-----------|-----------|
| DHT11 Sensor (Data) | GPIO 15 |
| LED | GPIO 33 |

## Installation & Setup
### 1. Install Required Libraries
Ensure you have the `DHT.h` library installed in the **Arduino IDE**.

### 2. Upload the Code
1. Open the Arduino IDE.
2. Copy and paste the provided code.
3. Connect the ESP32 and upload the sketch.

### 3. Open Serial Monitor
- Set baud rate to **115200**.
- Observe temperature, humidity, and LED status in real-time.

## How It Works
1. The **DHT11 sensor** measures temperature and humidity every **2 seconds**.
2. If the **temperature** exceeds **26°C**, the **LED turns ON**.
3. Otherwise, the **LED remains OFF**.
4. The values and heat index calculations are printed in the **Serial Monitor**.

## Example Output
```
Humidity: 55% Temperature: 27C 80.6F Heat Index: 28C 82.4F
LED is ON
```

## Future Enhancements
- Add **WiFi/MQTT** support for remote monitoring.
- Integrate with a **mobile app** for notifications.
- Use a **relay** to control actual appliances based on temperature.

## License
This project is open-source under the MIT License.

