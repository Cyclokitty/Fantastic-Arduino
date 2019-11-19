# Projects from the Arduino Projects Book

## Introduction

I picked up the Android Starter ki a couple of years ago but other than fooling with some LEDs, I didn't spend much time with the projects listed in the book. Decided to complete all of the projects to avoid: breaking my Uno board, destroying all of the components, hurting myself, and because I want to do some big, extravagent useless creation with the Arduino Uno. 

## The Projects:

1. Simple Circuits: using a switch, an LED, and a 220Ω resistor I created a simple circuit, a serial circuit, and a parallel circuit. Learned a bit about Ohm's Law.  

1. Spaceship Interface: using digitalWrite() to control LEDs state, pwm (pulse width modulation), and change brightness using pwm pins on the UNO, and how to read the colour bands on resistors (think rainbow colour order with some extras).

1. Love-O-Meter: of course, I lost the tmp36 temperature sensor included in the kit. But, I did have a DHT22 humidity and temperature sensor! Some googling later, I learned how to use the DHT22 with libraries in the sketch. It's not touch sensitive and does not measure skin temperature well. I used it tell the temperature in the room.  

1. Color Mixing Lamp: using photoresitors and pwm digital pins to fade and brighten the rgb LED (and to change colours), analogRead() to read the values from the photoresistors. Note: the tiny, thin slices of coloured gels are incredibly flimsy and fiddly.  I also made a cheap and cheerful lampshade for the rgb LED out of a scrap of paper to diffuse the light to see the actual colours. And then I made a quick rgb sketch that uses random() to change colours.  

1. Mood Cue: This was fun! Learned what a capacitor is and does (stores electrical energy to prevent voltage dips) and then smoothes out any voltage changes. Used a potentiometer to make a servo motor turn 180º. Notes: the pins on the potentiometer do not fit well in the breadboard. I added female to male jumper wires from the pot pins to the breadboard. 

1. Light Theremin: Make funny sounds with a simple piezo speaker and a photoresistor. The photoresistor shares a sensor value with tone() and that produces a briefly played tone. Learned map(), tone() and millis() functions.

1. Keyboard Instrument: Making less funny sounds and tying together resistors (resistor ladder) and corresponding the voltage level to a frequency to play on the piezo. 