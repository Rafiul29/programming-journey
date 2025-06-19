% Clear workspace, close all figures, and reset command window
clc;
clear;
close all;

% Parameters
xmax = 640;
ymax = 480;

% Input binary string
str = input('Enter a binary string: ', 's');

% Plot the axes
figure;
line([50 50], [1 ymax], 'Color', 'k'); % Vertical axis
line([1 xmax], [ymax/2 ymax/2], 'Color', 'k'); % Horizontal axis
hold on;

% Initialize variables
l = length(str);
x = 50;         % Starting x-coordinate
y1 = 340;       % High amplitude level
y2 = 140;       % Low amplitude level
y = y1;         % Current signal level

% Loop through the binary string
for n = 1:l
    if str(n) == '0'
        % Invert signal level on binary '0'
       y = (y == y1) * y2 + (y == y2) * y1; 
        % Vertical transition
        line([x x], [y1 y2], 'Color', 'b');
    end

    % Draw horizontal line for the current signal level
    line([x x+25], [y y], 'Color', 'b');
    
    % Vertical transition for mid-bit signal change
    line([x+25 x+25], [y1 y2], 'Color', 'b');
    
    % Invert signal level for mid-bit change
    y = (y == y1) * y2 + (y == y2) * y1;
    
    % Draw horizontal line for the new signal level
    line([x+25 x+50], [y y], 'Color', 'b');
    
    % Update x-coordinate for the next bit
    x = x + 50;
    
    % Handle consecutive '0' transitions
    if n < l && str(n) == '0' && str(n+1) == '0'
        line([x x], [y1 y2], 'Color', 'g');
    end
end

% Add plot labels and grid
title('Differential Manchester Encoding');
xlabel('Time');
ylabel('Amplitude');
grid on;
hold off;
