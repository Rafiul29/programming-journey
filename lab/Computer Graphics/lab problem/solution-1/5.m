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
p=5/4-r;
title('Mid Point Circle Drawing algorithm');

while(x<=y)
    x=x+1;
    if(p<0)
        p=p+2*x+1;
    else
        %p>=0
        y=y-1;
        p=p+2*x-2*y+1;
    end

plot(320+xc+x,240+yc+y,"ok");
plot(320+xc+y,240+yc+x,"ok")
plot(320+xc-x,240+yc+y,"ok");
plot(320+xc-y,240+yc+x,"ok");
plot(320+xc-x,240+yc-y,"ok");
plot(320+xc-y,240+yc-x,"ok");
plot(320+xc+y,240+yc-x,"ok");
plot(320+xc+x,240+yc-y,"ok");

  fprintf("x=%d y=%d\n",x,y);
  hold on,grid on;
end







