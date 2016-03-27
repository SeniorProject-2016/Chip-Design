A = 2;          % Max voltage
Fs = 48000;     % Sampling frequency
F0 = 1000;      % Signal frequency
N = Fs/F0       % Fs/F0 is 1 complete cycle

x1 = Wave(A, Fs, N, F0, 'sine');
x2 = Wave(A, Fs, N, F0, 'square');
x3 = Wave(A, Fs, N, F0, 'triangle');

t = 0:1/Fs:(N/Fs-1/Fs);

% plot(t, x1, t, x2, t, x3);    % Uncomment these if you'd like to see a nice plot 
% grid;

% Write the sine wave data to the file
outFile = fopen('data.txt', 'w');
fprintf(outFile, 'Sine: \n{');
for i = 1:length(x1)
    fprintf(outFile, '0x');
    fprintf(outFile, dec2hex(round(65535*x1(i)/A)));
    if (i ~= length(x1))
        fprintf(outFile, ', ');
    else
        fprintf(outFile, '};\n\n\n');
    end
    if (mod(i, 10) == 0)
        fprintf(outFile, '\n');
    end
end

% Write the square wave data to the file
fprintf(outFile, 'Square: \n{');
for i = 1:length(x2)
    fprintf(outFile, '0x');
    fprintf(outFile, dec2hex(round(65535*x2(i)/A)));
    if (i ~= length(x2))
        fprintf(outFile, ', ');
    else
        fprintf(outFile, '};\n\n\n');
    end
    if (mod(i, 10) == 0)
        fprintf(outFile, '\n');
    end
end

% Write the triangular wave data to the file
fprintf(outFile, 'Triangular: \n{');
for i = 1:length(x3)
    fprintf(outFile, '0x');
    fprintf(outFile, dec2hex(round(65535*x3(i)/A)));
    if (i ~= length(x3))
        fprintf(outFile, ', ');
    else
        fprintf(outFile, '};\n\n\n');
    end
    if (mod(i, 10) == 0)
        fprintf(outFile, '\n');
    end
end

