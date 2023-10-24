clear all;
xmax=640;
ymax=480;
xc=input('Enter the center x coordinate: ');
yc=input('Enter the center y coordinate: ');
rx=input('Enter axis rx of this ellipse: ');
ry=input('Enter axis ry of this ellipse: ');
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
x=0;
y=ry;
srx=rx*rx;
sry=ry*ry;
srx2=srx*2;
sry2=sry*2;
px=0;
py=srx2*ry;
p=sry-srx*ry+0.25*srx;
while(px<py)
x=x+1;
px=px+sry2;
if(p<0)
p=p+px+sry;
else
y=y-1;
py=py-srx2;
p=p+px+sry-py;
end
plot(320+xc+x,240+yc+y);
plot(320+xc-x,240+yc+y);
plot(320+xc-x,240+yc-y);
plot(320+xc+x,240+yc-y);
hold on;
end
q=sry*(x+0.5)*(x+0.5)+srx*(y-1)*(y-1)-srx*sry;
while(y>0)
y=y-1;
py=py-srx2;
if(q>=0)
q=q-py+srx;
else
x=x+1;
px=px+sry2;
q=q+px+srx-py;
end
plot(320+xc+x,240+yc+y,"ok");
plot(320+xc-x,240+yc+y,"ok");
plot(320+xc-x,240+yc-y,"ok");
plot(320+xc+x,240+yc-y,"ok");
hold on;
end