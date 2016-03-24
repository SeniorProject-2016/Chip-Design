Currently, Pin 2[7] on the PSoC board produces the serial output. 
Connect that pin to the "TX" pin on the board to actually transmit through the serial port. 
I use a Serial-to-USB cable that Dr. Pearlstein gave me. Then on the computer, install Tera Term.
Run Tera Term, set up serial port, baud rate 115200, other settings are good. It should find the
port automatically. The PSoC will print out data values to the Tera Term screen. Use a log to record it
if desired. 


Use the MATLAB script Test.m to generate arrays of data to be sent through the I2S. The data is written 
to the data.txt file, and produces a sine, square, and triangular wave. 