% Manchester (IEEE)

% Clear workspace and variables
clear;
clc;

% Parameters
xmax = 640;
ymax = 480;

% Input from user
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

% Loop through the binary string
for n = 1:l
    if str(n) == '0'
        % Draw for binary 0
        line([x x+25], [y1 y1], 'Color', 'b');   % High level
        line([x+25 x+25], [y1 y2], 'Color', 'b'); % Transition
        line([x+25 x+50], [y2 y2], 'Color', 'b'); % Low level
    else
        % Draw for binary 1
        line([x x+25], [y2 y2], 'Color', 'r');   % Low level
        line([x+25 x+25], [y1 y2], 'Color', 'r'); % Transition
        line([x+25 x+50], [y1 y1], 'Color', 'r'); % High level
    end
    
    % Update x-coordinate for the next bit
    x = x + 50;
    
    % Draw vertical line if the next bit is the same as the current bit
    if n < l && str(n) == str(n+1)
        line([x x], [y1 y2], 'Color', 'g'); % Vertical transition
    end
end

% Set title and labels
title('Manchester Encoding');
xlabel('Time');
ylabel('Amplitude');
grid on;
hold off;
