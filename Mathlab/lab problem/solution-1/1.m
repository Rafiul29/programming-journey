
xmax=640;
ymax=480;
x1=input('Enter starting value for x1: ');
y1=input('Enter starting value for y1: ');
x2=input('Enter ending value for x2: ');
y2=input('Enter ending value for y2: ');

for i=1:640
x=i;
y=ymax/2;
%fprintf("%d %d\n",x,y);
plot(x,y);
grid on ,hold on
end

for i=1:480
y=i;
x=xmax/2;
%fprintf("%d %d\n",x,y);
plot(x,y);
grid on ,hold on
end

%
dx=x2-x1;
dy=y2-y1;

%find the max value
if(abs(dx)>abs(dy))
    s=abs(dx);
else
    s=abs(dy);
end

%increment x-axis and y-axis
Xin=dx/s;
Yin=dy/s;

for i=1:s
    x=x+Xin;
    y=x+Yin;
  plot(round(320+x),round(240+y));
end
grid on,hold on;















