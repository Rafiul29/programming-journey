clear all;
xmaxa = 700;
ymaxa = 700;
for i=1:700
x=i;
y=ymaxa/2;
plot(x,y);
hold on;
end
for j=1:700
y=j;
x=xmaxa/2;
plot(x,y);
hold on;
end
xmin=input('xmin');
ymin=input('ymin');
xmax=input('xmax');
ymax=input('ymax');
h=input('Enter pivot point x coordinate :');
k=input('Enter pivot point y coordinate :');
c=input('angle');
line([350+xmin,350+xmax],[350+ymin,350+ymin]);
line([350+xmax,350+xmax],[350+ymin,350+ymax]);
line([350+xmax,350+xmin],[350+ymax,350+ymax]);
line([350+xmin,350+xmin],[350+ymax,350+ymin]);
x1=h+xmin*cosd(x)-ymin*sind(x)-h*cosd(x)+k*sind(x);
y1=k+xmin*sind(x)+ymin*cosd(x)-h*sind(x)+k*cosd(x);
x2=h+xmax*cosd(c)-ymin*sind(c)-h*cosd(c)+k*sind(c);
y2=k+xmax*sind(c)+ymin*cosd(c)-h*sind(c)+k*cosd(c);
x3=h+xmax*cosd(c)-ymax*sind(c)-h*cosd(c)+k*sind(c);
y3=k+xmax*sind(c)+ymax*cosd(c)-h*sind(c)+k*cosd(c);
x4=h+xmin*cosd(c)-ymax*sind(c)-h*cosd(c)+k*sind(c);
y4=k+xmin*sind(c)+ymax*cosd(c)-h*sind(c)+k*cosd(c);
line([350+x1,350+x2],[350+y1,350+y2]);
line([350+x2,350+x3],[350+y2,350+y3]);
line([350+x3,350+x4],[350+y3,350+y4]);
line([350+x4,350+x1],[350+y4,350+y1]);






xmaxa = 700;
ymaxa = 700;
for i=1:700
    x=i;
    y=ymaxa/2;
    plot(x,y);
hold on;
end
for j=1:700
    y=j;
    x=xmaxa/2;
    plot(x,y);
hold on;
end

xmin=input('xmin');
ymin=input('ymin');
xmax=input('xmax');
ymax=input('ymax');
h=input('Enter pivot point x coordinate :');
k=input('Enter pivot point y coordinate :');
c=input('angle');


line([350+xmin,350+xmax],[350+ymin,350+ymin]);
line([350+xmax,350+xmax],[350+ymin,350+ymax]);
line([350+xmax,350+xmin],[350+ymax,350+ymax]);
line([350+xmin,350+xmin],[350+ymax,350+ymin]);
x1=h+xmin*cosd(c)-ymin*sind(c);
y1=k+xmin*sind(c)+ymin*cosd(c);
disp(x1);
disp(y1);
x2=h+xmax*cosd(c)-ymin*sind(c);
y2=k+xmax*sind(c)+ymin*cosd(c);
x3=h+xmax*cosd(c)-ymax*sind(c);
y3=k+xmax*sind(c)+ymax*cosd(c);
x4=h+xmin*cosd(c)-ymax*sind(c);
y4=k+xmin*sind(c)+ymax*cosd(c);
line([350+x1,350+x2],[350+y1,350+y2]);
line([350+x2,350+x3],[350+y2,350+y3]);
line([350+x3,350+x4],[350+y3,350+y4]);
line([350+x4,350+x1],[350+y4,350+y1]);