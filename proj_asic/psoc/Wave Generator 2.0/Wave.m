function [y] = Wave(A, Fs, N, F0, type)
    % A is the amplitude desired
    % Fs is the sampling frequency desired
    % N is the number of samples desired
    % F0 is the frequency of the signal desired
    % type can be sine, square, or triangular
    
    t = 0:1/Fs:(N/Fs-1/Fs);
    if (strcmp(type, 'sine') == 1)
        y = A/2*sin(2*pi*F0*t)+A/2;
    elseif (strcmp(type, 'square') == 1)
        y = A/2*sin(2*pi*F0*t)+A/2;
        for i = 1:length(t)
            if (y(i) > A/2)
                y(i) = A;
            else
                y(i) = 0;
            end
        end
    elseif (strcmp(type, 'triangle') == 1)
        y1 = (min(0.5, mod(t, 1/F0)*F0));
        y2 = (min(0.5, 1-mod(t, 1/F0)*F0));
        y = A*2*(y1+y2-0.5);
    else
        'Invalid type'
    end
    
end