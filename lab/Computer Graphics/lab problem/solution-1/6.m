xmax=720;
ymax=680;

for i=1:720
    x=i;
    y=ymax/2;
    plot(x,y);
hold on;
end
for i=1:680
    y=i;
    x=xmax/2;
    plot(x,y);
hold on;
end

rx = input("Enter the value of rx: ");
ry = input("Enter the value of ry: ");
Xc = input("Enter the X-coordinate of center of the ellipse (Xc): ");
Yc = input("Enter the Y-coordinate of center of  the ellipse (Yc): ");
plot(320+Xc,240+Yc,'*');
% Initial decision parameter of region 1
p1 = ry^2 - rx^2 * ry + rx^2/4;

x = 0;
y = ry;

% Plotting points of region 1
while(2 * ry^2 * x < 2 * rx^2 * y)
    plot(320+x + Xc, 240+y + Yc, 'k.');
    hold on;
    plot(320-x + Xc, 240-y + Yc, 'k.'); 
    plot(320-x + Xc, 240+y + Yc, 'k.');
    plot(320+x + Xc, 240-y + Yc, 'k.');
    
    if(p1 < 0)   
        p1 = p1 + 2 * ry^2 * x + 3 * ry^2;
        x = x + 1;
    else
        p1 = p1 + 2 * ry^2 * x + 3 * ry^2 - 2 * rx^2 * y + 2 * rx^2;
        x = x + 1;
        y = y - 1;
    end
end

% Initial decision parameter of region 2
p2 = ry^2 * (x + 0.5)^2 + rx^2 * (y - 1)^2 - rx^2 * ry^2;

% Plotting points of region 2
while(y >= 0)
    plot(320+x + Xc, 240+y + Yc, 'k.');
    hold on;
    plot(320-x + Xc, 240-y + Yc, 'k.'); 
    plot(320-x + Xc, 240+y + Yc, 'k.');
    plot(320+x + Xc, 240-y + Yc, 'k.');
    
    if(p2 > 0)
        p2 = p2 - 2 * rx^2 * y + 3 * rx^2;
        y = y - 1;
    else
        p2 = p2 - 2 * rx^2 * y + 3 * rx^2 + 2 * ry^2 * x + 2 * ry^2;
        x = x + 1;
        y = y - 1;
    end
end

title('Midpoint Ellipse Drawing Algorithm');
grid on;
