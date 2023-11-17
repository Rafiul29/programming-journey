clear all;
xma=800;
yma=600;
disp('Enter lower left corner coordinate (xmin,ymin):');
xmin=input('');
ymin=input('');
disp('Enter upper right corner coordinate (xmax,ymax):');
xmax=input('');
ymax=input('');
n=input('Number of line : ');
for k=1:n
x1=input('Enter starting point x coordinate :');
y1=input('Enter starting point y coordinate :');
x2=input('Enter ending point x coordinate :');
y2=input('Enter ending point y coordinate :');
for i=1:800
x=i;
y=yma/2;
plot(x,y);
hold on;
end
for i=1:600
y=i;
x=xma/2;
plot(x,y);
hold on;
end
line([400+xmin,400+xmax],[300+ymin,300+ymin]);
line([400+xmin,400+xmin],[300+ymin,300+ymax]);
line([400+xmin,400+xmax],[300+ymax,300+ymax]);
line([400+xmax,400+xmax],[300+ymin,300+ymax]);

for i=1:4
c(i)=0;
end
x=x1;
y=y1;
if(x<xmin)
c(4)=1;
elseif(x>xmax)
c(3)=1;
elseif(y<ymin)
c(2)=1;
elseif(y>ymax)
c(1)=1;
end
a=c(1)*8+c(2)*4+c(3)*2+c(4);
for i=1:4
c(i)=0;
end
x=x2;
y=y2;
if(x<xmin)
c(4)=1;
elseif(x>xmax)
c(3)=1;
elseif(y<ymin)
c(2)=1;
elseif(y>ymax)
c(1)=1;
end
b=c(1)*8+c(2)*4+c(3)*2+c(4);
d=a & b;
if(a==0 && b==0)
disp('Line is visible');
elseif(d==0)
disp('Line is clipping candidate');
else
disp('Line is not visible');
end
end
title('Cohen Sutherland line clipping algorithm to find lines category');