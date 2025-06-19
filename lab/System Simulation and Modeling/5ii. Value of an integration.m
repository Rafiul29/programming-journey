clc;
clear all;
hold on;

% Define the function to be integrated
f = @(x) x.^3;

% Set the integration limits
a = 2; % Lower limit 
b = 5; % Upper limit 

% Number of random points to generate
num_points = 1000;

% Define the bounding box
min_x = a;
max_x = b;
min_y = 0;
max_y = max(f(b)) + 15;

% Generate random points within the bounding box
random_x = min_x + (max_x - min_x) * rand(1, num_points);
random_y = min_y + (max_y - min_y) * rand(1, num_points);

% Initialize is_inside
is_inside = false(1, num_points);

% Check if the random points are inside the area under the curve
for i = 1:num_points
    if f(random_x(i)) >= random_y(i)
        is_inside(i) = true;
        fprintf("%f\n",random_x(i));
    end
end

% Estimate the integral
bounding_box_area = (max_x - min_x) * (max_y - min_y); % Calculate the area of the bounding box
area_ratio = (sum(is_inside) / num_points); % Calculate the ratio of points inside the area to total points
integral_estimate = area_ratio * bounding_box_area;

fprintf("X %d Y %d\n",max_x - min_x,max_y - min_y);
% Display the result
fprintf('Estimated value of the integral using Monte Carlo is %.4f\n', integral_estimate);

% Plot the function and random points
figure;
hold on;

% Plot the function curve
fplot(f, [0, b + 0.5], 'LineWidth', 1);
scatter(random_x(~is_inside), random_y(~is_inside), 10, 'red', 'filled');
scatter(random_x(is_inside), random_y(is_inside), 10, 'green', 'filled');
title(['Simulation of Monte Carlo Integration Estimated value ',num2str(integral_estimate)]);
xlabel('x');
ylabel('f(x) = x^3');
grid on;
legend('f(x) = x^3', 'Points Outside', 'Points Inside');
hold off;