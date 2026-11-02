# Multi-LED Controller with Bluetooth

An Arduino project in which 3 LEDs can be controlled wirelessly using an Android phone and an HC-05 Bluetooth module.

## Features

- Wireless ON/OFF control of three LEDs.
- Separate brightness control for each of the three LEDs.
- Brightness control is achieved using PWM.
- The brightness value of each LED is stored even after turning it OFF.
- All three LEDs can be controlled at once.

## Components Used

- Arduino UNO R4 Minima
- HC-05 Bluetooth Module
- 3 LEDs
- 3 current-limiting resistors
- Breadboard
- Jumper wires

## Pin Connections

| Component | Arduino Pin |
|---|---|
| Red LED | 10 |
| Blue LED | 5 |
| Green LED | 3 |
| HC-05 TXD | D0 (RX) |
| HC-05 RXD | D1 (TX) through voltage divider |

Common ground is used between the HC-05 and Arduino.

## Commands

| Command | Function |
|---|---|
| `1` | Turn ON Red LED and select it |
| `2` | Turn ON Blue LED and select it |
| `3` | Turn ON Green LED and select it |
| `4` | Turn ON all three LEDs |
| `0` | Turn OFF all three LEDs |
| `+` | Increase brightness of the selected LED |
| `-` | Decrease brightness of the selected LED |

## Working Principle

The HC-05 receives commands from an Android phone over Bluetooth and transfers them to the Arduino through UART serial communication.

The Arduino processes these commands and controls the LEDs using PWM to adjust their brightness. Each LED has a separate brightness variable, allowing its brightness setting to be retained even when switched OFF.

## Concepts Used

- Bluetooth Communication
- UART Serial Communication
- PWM
- GPIO Control
- Command Handling
- State Management
