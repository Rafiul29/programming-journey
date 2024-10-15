% 04-Draw a circle using Breshenham's circle drawing algorithm.

xmax=640;
ymax=480;
xc=input('Enter the center x coordinate: ');
yc=input('Enter the center y coordinate: ');
r=input('Enter radious r of this circle: ');
for i=1:640
    x=i;
    y=ymax/2;
    plot(x,y);
hold on;
end
for i=1:480
    y=i;
    x=xmax/2;
    plot(x,y);
hold on;
end

plot(320+xc,240+yc,'*');

%assgin the x and y value
x=0;
y=r;

%decisions parameter
p=3-2*r;
title('Bresenhams Circle Drawing Algorithm');

while(x<=y)
    x=x+1;
    if(p<0)
        p=p+4*x+6;
    else
        %p>=0
        y=y-1;
        p=p+4*(x-y)+10;
    end

plot(320+xc+x,240+yc+y,"k.");
plot(320+xc+y,240+yc+x,"k.")
plot(320+xc-x,240+yc+y,"k.");
plot(320+xc-y,240+yc+x,"k.");
plot(320+xc-x,240+yc-y,"k.");
plot(320+xc-y,240+yc-x,"k.");
plot(320+xc+y,240+yc-x,"k.");
plot(320+xc+x,240+yc-y,"k.");

 fprintf("x=%d y=%d\n",x,y);
  hold on,grid on;
end





