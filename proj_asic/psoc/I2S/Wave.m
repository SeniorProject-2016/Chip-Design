function [y] = Wave(A, Fs, N, F0, type)
    % A is the amplitude desired
    % Fs is the sampling frequency desired
    % N is the number of samples desired
    % F0 is the frequency of the signal desired
    % type can be sine, square, or triangular
    
    t = 0:1/Fs:(N/Fs-1/Fs);
    if (strcmp(type, 'sine') == 1)
        y = A*sin(2*pi*F0*t);
    elseif (strcmp(type, 'square') == 1)
        y = A*sin(2*pi*F0*t);
        for i = 1:length(t)
            if (y(i) > 0)
                y(i) = A;
            else
                y(i) = -A;
            end
        end
    elseif (strcmp(type, 'triangle') == 1)
        % Construct one cycle, up and down.
        risingSignal = linspace(0, A, N/2+1);
        fallingSignal = linspace(A, 0, N/2+1);
        % Combine rising and falling sections into one single triangle.
        y = A*([risingSignal, fallingSignal(2:end-1)] - A/2);
        
        
        %  y1 = (min(0.5, mod(t, 1/F0)*F0));
%         y2 = (min(0.5, 1-mod(t, 1/F0)*F0));
%         y = (y1+y2);
    else
        'Invalid type'
    end
end