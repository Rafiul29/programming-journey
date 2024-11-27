clear all;
clc;

% Define plot dimensions
xmax = 640;
ymax = 480;

% Input binary string
str = input('Enter the binary string: ', 's');

% Plot the reference axes
figure;
line([50 50], [1 ymax], 'Color', 'k', 'LineWidth', 1); % Vertical reference line
line([1 xmax], [ymax/2 ymax/2], 'Color', 'k', 'LineWidth', 1); % Horizontal reference line
hold on;

% Parameters
l = length(str); % Length of binary string
x = 50; % Initial x-coordinate
y1 = 340; % Voltage for binary '0'
y2 = 140; % Voltage for binary '1'

% Generate the NRZ-L waveform
for n = 1:l
    if str(n) == '1'
        % Draw high line for '1'
        line([x x+50], [y2 y2], 'Color', 'b', 'LineWidth', 2);
    else
        % Draw low line for '0'
        line([x x+50], [y1 y1], 'Color', 'r', 'LineWidth', 2);
    end
    
    % Update x-coordinate
    x = x + 50;
    
    % Draw vertical transition if the next bit is different
    if n < l && str(n) ~= str(n+1)
        line([x x], [y1 y2], 'Color', 'k', 'LineWidth', 1);
    end
end

% Add labels and title
title('NRZ - L Line Coding');
xlabel('Time');
ylabel('Amplitude');
xlim([0 xmax]);
ylim([0 ymax]);
grid on;
hold off;
