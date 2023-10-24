
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
hold on;
end
for i=1:480
y=i;
x=xmax/2;
%fprintf("%d %d\n",x,y);
plot(x,y);
hold on;
end
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
%fprintf("%d %d\n",x,y);
%fprintf("%d %d\n",dx,dy);
if(abs(dx)>abs(dy))
    s=abs(dx);
else
s=abs(dy);
end
%fprintf("%d",s);
xinc=dx/s;
yinc=dy/s;
%fprintf("%d %d",xinc,yinc);
for k=1:s
x=x+xinc;
y=y+yinc;
fprintf("%d %d",320+x,240+y);
plot(x,y,"ok");
hold on;
end
