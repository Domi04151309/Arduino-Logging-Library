# Arduino Logging Library

## How to Install

1. Download the repository from GitHub
2. Unzip it
3. Copy the "Arduino-Loggong-Library-master" folder into your library folder
4. Open the Arduino IDE
5. Click on Sketch > Include Library > Logging
Done!

## Reference

| Type | Name | Description |
| --- | --- | --- |
| `const` | `LOG_DEBUG` | Constant for the println function. |
| `const` | `LOG_ERROR` | Constant for the println function. |
| `const` | `LOG_INFO` | Constant for the println function. |
| `const` | `LOG_VERBOSE` | Constant for the println function. |
| `const` | `LOG_WARN` | Constant for the println function. |
| `class` | `Log` | The main class of this library. |
| `void` | `d(String tag, String msg)` | Prints a debug message to the serial monitor. |
| `void` | `e(String tag, String msg)` | Prints an error message to the serial monitor. |
| `void` | `i(String tag, String msg)` | Prints an info message to the serial monitor. |
| `void` | `v(String tag, String msg)` | Prints a verbose message to the serial monitor. |
| `void` | `w(String tag, String msg)` | Prints a warning message to the serial monitor. |
| `void` | `wtf(String tag, String msg)` | Prints a wtf message to the serial monitor. |
| `void` | `println(uint8_t priority, String tag, String msg)` | Prints a message with the chosen priority to the serial monitor. |
