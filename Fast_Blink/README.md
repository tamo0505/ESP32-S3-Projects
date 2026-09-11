# ⚡ Fast Blink

A simple ESP32-S3 project that makes an external LED blink rapidly using GPIO 4.

## 🛠️ Hardware

- ESP32-S3 development board
- LED
- 100Ω resistor
- Breadboard
- Jumper wires

## 🔌 Circuit

GPIO 4 → 100Ω resistor → LED → GND

## 📌 Pin Configuration

| Component | ESP32-S3 Pin |
|-----------|--------------|
| LED       | GPIO 4       |

## 💻 How It Works

The ESP32-S3 repeatedly turns GPIO 4 HIGH and LOW.

- LED ON → 200 ms
- LED OFF → 200 ms

## 🧠 Concepts Learned

- GPIO output
- `pinMode()`
- `digitalWrite()`
- `delay()`
- LED polarity
- Current limiting resistor
