# Physical Controller

## 1. Download Arduino IDE

Arduino is the microcontroller platform you will use to create your joystick. You can download the Arduino IDE here: https://www.arduino.cc/en/Main/Software which is where you will write your software, compile, and flash it into the Arduino. If you've never used an Arduino before, this page has all the info you need to get started: https://www.arduino.cc/en/Tutorial/HomePage

## 2. Program Arduino

We are using a clone of the Arduino Pro Micro (https://www.sparkfun.com/products/12640). Plug your Arduino into your computer and you should see a small red LED for power. If you don't, it could be because your Arduino is not properly connected to your computer (it does not work with a usb-c only cable) or your computer might be having some driver issues recognizing the board.

Now let's make sure you can program your board.

First you need tell the Arduino IDE what port your board is connected to and make sure you've selected the right board.

Go to **Tools > Boards** and select **Arduino Micro**. **Arduino Leonardo** uses the same microcontroller and will also work.

Then select the port the Arduino is connected to.

Go to **Tools > Port** and then **/dev/cu.usbmodemHIDPC1 (Arduino Micro)**. <-- this is what it is called on my computer. Yours might be different.

Then run a simple example to make sure your Arduino programs correctly.

Go to **File > New Sketch**. This will open a blank sketch.

Click the Upload arrow. And you should get a **Done Uploading** message.

## 2.5 Reset

Because the keyboard functionality uses the serial port, which is also how we program the Arduino, you might get into a situation where the serial port is outputting numbers and doesn't let you reprogram the Arduino.

If this happens, connect a wire from the **RST (reset)** pin to ground. Then start upload and disconnect the reset wire. You might need to do this a few times to get the timing right.

**The Short Story: when using a Leonardo, only have it output serial commands once the user does something like press a button. If you have it output all the time by default, you will get into this situation.**

## 3. Add a Button

Follow this example to add a button and control a connected LED. Make sure that you change pin numbers to reflect the pins you are connecting things to:

https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button


## 4. Run A_Controller

Now adapt your electronics to run the A_Controller code provided. You will need 2 buttons. See if you can get it to control your game similar to how your keyboard does.

## 6. Now design your own controller

Once you can control the example game using your Arduino controller, it's time to think about what the most appropriate joystick should be. Here are a few questions to help you think through the problem:

- What sensors should you use? How does the choice of sensor inform its behavior?
- Where should they be located? Are they close together or far apart? At the top, bottom or sides?
- Do you need one hand or both to control the game?
- How about multiple players?