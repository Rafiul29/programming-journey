clear all;
clc;
hold on;

% Define the bounding box
xmin = 0;
xmax = 10;
ymin = 0;
ymax = 6;

% Number of random points to generate
num_points = 1000;

% Generate random points within the bounding box
x_rand = xmin + (xmax - xmin) * rand(1, num_points);
y_rand = ymin + (ymax - ymin) * rand(1, num_points);
fprintf("X-rand- %f\n Y-rand- %f\n",x_rand,y_rand);

% Define the irregular figure (replace with your own coordinates)
x_irregular = [1, 2, 4, 5, 7, 8, 6, 3, 1];
y_irregular = [2, 5, 6, 4, 5, 2, 1, 1, 2];

% Determine which points are inside the irregular figure 1 is inside 0
% outside
points_inside = inpolygon(x_rand, y_rand, x_irregular, y_irregular);
fprintf("points_inside %f\n",points_inside);

% Calculate the ratio of points inside the figure to total points
area_ratio = sum(points_inside) / num_points;

% Calculate the total area of the bounding box
total_area = (xmax - xmin) * (ymax - ymin);

% Estimate the area of the irregular figure
estimated_area = area_ratio * total_area;

% Display the results
fprintf('Estimated area of the irregular figure: %.2f square units\n', estimated_area);

% Plot the results for visualization
figure;
plot(x_irregular, y_irregular,'DisplayName', 'Irregular Figure');
hold on;

% Plot points inside and outside the irregular figure
scatter(x_rand(points_inside), y_rand(points_inside), 'black.', 'DisplayName', 'Points Inside');
scatter(x_rand(~points_inside), y_rand(~points_inside), 'red.', 'DisplayName', 'Points Outside');
fprintf("X_rand %f Y-rand %f\n",x_rand(points_inside), y_rand(points_inside))
legend('Location', 'Best');
title('Monte Carlo Method for Area Estimation');
xlabel('X-coordinate');
ylabel('Y-coordinate');
axis([xmin, xmax, ymin, ymax]);
grid on;
