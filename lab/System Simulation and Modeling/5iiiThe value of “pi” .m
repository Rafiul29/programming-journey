clc;
close all;
clear all;

% Initialize counter
count = 0;

% Number of random points
N = 10000;

% Preallocate arrays for x and y
x = zeros(1, N);
y = zeros(1, N);

% Generate random points and count how many are inside the circle
for i = 1:N
    x(i) = 2 * rand - 1; % Random x-coordinate between -1 and 1
    y(i) = 2 * rand - 1; % Random y-coordinate between -1 and 1
    
    % Check if point is inside the unit circle
    if (x(i)^2 + y(i)^2) <= 1
        count = count + 1; % Increment counter if inside circle
    end
end

% Separate points inside and outside the circle
inside_circle = (x.^2 + y.^2) <= 1;
outside_circle = ~inside_circle;

% Plot points inside the circle (red)
plot(x(inside_circle), y(inside_circle), 'ro', 'Markersize', 2);

% Plot points outside the circle (blue)
plot(x(outside_circle), y(outside_circle), 'bo', 'Markersize', 2);

% Plot the
value_of_pi=(count/N)*4;
title(['Estimated value of pi: ' num2str(value_of_pi)]);

figure;
hold on;
