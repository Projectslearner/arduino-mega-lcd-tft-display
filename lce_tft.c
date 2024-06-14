/*
    Project name : LCD TFT Display
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-lcd-tft-display
*/

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h> // Hardware-specific library

// Assign pins used for the TFT LCD display (adjust according to your wiring)
#define LCD_CS A3
#define LCD_RS A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

// Initialize the library with the pins
Adafruit_TFTLCD tft(LCD_CS, LCD_RS, LCD_WR, LCD_RD, LCD_RESET);

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging

  tft.begin(); // Initialize the TFT LCD display

  // Fill the screen with a solid color (optional)
  tft.fillScreen(ILI9341_BLUE);

  // Print a message to the screen
  tft.setCursor(50, 50); // Set cursor position (x, y)
  tft.setTextColor(ILI9341_WHITE); // Set text color
  tft.setTextSize(2); // Set text size
  tft.println("Hello, Arduino!"); // Print message
}

void loop() {
  // Your main code here
}
