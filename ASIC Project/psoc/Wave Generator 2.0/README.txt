Use the MATLAB script Test.m to generate arrays of data to be sent through the I2S. The data is written 
to the data.txt file, and produces a sine, square, and triangular wave. Copy the data into the main.c PSoC file
as the initialization for the "signal" array. Also set "TRANSFER_COUNT" in PSoC to be the "N" that MATLAB prints. 

Pin 4[0] is SCK
Pin 4[1] is SDO
Pin 4[2] is WS
Pin 4[7] is SDI
Currently, Pin 5[0] on the PSoC board produces the serial output. 

Connect Pin 5[0] to the "TX" pin on the board (next to the breadboard in the middle) to actually transmit through the serial port. 
I use a Serial-to-USB cable that Dr. Pearlstein gave me. Then on the computer, install Tera Term.
Run Tera Term (close the initial setup window), go to set up serial port, baud rate 115200, other settings are good. 
It should find the port automatically. The PSoC will print out data values to the Tera Term screen. Use a log to record it if desired. 


