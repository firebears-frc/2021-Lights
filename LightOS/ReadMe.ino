/*

Author: Theodre A. Albano
Credits: Fastled Library
Version 1.1.1

This Program is structured to allow 2 strips to be driven on pins 3 and 5 with three colors in a psuedo-random pattern. 
Pixels are not changed every loop, there is a 6 in 15 chance that a pixel will change.
when it chages, there is a 1 in 15 change to it will change to Maroon, 1 in 15 it will change to DarkOrange, and 4 in 15 it will change to OrangeRed

Release nubers are deseganated as folows:

First Digit Signifes major changes (led chipset, driver library, major overhall, and number of strips)

Second Digit Signifies animation version (color and timing and probability)

Third Digit Signifes Minor changes (data pins, nunber of leds, and brightness)

Version History:

Digit One:
1 - Uses fastLed Library and NeoPixel Library. 2 strips

Digit Two:
1 - Uses Maroon 1:15 10ms, DarkOrange 1:15 10ms, OrangeRed 4:15 10 ms

Digit Three
1 - Data pins 3 and 4, 20 leds at 50% brightess
