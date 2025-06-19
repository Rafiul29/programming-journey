clear all;
clc;

% Define plot dimensions
xmax = 640; % Maximum x-axis value
ymax = 480; % Maximum y-axis value

% Input binary string
str = input('Enter the binary string: ', 's');

% Plot reference axes
figure;
line([50 50], [1 ymax], 'Color', 'k', 'LineWidth', 1); % Vertical reference line
line([1 xmax], [ymax/2 ymax/2], 'Color', 'k', 'LineWidth', 1); % Horizontal reference line
hold on;

% Parameters
l = length(str); % Length of the binary string
x = 50; % Initial x-coordinate
y1 = 340; % Voltage level for `0`
y2 = 140; % Voltage level for `1`
y = y1; % Start at low voltage (default initial state)

% Generate NRZ-I waveform
for n = 1:l
    if str(n) == '1'
        % Plot vertical transition for '1'
        line([x x], [y1 y2], 'Color', 'k', 'LineWidth', 1);
        
        % Toggle voltage level
        if y == y1
            y = y2; % Switch to high
        else
            y = y1; % Switch to low
        end
        
        % Plot horizontal line for the new level
        line([x x+50], [y y], 'Color', 'b', 'LineWidth', 2);
    else
        % Plot horizontal line for the same level
        line([x x+50], [y y], 'Color', 'b', 'LineWidth', 2);
    end
    
    % Update x-coordinate
    x = x + 50;
end

% Add labels and title
title('NRZ-I Line Coding');
xlabel('Time');
ylabel('Amplitude');
grid on;
hold off;
