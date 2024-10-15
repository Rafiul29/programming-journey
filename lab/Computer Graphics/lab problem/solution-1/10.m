%Draw a line and clip it using Liang-Barsky algorithm

clc;
close all;

disp('Enter 2 endpoints of line as (x1, y1) and (x2, y2)');
x1 = input("Enter the value of x1: ");
y1 = input("Enter the value of y1: ");
x2 = input("Enter the value of x2: ");
y2 = input("Enter the value of y2: ");

disp('Enter 2 corners (left-bottom & right-top) of the clipping window');
x_min = input("Enter the value of Xmin: ");
y_min = input("Enter the value of Ymin: ");
x_max = input("Enter the value of Xmax: ");
y_max = input("Enter the value of Ymax: ");


% Initialize Liang-Barsky algorithm variables
dx = x2 - x1;
dy = y2 - y1;
p = [-dx, dx, -dy, dy];
q = [x1 - x_min, x_max - x1, y1 - y_min, y_max - y1];
u1 = 0;
u2 = 1;

% Liang-Barsky algorithm
for k = 1:4
    if(p(k) == 0 && q(k) < 0)
        return;

    elseif(p(k) < 0)
        r = q(k) / p(k);
        if r > u1
            u1 = r;
        end

    elseif(p(k) > 0)
        r = q(k) / p(k);
        if(r < u2)
            u2 = r;
        end
    end
end

% Calculate clipped line coordinates
xc1 = x1 + u1 * dx;
yc1 = y1 + u1 * dy;
xc2 = x1 + u2 * dx;
yc2 = y1 + u2 * dy;

% Before clipping
subplot(2, 1, 1);
% Plot the clipping window
rectangle('Position', [x_min, y_min, x_max - x_min, y_max - y_min], 'EdgeColor', 'k', 'LineWidth', 1);
hold on;
plot([x1, x2], [y1, y2], 'k', 'LineWidth', 1);
title('Line before clipping');
grid minor;
drawXandYasis(x1, y1, x2, y2, x_min, y_min, x_max, y_max);

% After clipping
subplot(2, 1, 2);
% Plot the clipping window
rectangle('Position', [x_min, y_min, x_max - x_min, y_max - y_min], 'EdgeColor', 'k', 'LineWidth', 1);
hold on;
% Plot the clipped line
if(u1 < u2)
    plot([xc1, xc2], [yc1, yc2], 'r', 'LineWidth', 1);
end

title('Line after clipping using Liang-Barsky Algorithm');

grid minor;
drawXandYasis(x1, y1, x2, y2, x_min, y_min, x_max, y_max);

function drawXandYasis(x1, y1, x2, y2, x_min, y_min, x_max, y_max)
% Draw x and y axis
xlabel('x');
ylabel('y');
axis([min([x1, x2, x_min, -5])-1 max([x1, x2, x_max, 5])+1 min([y1, y2, y_min, -5])-1 max([y1, y2, y_max, 5])+1]); % Set axis limits as desired
end