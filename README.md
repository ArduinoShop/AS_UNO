The AS_UNO refers to several boards I have designed as alternatives to the commercially available UNO and Nano which are getting scarce and expensive.  I always wanted to do my own boards my own way.  "My way" can be summarized as minimialism to reduce complexity and cost as well as a bus-oriented approach to I/O.  The Arduino family has become noteworthy for the ease and speed in getting a small project up and going.  If proof of concept your only goal the UNO or Nano may well suit your needs.  But if you wish to deploy you project, even if only in a on off quantity, do you really need the serial port and all the regulators stealing battery power?

In this iteration I am offering two flavours of the AS-UNO.  They both share some similar basic design philosiphies:

- Both boards use a socketed ATmega328P 28 pin DIP like many early UNOs.  The main reason at the time of this wrining, Apr 2022, is cost and availability. Last I checked with JLCPCB parts I was pleasantly surprised to see that the ATmega328P-AU was on the "Basic Parts" list and they had 1000s in stock.  I was a dubious pleasere when I saw the price - over $50 ea.

- Another design commonality is the absence of an on-board USB Serial Port.  Development can be done just as easily, and more cost effectively by providing a connector for an external USB to Serial board such as the inexpensive CP2102 or FTDI modules.  They also provide the regulated Voltage(s) to the board.  When a roject is done it can easily be removed and used on a new project.

- Moving these function to the USB/UART module removes most of the superflous current drain.  The LEDs are the only remaing source of unecessary waste of power.  Both of my boards have option to rmove the LEDs from the circuit.

The AS-UNO-8 is the champion of low cost, low power, and minimalism - it does this at the expense of speed.  The '8' indicates 8MHz which is the maximum clock frequency that may be used on this flavour.  No crystal is provided - uses the internal oscillator.  If you need performance the AS-UNO is offered in 16MHz or 20MHz versions.

Further discussion on each flavour are presented here:  https://github.com/ArduinoShop/AS_UNO/wiki/AS_UNO AS-UNO-8   --   https://github.com/ArduinoShop/AS_UNO/wiki/AS_UNO AS-UNO-20

