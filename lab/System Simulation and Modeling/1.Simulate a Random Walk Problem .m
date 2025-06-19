clear all;
clc;
hold on;

% Parameters
num_steps = 20; % Number of steps in the random walk

% Initialize position
x = 0;
y = 0;

% Define probabilities
forward_prob = 0.5;
backward_prob = 0.1;
right_prob = 0.2;
left_prob = 0.2;

% Preallocate arrays for plotting the drunkards path
x_pos = zeros(1, num_steps);
y_pos = zeros(1, num_steps);

% Simulate the 2D random walk
for step = 1:num_steps
    % Generate a random number to determine the direction
    move_prob = rand();
    fprintf('random: %f\n',move_prob);

    % Update position based on the generated random number
    if move_prob < forward_prob
    y = y + 1; % move forward
    fprintf('MF: (%d, %d)\n', x, y);
    elseif move_prob < forward_prob + backward_prob
    y = y - 1; % move backward
    fprintf('MB: (%d, %d)\n', x, y);
    elseif move_prob < forward_prob + backward_prob + right_prob
    x = x + 1; % move right
    fprintf('MR: (%d, %d)\n', x, y);
    else
    x = x - 1; % move left
    fprintf('ML: (%d, %d)\n', x, y);
    end
    % Store the position
    x_pos(step) = x;
    y_pos(step) = y;
    hold on;
end


% Display the final position
fprintf('Final position: (%d, %d)\n', x, y);
text(x, y, sprintf('\\rightarrow Final position: (%d, %d)', x, y));

% Plot the 2D random walk path
plot(x_pos, y_pos, '-ko', 'MarkerSize', 3, 'MarkerFaceColor', 'k', 'MarkerEdgeColor', 'k');
hold on;


% Draw X and Y axes
line([-max(abs(x_pos))-1, max(abs(x_pos))+1], [0, 0], 'Color', 'black', 'LineWidth', 0.5);  % X-axis
line([0, 0], [-max(abs(y_pos))-1, max(abs(y_pos))+1], 'Color', 'black', 'LineWidth', 0.5);  % Y-axis

% Set axis labels and title
xlabel('X axis Position');
ylabel('Y axis Position');
title('Random Walk Simulation (Drunkard Walk)');
grid on;
axis equal;
