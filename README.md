# 3DOF Robotic Arm Control using Arduino Nano and Serial Commands

This project demonstrates how to control a 3 Degrees of Freedom (3DOF) robotic arm using an Arduino Nano. The system communicates through the serial monitor, allowing users to control three servo motors in real-time using simple string commands.

## 🔧 Components

- Arduino Nano
- 3DOF Robotic Arm (with 3 servo motors)
- Servo motor driver board (if needed)
- USB cable to connect Arduino Nano to PC
- External power supply for servos

## ⚙️ Project Description

- The Arduino is programmed to receive angle commands through the Serial Monitor.
- Each command consists of a servo identifier (`s1`, `s2`, or `s3`) followed by a 3-digit angle value (e.g., `090`, `180`, etc.).
- The Arduino parses the command and moves the specified servo motor to the desired angle.

### Example Commands

- `s1090` → Moves servo 1 to 90 degrees
- `s2150` → Moves servo 2 to 150 degrees
- `s3060` → Moves servo 3 to 60 degrees

These commands should be entered into the **Serial Monitor** after uploading the code.

## 🧠 How to Use

1. Connect your 3DOF robotic arm to the Arduino Nano (servos connected to pins D3, D4, D5).
2. Upload the `.ino` file to your Arduino Nano using the Arduino IDE.
3. Open the Serial Monitor (baud rate: 9600).
4. Type a command like `s1090` and press Enter.
5. The specified servo will rotate to the given angle.

If the input format is incorrect, the Serial Monitor will print `"error"`.

## 💡 Notes

- Always use 3-digit angles in the command (e.g., `s1075`, not `s175`).
- Valid angles are from `000` to `180`.
- Ensure your robotic arm is securely mounted and powered before testing.
- Use an external power supply if the servos are drawing more current than USB can handle.


## 📄 License

This project is licensed under the MIT License.
