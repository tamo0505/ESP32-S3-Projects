# How To: Fast Blink with ESP32-S3

## 1. What you need
- ESP32-S3 development board
- Breadboard
- 1 LED
- 100 Ω resistor
- Jumper wires
- USB-C cable

## 2. Power the ESP32-S3
Connect the USB-C cable to the **UART** USB-C port on the ESP32-S3. The USB connection powers the board and is used to upload the Arduino program.

## 3. Pin connections

| ESP32-S3 | Connect to |
|---|---|
| GPIO 4 | 100 Ω resistor → LED long leg (+) |
| GND | LED short leg (-) |

## 4. Wire the LED

```text
GPIO 4 → 100 Ω resistor → LED long leg (+)
                              LED short leg (-) → GND
```

**LED polarity:** Long leg = anode (+); short leg = cathode (-).

Place the two LED legs in different breadboard rows.

## 5. Arduino IDE
1. Open Arduino IDE.
2. Select **Board → ESP32S3 Dev Module**.
3. Select the COM port for your ESP32-S3.
4. Use the normal **Upload (→)** button, not Debug.
5. If uploading does not connect: hold **BOOT**, press and release **RST**, keep BOOT held for about 2 seconds, then release BOOT and upload again.

## 6. Upload this code

```cpp
// Project: Fast Blink
// Board: ESP32-S3
// LED Pin: GPIO 4

const int LED_PIN = 4;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(200);

  digitalWrite(LED_PIN, LOW);
  delay(200);
}
```

## 7. Expected result
The LED turns **ON for 200 ms**, then **OFF for 200 ms**, repeating continuously.

## 8. Troubleshooting
- Make sure the LED long leg is toward GPIO 4 through the resistor.
- Make sure the LED short leg goes to GND.
- Make sure the resistor is in series with the LED.
- Make sure the ESP32 is powered through USB.
- Check that GPIO 4 is selected in the code.
- If uploading fails, check the USB cable, COM port, and BOOT/RST procedure.

## 9. What this project teaches
- GPIO output
- `pinMode()`
- `digitalWrite()`
- `delay()`
- LED polarity
- Current limiting resistor

- <img width="1536" height="1024" alt="image" src="https://github.com/user-attachments/assets/dcd5c727-0fa4-4301-ad21-fa9ab93ff1b5" />

