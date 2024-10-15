clear all;
clc;
hold on;

time = 0:15; % Time vector from 0 to 15
xb = [100 100 120 129 140 149 158 168 179 188 198 209 219 226 234 240]; % Bomber X-coordinates
yb = [0 3 6 10 15 20 26 32 37 34 30 27 23 19 16 14]; % Bomber Y-coordinates
xf = []; % Fighter X-coordinates
yf = []; % Fighter Y-coordinates
xf(1) = 0; % Initial fighter X-position
yf(1) = 50; % Initial fighter Y-position
s = 20; % Speed of the fighter
dist = 0; % Initialize distance

for i = 1:length(time)
    pause(0.5); % Pause for half a second to visualize
    grid on;
    plot(xb(i), yb(i), 'r*'); % Plot the bomber's position
    title('Pure Pursuit Problem');
    

    plot(xf(i), yf(i), 'g*'); % Plot the fighter's position
    y = yb(i) - yf(i); % Y difference between bomber and fighter
    x = xb(i) - xf(i); % X difference between bomber and fighter
    dist = sqrt(y^2 + x^2); % Calculate the distance
    %fprintf("x and y pos - %f %f",x,y);
    
    % Output current positions and distance
    fprintf('Time: %d min, Fighter Position: (%.2f, %.2f), Bomber Position: (%d, %d), Distance: %.2f km\n', ...
            time(i), xf(i), yf(i), xb(i), yb(i), dist);
    
    % Check if the fighter is close enough to the bomber (distance <= 10 km)
    if (dist <= 10)
        fprintf('Bomber destroyed at %d min\n', time(i));
        break;
    end
    
    % Update fighter's position for the next time step
    xf(i+1) = xf(i) + s * ((xb(i) - xf(i)) / dist); % Update X-position
    yf(i+1) = yf(i) + s * ((yb(i) - yf(i)) / dist); % Update Y-position
end
