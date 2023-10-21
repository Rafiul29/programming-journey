clear all;
xmax=640;
ymax=480;
x1=input('Enter a value for x1: ');
y1=input('Enter a value for y1: ');
x2=input('Enter a value for x2: ');
y2=input('Enter a value for y2: ');
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
title('Brasenham Algorithm for m>1 ');
dx=abs(x2-x1);
dy=abs(y2-y1);
if(abs(dx)<abs(dy))
p=2*dx-dy;
if(x1>x2)
x=x2;
y=y2;
xend=y1;
else
x=x1;
y=y1;
xend=y2;
end
p=2*dx-dy;
while(y<=xend)
y=y+1;
if(p<0)
p=p+2*dx;
else
x=x+1;
p=p+2*(dx-dy);
end
plot(320+x,240+y,"ok");
hold on;
end
else
legend(sprintf('Invalid Input'));
end
grid on;