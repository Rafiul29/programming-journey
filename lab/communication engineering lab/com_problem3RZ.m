clear all;
clc;

% Define plot dimensions
xmax = 800; % Increase x-axis range for better spacing
ymax = 600; % Increase y-axis range for clarity

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
y1 = 400; % Voltage level for `1`
y2 = 200; % Voltage level for `0`

% Generate RZ waveform
for n = 1:l
    if str(n) == '0'
        % Plot the waveform for `0`
        line([x x], [y2+100 y2], 'Color', 'b', 'LineWidth', 2);           % Vertical drop
        line([x x+25], [y2 y2], 'Color', 'b', 'LineWidth', 2);            % Horizontal line at low level
        line([x+25 x+25], [y2 y2+100], 'Color', 'b', 'LineWidth', 2);     % Vertical rise
        line([x+25 x+50], [y2+100 y2+100], 'Color', 'b', 'LineWidth', 2); % Horizontal line at high level
    else
        % Plot the waveform for `1`
        line([x x], [y1 y1-100], 'Color', 'r', 'LineWidth', 2);           % Vertical drop
        line([x x+25], [y1 y1], 'Color', 'r', 'LineWidth', 2);            % Horizontal line at high level
        line([x+25 x+25], [y1 y1-100], 'Color', 'r', 'LineWidth', 2);     % Vertical drop
        line([x+25 x+50], [y1-100 y1-100], 'Color', 'r', 'LineWidth', 2); % Horizontal line at low level
    end
    % Update x-coordinate for the next bit
    x = x + 50;
end

% Add labels and title
title('RZ (Return to Zero) Line Coding');
xlabel('Time');
ylabel('Amplitude');
xlim([0 xmax]);
ylim([0 ymax]);
grid on;
hold off;
