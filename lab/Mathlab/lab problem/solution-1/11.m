clc;
close all;
xmax=640;
ymax=480;

x1 = input('Enter control point x1: ');
y1 = input('Enter control point y1: ');
x2 = input('Enter control point x2: ');
y2 = input('Enter control point y2: ');
x3 = input('Enter control point x3: ');
y3 = input('Enter control point y3: ');
x4 = input('Enter control point x4: ');
y4 = input('Enter control point y4: ');

for i=1:640
x=i;
y=ymax/2;
plot(x,y);
grid on,hold on;
end

for i=1:480
y=i;
x=xmax/2;
plot(x,y);
grid on,hold on;
end

% Initialize Bezier matrix
Bezier_Matrix = [-1 3 -3 1; 3 -6 3 0; -3 3 0 0; 1 0 0 0];

for u = 0:0.001:1
    Px = [u^3 u^2 u 1] * Bezier_Matrix * [x1; x2; x3; x4];
    Py = [u^3 u^2 u 1] * Bezier_Matrix * [y1; y2; y3; y4];
    plot(320+Px, 240+Py, 'k.');
    grid on,hold on;
end

% plot control points
plot([320+x1, 320+x2, 320+x3, 320+x4], [240+y1, 240+y2, 240+y3, 240+y4], 'k--o');

title('Bezier Curve using Cubic Blending Function');
grid on,hold on;

