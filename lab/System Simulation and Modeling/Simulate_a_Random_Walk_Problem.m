clc;
clear all;

% Parameters
num_steps = 20;  % Number of steps
start_pos = [0, 0];  % Starting position (x, y)
curr_position = start_pos;  % Initialize current position

% Mapping of random numbers to directions:
% Forward (F): 0, 1, 2, 3, 4
% Backward (B): 5
% Left (L): 6, 7
% Right (R): 8, 9
directions_map = containers.Map({0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {'F', 'F', 'F', 'F', 'F', 'B', 'L', 'L', 'R', 'R'});

% Store positions to plot later
x_pos = zeros(1, num_steps + 1);
y_pos = zeros(1, num_steps + 1);
x_pos(1) = start_pos(1);
y_pos(1) = start_pos(2);

% Random walk simulation
for i = 1:num_steps
    % Generate a random number between 0 and 9
    rand_num = randi([0, 9]);
    
    % Determine direction based on random number
    direction = directions_map(rand_num);
    
    % Update position based on direction
    switch direction
        case 'F'
            curr_position(2) = curr_position(2) + 1;  % Move forward (Y-axis +1)
        case 'B'
            curr_position(2) = curr_position(2) - 1;  % Move backward (Y-axis -1)
        case 'L'
            curr_position(1) = curr_position(1) - 1;  % Move left (X-axis -1)
        case 'R'
            curr_position(1) = curr_position(1) + 1;  % Move right (X-axis +1)
    end
    
    % Store new position
    x_pos(i + 1) = curr_position(1);
    y_pos(i + 1) = curr_position(2);
end

% Plot the random walk
figure;
plot(x_pos, y_pos, '-ko', 'MarkerSize', 3, 'MarkerFaceColor', 'k', 'MarkerEdgeColor', 'k');
hold on;

% Display the final position
text(curr_position(1), curr_position(2), sprintf('\\rightarrow Final position: (%d, %d)', curr_position(1), curr_position(2)));

% Draw X and Y axes
line([-max(abs(x_pos))-1, max(abs(x_pos))+1], [0, 0], 'Color', 'black', 'LineWidth', 0.5);  % X-axis
line([0, 0], [-max(abs(y_pos))-1, max(abs(y_pos))+1], 'Color', 'black', 'LineWidth', 0.5);  % Y-axis

xlabel('X Position');
ylabel('Y Position');
title('Random Walk Simulation (Drunkard Walk)');
grid on;
axis equal;
